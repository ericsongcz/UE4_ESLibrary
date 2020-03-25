#include "UnrealTinyXmlPrivatePCH.h"
#include "UnrealTinyXmlNode.h"

bool UUnrealTinyXmlNode::IsValid()
{
	return (XmlFile.IsValid()) && (Node != nullptr);
}

UUnrealTinyXmlNode* UUnrealTinyXmlNode::Create(TSharedPtr<TinyXMLDocument> XmlFile, XMLNode* Node)
{
	//创建Node
	UUnrealTinyXmlNode* Instance = NewObject<UUnrealTinyXmlNode>();
	Instance->XmlFile = XmlFile;
	Instance->Node = Node;
	return Instance;
}

UUnrealTinyXmlNode* UUnrealTinyXmlNode::Create(TSharedPtr<TinyXMLDocument> XmlFile, const XMLNode* Node)
{
	//创建Node
	UUnrealTinyXmlNode* Instance = NewObject<UUnrealTinyXmlNode>();
	Instance->XmlFile = XmlFile;
	Instance->Node = Node;
	return Instance;
}

UUnrealTinyXmlNode* UUnrealTinyXmlNode::GetNextNode(int Step /*= 1*/)
{
	//检查错误
	if (!IsValid() || Step <= 0)
	{
		return NULL;
	}

	//找到下一个
	const XMLNode* NextNode = Node->NextSibling();

	if (NextNode == nullptr)
		return NULL;

	//如果要找不止一个,则继续找
	if (Step > 1)
	{
		for (int i = 2; i <= Step; i++)
		{
			if (NextNode->NextSibling() == nullptr)
				break;
			NextNode = NextNode->NextSibling();
		}
		return UUnrealTinyXmlNode::Create(XmlFile, NextNode);
	}
	else
		return UUnrealTinyXmlNode::Create(XmlFile, NextNode);
}


UUnrealTinyXmlNode* UUnrealTinyXmlNode::GetPreviousNode(int Step /*= 1*/)
{
	//检查错误
	if (!IsValid() || Step <= 0)
	{
		return NULL;
	}

	//找到下一个
	const XMLNode* NextNode = Node->PreviousSibling();

	if (NextNode == nullptr)
		return NULL;
	//如果要找不止一个,则继续找
	if (Step > 1)
	{
		for (int i = 2; i <= Step; i++)
		{
			if (NextNode->PreviousSibling() == nullptr)
				break;
			NextNode = NextNode->PreviousSibling();
		}
		return UUnrealTinyXmlNode::Create(XmlFile, NextNode);
	}
	else
		return UUnrealTinyXmlNode::Create(XmlFile, NextNode);
}

UUnrealTinyXmlNode* UUnrealTinyXmlNode::GetParentNode()
{
	if (!IsValid())
	{
		return NULL;
	}
	const XMLNode* ParentNode = Node->Parent();
	if (ParentNode == nullptr)
	{
		return NULL;
	}

	return UUnrealTinyXmlNode::Create(XmlFile, ParentNode);
}

FString UUnrealTinyXmlNode::GetNodeValue()
{
	if (!IsValid())
	{
		return TEXT("");
	}
	return UTF8_TO_TCHAR(Node->ToElement()->GetText());
}

UUnrealTinyXmlNode* UUnrealTinyXmlNode::GetFirstChildNode(const int SearchDeep)
{
	if (!IsValid())
	{
		return NULL;
	}
	const XMLNode* FirstChild = Node->FirstChild();
	int counter = 1;
	while (counter < SearchDeep)
	{
		FirstChild = FirstChild->FirstChild();
		counter++;
	}

	if (FirstChild == nullptr)
	{
		return NULL;
	}
	return UUnrealTinyXmlNode::Create(XmlFile, FirstChild);
}

UUnrealTinyXmlNode* UUnrealTinyXmlNode::FindChildNodeByName(const FString& NameToSearch, const int loc)
{
	if (!IsValid())
	{
		return NULL;
	}
	const XMLNode* TempNode = Node->FirstChild();
	if (TempNode == nullptr)
		return nullptr;

	int counter = 0;

	while (TempNode != nullptr)
	{
		if (strcmp(TempNode->ToElement()->Name(), TCHAR_TO_UTF8(*NameToSearch)) == 0)
		{
			counter++;
			if (counter >= loc)
				return UUnrealTinyXmlNode::Create(XmlFile, TempNode);
		}
		TempNode = TempNode->NextSibling();
	}

	return NULL;

}

FString UUnrealTinyXmlNode::GetNodeName()
{
	if (!IsValid())
	{
		return "";
	}
	return UTF8_TO_TCHAR(Node->ToElement()->Name());
}

FString UUnrealTinyXmlNode::GetAttributeValue(const FString& AttributeName)
{
	if (!IsValid())
	{
		return TEXT("");
	}
	return UTF8_TO_TCHAR(Node->ToElement()->Attribute(TCHAR_TO_UTF8(*AttributeName)));
}