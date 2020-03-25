#pragma once
#include "CoreUObject.h"
#include "tinyxml2.h"
#include "UnrealTinyXmlNode.generated.h"
using namespace tinyxml2;

/**
 *
 */
UCLASS(BlueprintType)
class UUnrealTinyXmlNode : public UObject
{
	GENERATED_BODY()
public:
	TSharedPtr<TinyXMLDocument> XmlFile; // keeps everything in memory
	const XMLNode* Node = NULL;

public:
	bool IsValid();

	static UUnrealTinyXmlNode* Create(TSharedPtr<TinyXMLDocument> XmlFile, XMLNode* Node);
	static UUnrealTinyXmlNode* Create(TSharedPtr<TinyXMLDocument> XmlFile, const XMLNode* Node);

	/**
	* Gets next (Step) node in a list of nodes, can return NULL.if exceeded,return last one.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|TinyXml")
		UUnrealTinyXmlNode* GetNextNode(int Step = 1);
	/**
	* Gets previous (Step) node in a list of nodes, can return NULL.if exceeded,return last one.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|TinyXml")
		UUnrealTinyXmlNode* GetPreviousNode(int Step = 1);

	/**
	* Gets the next node in a list of nodes, can return NULL.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|TinyXml")
		UUnrealTinyXmlNode* GetParentNode();

	/**
	* Gets the value of the node.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|TinyXml")
		FString GetNodeValue();

	/**
	* Gets the first child of this node which can be iterated into with GetNextNode, can return NULL.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|TinyXml")
		UUnrealTinyXmlNode* GetFirstChildNode(const int SearchDeep = 1);

	/**
	* Find first(or "loc") child  node of this node which has the same name as "NameToSearch",Will return Null if can't find.
	*/
	UFUNCTION(BlueprintCallable, Category = "ES|TinyXml")
		UUnrealTinyXmlNode* FindChildNodeByName(const FString& NameToSearch, const int loc = 1);

	/**
	* Gets the name of current node, can return NULL.
	*/
	UFUNCTION(BlueprintPure, Category = "ES|TinyXml")
		FString GetNodeName();

	/**
	* Given an attribute name,returns the value
		for the attribute of that name, or null if none
		exists
	*/
	UFUNCTION(BlueprintPure, Category = "ES|TinyXml")
		FString GetAttributeValue(const FString& AttributeName);
};