#include "../Public/FileHelper.h"
#include "AllowWindowsPlatformTypes.h"

#include "Windows/MinWindows.h"

#define WIN32_LEAN_AND_MEAN

#include <commdlg.h>
#include <shellapi.h>
#include <shlobj.h>
#include <winver.h>
#include <LM.h>
#include <tlhelp32.h>
#include <Psapi.h>



#include "HideWindowsPlatformTypes.h"
#include "Runtime/Core/Public/HAL/FileManager.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Engine/Classes/Engine/GameEngine.h"
#include "Framework/Application/SlateApplication.h"
#include "Runtime/SlateCore/Public/Widgets/SWindow.h"




#define LOCTEXT_NAMESPACE "DialogTitle"
#define STR_FILETYPES_MAX 4096
#define STR_FILENAME_MAX  66536

bool FileHelper::FileDialogShared(bool bSave, const void* parentWndHandle, const FString& title,
	const FString& defaultPath, const FString& defualtFile, const FString& fileType, uint32 Flags, TArray<FString>& outFileNames, int32& outFilterIndex)
{
	WCHAR fileName[STR_FILENAME_MAX];
	FCString::Strcpy(fileName, STR_FILENAME_MAX, *(defualtFile.Replace(TEXT("/"), TEXT("\\"))));

	WCHAR pathName[STR_FILENAME_MAX];
	FCString::Strcpy(pathName, STR_FILENAME_MAX, *(FPaths::ConvertRelativePathToFull(defaultPath).Replace(TEXT("/"), TEXT("\\"))));

	WCHAR fileTypeStr[STR_FILETYPES_MAX];
	WCHAR* fileTypesPtr = NULL;
	const int32 len = fileType.Len();

	TArray<FString> extensionList;
	TArray<FString> unformatExtensions;

	fileType.ParseIntoArray(unformatExtensions, TEXT("|"), true);
	bool bSuc = false;

	for (int i = 1; i < unformatExtensions.Num(); i += 2)
	{
		const FString& extension = unformatExtensions[i];

		if (extension != TEXT("*.*"))
		{
			int32 wildCardIndex = extension.Find(TEXT("*"));
			extensionList.Add(wildCardIndex != INDEX_NONE ? extension.RightChop(wildCardIndex + 1) : extension);
		}
	}

	if (len > 0 && len - 1 < STR_FILETYPES_MAX)
	{
		fileTypesPtr = fileTypeStr;
		FCString::Strcpy(fileTypeStr, STR_FILETYPES_MAX, *fileType);

		TCHAR* Pos = fileTypeStr;

		while (Pos[0] != 0)
		{
			if (Pos[0] == '|')
			{
				Pos[0] = 0;
			}

			Pos++;
		}

		fileTypeStr[len] = 0;
		fileTypeStr[len + 1] = 0;

		OPENFILENAME ofn;
		FMemory::Memzero(&ofn, sizeof(OPENFILENAME));

		ofn.lStructSize = sizeof(OPENFILENAME);
		ofn.hwndOwner = (HWND)parentWndHandle;
		ofn.lpstrFilter = fileTypesPtr;
		ofn.nFilterIndex = 1;
		ofn.lpstrFile = fileName;
		ofn.nMaxFile = STR_FILENAME_MAX;
		ofn.lpstrInitialDir = pathName;
		ofn.lpstrTitle = *title;

		if (len > 0)
			ofn.lpstrDefExt = &fileTypeStr[0];

		ofn.Flags = OFN_HIDEREADONLY | OFN_ENABLESIZING | OFN_EXPLORER;

		if (bSave)
			ofn.Flags |= OFN_CREATEPROMPT | OFN_OVERWRITEPROMPT | OFN_NOVALIDATE;
		else
			ofn.Flags |= OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;


		if (bSave)
			bSuc = !!::GetSaveFileName(&ofn);
		else
			bSuc = !!::GetOpenFileName(&ofn);

		if (bSuc)
		{
			//FPlatformProcess::SetCurrentWorkingDirectoryToBaseDir();

			new(outFileNames) FString(fileName);

			outFilterIndex = ofn.nFilterIndex - 1;
			FString Extension = extensionList.IsValidIndex(outFilterIndex) ? extensionList[outFilterIndex] : TEXT("");

			for (auto outFileNameIt = outFileNames.CreateIterator(); outFileNameIt; ++outFileNameIt)
			{
				FString& outFileName = *outFileNameIt;
				outFileName = IFileManager::Get().ConvertToRelativePath(*outFileName);

				if (FPaths::GetExtension(outFileName).IsEmpty() && !Extension.IsEmpty())
				{
					outFileName += Extension;
				}

				FPaths::NormalizeFilename(outFileName);
				FPaths::ConvertRelativePathToFull(outFileName);
			}

		}
		else
		{
			uint32 error = ::CommDlgExtendedError();
		}
	}

	return bSuc;
}

bool FileHelper::OpenFileDialog(const void* ParentWndHandle, const FString& title, const FString& defaultPath, const FString& defualtFile,
	const FString& fileType, uint32 Flags, TArray<FString>& outFileNames, int32& outFilterIndex)
{
	return FileDialogShared(false, ParentWndHandle, title, defaultPath, defualtFile, fileType, Flags, outFileNames, outFilterIndex);
}

bool FileHelper::OpenFileDialog(const FString FileType, TArray<FString>& outFileNames)
{
	FString DialogTitle = LOCTEXT("log...", "log ...").ToString();

	FString DefaultPath = "D:\\";
	FString DefaultFile = "";
	UGameEngine* GameEngine = Cast<UGameEngine>(GEngine);

	TSharedPtr< SWindow >  ActiveWindow = FSlateApplication::Get().GetActiveTopLevelWindow();
	TSharedRef<FGenericWindow> NativeWindow = ActiveWindow->GetNativeWindow().ToSharedRef();
	void* ParentWindowWindowHandle = NativeWindow->GetOSWindowHandle();

	FileHelper dialog;
	int32 dummyFilterIndex;
	bool isDialogOpen = dialog.OpenFileDialog(ParentWindowWindowHandle, DialogTitle, DefaultPath, DefaultFile, FileType, 0x01, outFileNames, dummyFilterIndex);


	return isDialogOpen;
}

#undef LOCTEXT_NAMESPACE