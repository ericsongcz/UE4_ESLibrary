#pragma once
#include "CoreUObject.h"
#include "tinyxml2.h"
#include "UnrealTinyXmlDocument.generated.h"
using namespace tinyxml2;

/**
 *
 */
UCLASS(BlueprintType)
class UUnrealTinyXmlDocument : public UObject
{
	GENERATED_BODY()


public:
	TinyXMLDocument* XmlFilePtr; // 

	bool IsValid();


	/**
	* Load xml file from disk, return ture if load successful, or it will be false.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|TinyXml")
		bool LoadXmlFie(const FString& File);

	/**
	* Get the root node of current loaded xml file, returns NULL if it can't be parsed.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|TinyXml")
		UUnrealTinyXmlNode* GetRootNode();

	/**
	* Clear the document that has this node, resetting it to the initial state(All nodes of this document will become null!).
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|TinyXml")
		void Clear();

};