#include "UnrealTinyXmlPrivatePCH.h"
#include "UnrealTinyXmlDocument.h"
#include "Misc/Paths.h"

bool UUnrealTinyXmlDocument::IsValid()
{
	return this->XmlFilePtr != nullptr;
}

bool UUnrealTinyXmlDocument::LoadXmlFie(const FString& File)
{
	//获取Xml文件路径
	FString XmlPath = FPaths::GameContentDir() + "XmlConfig/" + File;

	//检查文件是否存在
	if (!(FPaths::FileExists(XmlPath)))
	{
		UE_LOG(LogTemp, Error, TEXT("要解析的Xml文件不存在，确认路径正确"));
		return false;
	}

	//读取文件
	this->XmlFilePtr->LoadFile(TCHAR_TO_UTF8(*XmlPath));
	//检测Xml文件解析是否包含错误
	if (XmlFilePtr->Error())
	{
		UE_LOG(LogTemp, Error, TEXT("Xml文件加载错误,错误描述:%s"), UTF8_TO_TCHAR(XmlFilePtr->ErrorName()));
		return false;
	}
	return true;


}

UUnrealTinyXmlNode* UUnrealTinyXmlDocument::GetRootNode()
{
	if (!IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Xml文档必须成功加载一个xml文件后，才能获取节点"));
	}

	//获取根结点
	tinyxml2::XMLNode* RootNode = XmlFilePtr->RootElement();

	//检查错误
	if (RootNode == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("获取给定Xml文件根结点失败!"));
		return nullptr;
	}

	TSharedPtr<TinyXMLDocument> XmlFile = MakeShareable(XmlFilePtr);
	return UUnrealTinyXmlNode::Create(XmlFile, RootNode);
}

void UUnrealTinyXmlDocument::Clear()
{
	this->XmlFilePtr->Clear();
	UE_LOG(LogTemp, Warning, TEXT("清理完毕"));
	return;
}