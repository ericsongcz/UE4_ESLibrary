#include "MySQLDatabase.h"
#include "ESLibrary.h"
#include <string>
#include "Engine.h"

UMySQLDatabase::UMySQLDatabase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UMySQLConnection* UMySQLDatabase::MySQLInitConnection(FString Host, FString UserName, FString UserPassword, FString DatabaseName)
{
	std::string HostString(TCHAR_TO_UTF8(*Host));
	std::string UserNameString(TCHAR_TO_UTF8(*UserName));
	std::string UserPasswordString(TCHAR_TO_UTF8(*UserPassword));
	std::string DatabaseNameString(TCHAR_TO_UTF8(*DatabaseName));

	UMySQLConnection* cs = NewObject<UMySQLConnection>();

	if (mysql_library_init(0, nullptr, nullptr) != 0)
	{
		UE_LOG(LogTemp, Error, TEXT("MySQLInitConnection: FAILED TO INIT mysql library"));
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("FAILED TO INIT mysql library"));
		mysql_library_end();
		return nullptr;
	}

	cs->globalCon = mysql_init(nullptr);
	if (!cs->globalCon)
	{
		UE_LOG(LogTemp, Error, TEXT("MySQLInitConnection: FAILED TO INIT connection"));
		mysql_library_end();
		return nullptr;
	}

	if (!mysql_real_connect(cs->globalCon,
		HostString.c_str(),
		UserNameString.c_str(),
		UserPasswordString.c_str(),
		DatabaseNameString.c_str(),
		0, nullptr, 0))
	{
		UE_LOG(LogTemp, Error, TEXT("MySQLInitConnection: Failed to Connect to Database!"));
		UMySQLConnection::MySQLCloseConnection(cs);
		return nullptr;
	}

	if (mysql_set_character_set(cs->globalCon, "utf8") != 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("MySQLConnector: Can't set UTF-8 with mysql_set_character_set"));
		UE_LOG(LogTemp, Error, TEXT("MySQLInitConnection: Can't set UTF-8 with mysql_set_character_set"));
		UMySQLConnection::MySQLCloseConnection(cs);
		return nullptr;
	}

	return cs;
}

bool UMySQLDatabase::MySQLConnectorExecuteQuery(FString Query, UMySQLConnection* Connection)
{
	/*	FString qwe = "";
		qwe = qwe + TEXT("INSERT INTO `test`.`t1` (`Qwe`) VALUES ('");
		qwe = qwe + Name;
		qwe = qwe + TEXT("');");*/


	if (!Connection || !Connection->globalCon)
	{
		UE_LOG(LogTemp, Error, TEXT("Connection is NULL!"));
		return false;
	};

	std::string MyStdString(TCHAR_TO_UTF8(*Query));

	//if (mysql_query(con, "INSERT INTO `test`.`t1` (`Qwe`) VALUES ('§±§â§Ú§Ó§Ö§ä ');")) {
	if (mysql_query(Connection->globalCon, MyStdString.c_str()))
	{
		return false;
	}
	return true;
}

bool UMySQLDatabase::DropTable(const FString TableName, UMySQLConnection* Connection)
{
	if (!Connection)
	{
		UE_LOG(LogTemp, Error, TEXT("Connection is NULL!"));
		return false;
	};

	bool idxCrSts = true;

	FString Query = "DROP TABLE " + TableName;

	idxCrSts = MySQLConnectorExecuteQuery(Query, Connection);

	return idxCrSts;
}

bool UMySQLDatabase::TruncateTable(const FString TableName, UMySQLConnection* Connection)
{
	if (!Connection)
	{
		UE_LOG(LogTemp, Error, TEXT("Connection is NULL!"));
		return false;
	};

	bool idxCrSts = true;


	FString Query = "DELETE FROM " + TableName + ";";

	//LOGSQLITE(Warning, *query);

	idxCrSts = MySQLConnectorExecuteQuery(Query, Connection);

	return idxCrSts;
}


FMySQLConnectorTable UMySQLDatabase::CreateTable(const FString TableName,
	const TArray<FMySQLConnectorTableField> Fields, UMySQLConnection* Connection)
{
	/*CREATE TABLE `test`.`new_table` (
		`id` INT NOT NULL AUTO_INCREMENT,
		`q` VARCHAR(45) NOT NULL,
		PRIMARY KEY(`id`));*/

	FMySQLConnectorTable t;

	if (!Connection || !Connection->MySQLCheckConnection())
	{
		UE_LOG(LogTemp, Error, TEXT("Not connected or Connection is NULL!"));
		return t;
	};

	t.DatabaseName = TEXT("");
	t.TableName = TableName;
	t.Fields = Fields;
	//t.PK = PK;

	FString query = "";
	query += "CREATE TABLE IF NOT EXISTS ";
	query += TableName;
	query += "(";

	bool singlePrimaryKeyExists = false;

	for (const FMySQLConnectorTableField& field : Fields)
	{
		if (field.ResultStr != "")
		{
			query += field.ResultStr;
			if (!field.ResultStr.EndsWith(TEXT(", ")))
			{
				query += ", ";
			}
		}
	}

	//UE_LOG(LogMySQL_Database, Error, TEXT("1!!!%s!!!"), *query);

	query = query.Left(query.Len() - 2);
	query = query + ");";

	//UE_LOG(LogMySQL_Database, Error, TEXT("2!!!%s!!!"), *query);

	//UE_LOG(LogMySQL_Database2, Warning, TEXT("Your message"));
	//UE_LOG(LogMySQL_Database, Warning, TEXT("!!!%s"), *query);
	//LogMySQL_Database2(Warning, *query);

	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("MySQLConnector: ") + query);

	t.Created = MySQLConnectorExecuteQuery(query, Connection);

	return t;
}

FMySQLConnectorTableField UMySQLDatabase::MySQLConnectorINT(const FString FieldName, const bool PK, const bool AI)
{
	/*CREATE TABLE `test`.`new_tabled` (
		`id` INT NOT NULL AUTO_INCREMENT,
		PRIMARY KEY(`id`),
			`q` VARCHAR(45) NOT NULL
			);*/

	FMySQLConnectorTableField f;
	f.FieldType = "INT";
	f.FieldName = FieldName;

	FString outStr = "`" + FieldName + "` INT ";
	if (AI)
	{
		outStr += "  NOT NULL AUTO_INCREMENT, ";
	}

	if (PK)
	{
		outStr += "  PRIMARY KEY(`" + FieldName + "`) ";
	}

	f.ResultStr = outStr;

	return f;
}

FMySQLConnectorTableField UMySQLDatabase::MySQLConnectorVARCHAR(const FString FieldName, const FString FieldLength,
	const bool PK, const bool Unique, const bool NotNull)
{
	/*
	CREATE TABLE `test`.`new_table` (
	`q` VARCHAR(15) NOT NULL,

	PRIMARY KEY(`q`),
	UNIQUE INDEX `q_UNIQUE` (`q` ASC),
	`w` INT NULL);
	*/

	FMySQLConnectorTableField f;
	f.FieldType = "VARCHAR(" + FieldLength + ")";
	f.FieldName = FieldName;

	FString outStr = "";

	if (NotNull)
	{
		outStr = " `" + FieldName + "` " + "VARCHAR(" + FieldLength + ") NOT NULL, ";
	}
	else
	{
		outStr = " `" + FieldName + "` " + "VARCHAR(" + FieldLength + "), ";
	}

	if (PK)
	{
		outStr += "  PRIMARY KEY(`" + FieldName + "`), ";
	}

	if (Unique)
	{
		outStr += "  UNIQUE INDEX `" + FieldName + "_UNIQUE` (`" + FieldName + "` ASC), ";
	}

	f.ResultStr = outStr;

	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("!!!") + f.ResultStr+ TEXT("!!!"));/

	return f;
}

bool UMySQLDatabase::MySQLConnectorInsertTest(const FString Query, UMySQLConnection* Connection)
{
	RunQueryAndGetResults(Query, Connection);
	//	RunQueryAndGetResults(TEXT("select id, FName from t2"), Connection);
	return true;
}

bool UMySQLDatabase::MySQLConnectorGetPlayerControllerIP(FString& IP, int32& IP_int, APlayerController* PlayerController)
{
	if (PlayerController)
	{
		UNetConnection* connection = PlayerController->GetNetConnection();
		if (connection)
		{
			IP = connection->LowLevelGetRemoteAddress(false);
			// IP_int = connection->GetAddrAsInt();
			// Simple fix for 4.24
			uint32 tmpIP;
			connection->GetRemoteAddr().Get()->GetIp(tmpIP);
			IP_int = tmpIP;

			return true;
		}
	}
	IP = "";
	IP_int = -1;
	return false;
}

#pragma warning(push)
#pragma warning( disable : 4706 )
MySQLConnectorQueryResult UMySQLDatabase::RunQueryAndGetResults(FString Query, UMySQLConnection* Connection)
{
	MySQLConnectorQueryResult resultOutput;
	if (!Connection)
	{
		UE_LOG(LogTemp, Error, TEXT("Connection is NULL!"));
		resultOutput.ErrorMessage = "Connection is NULL!";
		resultOutput.Success = false;
		return resultOutput;
	};

	if (!Connection->MySQLCheckConnection())
	{
		UE_LOG(LogTemp, Error, TEXT("Not connected!"));
		resultOutput.ErrorMessage = "Not connected!";
		resultOutput.Success = false;
		return resultOutput;
	};

	//////////////////////////////////////////////////////////////////////////
	// Get and assign the data
	//////////////////////////////////////////////////////////////////////////

	std::string MyStdString(TCHAR_TO_UTF8(*Query));

	if (mysql_query(Connection->globalCon, MyStdString.c_str())) // "SELECT * FROM Cars"
	{
		//finish_with_error(con);
	}

	MYSQL_RES* result = mysql_store_result(Connection->globalCon);

	if (!result)
	{
		//finish_with_error(con);		
		UE_LOG(LogTemp, Error, TEXT("Result is NULL!"));
		resultOutput.ErrorMessage = "Result is NULL!";
		resultOutput.Success = false;
		return resultOutput;
	}

	int num_fields = mysql_num_fields(result);

	TArray<int> fieldTypes;
	TArray<FString> fieldNames;

	MYSQL_FIELD* fields;
	fields = mysql_fetch_fields(result);
	if (fields)
	{
		for (int i = 0; i < num_fields; i++)
		{
			FString NewString = FString::FromInt(fields[i].type);
			//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("MySQLConnector: Type is:") + NewString);

			fieldTypes.Add(fields[i].type);
			fieldNames.Add(UTF8_TO_TCHAR(fields[i].name));
		}
	}

	//////////////////////////////////////////////////////////////////////////
	// Get and assign the data
	//////////////////////////////////////////////////////////////////////////

	TArray<MySQLConnectorResultValue> resultRows;

	MYSQL_ROW row;
	while ((row = mysql_fetch_row(result)))
	{
		MySQLConnectorResultValue rowVal;

		for (int i = 0; i < num_fields; i++)
		{
			MySQLConnectorResultField val;

			FString columnNameStr = fieldNames[i];
			val.Name = columnNameStr;

			FString fieldValueStr = (UTF8_TO_TCHAR(row[i]));

			switch (fieldTypes[i])
			{
			case enum_field_types::MYSQL_TYPE_LONG:
				//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("MySQLConnector: Type is: MYSQL_TYPE_LONG "));
				//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("VALUE is '") + fieldValueStr + TEXT("' "));
				val.Type = MySQLConnectorResultValueTypes::Int;
				val.IntValue = FCString::Atoi(*fieldValueStr);
				break;
			case enum_field_types::MYSQL_TYPE_VAR_STRING:
				//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("MySQLConnector: Type is: MYSQL_TYPE_VAR_STRING"));
				//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("VALUE is '") + fieldValueStr + TEXT("' "));
				val.Type = MySQLConnectorResultValueTypes::Varchar;
				val.StringValue = fieldValueStr;
				break;
			default:
				/*GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("MySQLConnector: Type is: UNKNOWN"));
				GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("VALUE is '") + fieldValueStr + TEXT("' "));*/
				val.Type = MySQLConnectorResultValueTypes::UnsupportedValueType;
				val.IntValue = FCString::Atoi(*fieldValueStr);
				val.StringValue = fieldValueStr;
			}

			rowVal.Fields.Add(val);
		}

		resultRows.Add(rowVal);
	}

	mysql_free_result(result);

	resultOutput.Results = resultRows;
	resultOutput.Success = true;
	return resultOutput;
}

FMySQLConnectoreQueryResult UMySQLDatabase::MySQLConnectorGetData(const FString& Query, UMySQLConnection* Connection)
{
	FMySQLConnectoreQueryResult result;

	//////////////////////////////////////////////////////////////////////////
	// Get the results
	//////////////////////////////////////////////////////////////////////////
	if (!Connection || !Connection->MySQLCheckConnection())
	{
		UE_LOG(LogTemp, Error, TEXT("Not connected or Connection is NULL!"));
		result.ErrorMessage = "Not connected or Connection is NULL!";
		result.Success = false;
		return result;
	}

	MySQLConnectorQueryResult queryResult = RunQueryAndGetResults(Query, Connection);
	result.Success = queryResult.Success;
	result.ErrorMessage = queryResult.ErrorMessage;

	for (auto row : queryResult.Results)
	{
		FMySQLConnectorQueryResultRow outRow;
		for (auto field : row.Fields)
		{
			FMySQLConnectorKeyValuePair outField;
			outField.Key = field.Name;
			outField.Value = field.ToString();

			outRow.Fields.Add(outField);
		}
		result.ResultRows.Add(outRow);
	}


	return result;
}
