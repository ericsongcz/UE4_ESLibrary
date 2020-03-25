#pragma once

#include "MySQLConnectorStructs.generated.h"

USTRUCT(BlueprintType)
struct FMySQLConnectorTableField
{
	GENERATED_USTRUCT_BODY()

		/** String with piece if SQL script*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ES|MySQLConnector|Tables|Fields")
		FString ResultStr = "";

	/** Field name*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ES|MySQLConnector|Tables|Fields")
		FString FieldName = "";

	/** Field type*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ES|MySQLConnector|Tables|Fields")
		FString FieldType = "";

	/** Field value*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ES|MySQLConnector|Tables|Fields")
		FString FieldValue = "";

};

USTRUCT(BlueprintType)
struct FMySQLConnectorPrimaryKey
{
	GENERATED_USTRUCT_BODY()

		/** String with piece if SQL script*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ES|MySQLConnector|Tables|Fields")
		FString ResultStr = "";
};

USTRUCT(BlueprintType)
struct FMySQLConnectorTable
{
	GENERATED_USTRUCT_BODY()

		/** Database name*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ES|MySQLConnector|Tables|Fields")
		FString DatabaseName = "";

	/** Table name*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ES|MySQLConnector|Tables|Fields")
		FString TableName = "";

	/** Array with Fields*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ES|MySQLConnector|Tables|Fields")
		TArray<FMySQLConnectorTableField> Fields;

	///** Primary Key */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySQLConnector|Tables|Fields")
	//	FMySQLConnectorPrimaryKey PK;

	/** Created Key */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ES|MySQLConnector|Tables|Fields")
		bool Created = false;

};
