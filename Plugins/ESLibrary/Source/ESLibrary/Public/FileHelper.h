#pragma once
#include "UnrealString.h"
#include "CoreMinimal.h"

class FileHelper final
{
public:
	bool OpenFileDialog(const FString FileType, TArray<FString>& outFileNames);

protected:
	bool OpenFileDialog(const void* ParentWndHandle, const FString& title, const FString& defaultPath, const FString& defualtFile, const FString& fileType, uint32 Flags, TArray<FString>& outFileNames, int32& outFilterIndex);

private:
	bool FileDialogShared(bool bSave, const void* parentWndHandle, const FString& title, const FString& defaultPath, const FString& defualtFile, const FString& fileType, uint32 Flags, TArray<FString>& outFileNames, int32& outFilterIndex);
};