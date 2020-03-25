#include "MySQLConnection.h"
#include "ESLibrary.h"


UMySQLConnection::UMySQLConnection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool UMySQLConnection::MySQLCheckConnection()
{
	if (globalCon)
	{
		return mysql_ping(globalCon) == 0;
	}
	return false;
}

bool UMySQLConnection::MySQLCloseConnection(UMySQLConnection* Connection)
{
	if (Connection) {
		if (Connection->MySQLCheckConnection())
		{
			mysql_close(Connection->globalCon);
			Connection->globalCon = nullptr;
			mysql_library_end();
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("MySQLCloseConnection: Connection is valid but Server does no respond!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("MySQLCloseConnection: Connection is null!"));
	}
	return false;
}
