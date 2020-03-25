#include "DynamicLoader.h"

#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Core/Public/Async/Async.h"
#include "IImageWrapper.h"
#include "ImageUtils.h"
#include "IImageWrapperModule.h"
#include "ESLibraryBPLibrary.h"
#include "Engine/Texture2D.h"
#include "RenderUtils.h"




//UTexture2D* LoadTexture2DFromFile(const FString& FilePath, bool &IsValid);


 //Module loading is not allowed outside of the main thread, so we load the ImageWrapper module ahead of time.
//static IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(TEXT("ImageWrapper"));


UTexture2D* UImageLoader::LoadImageFromDisk(const FString& ImagePath)
{

	bool Succss;	
	int32 Weight;
	int32 Highting;

	return UESLibraryBPLibrary::LoadTexture2DFromFile(ImagePath, Succss, Weight, Highting);
}




AExeActor::AExeActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

bool AExeActor::Getstat()
{

	bool a = FPlatformProcess::IsProcRunning(CheckProc);

	return a;

	//return true;
}


// Called when the game starts or when spawned
void AExeActor::BeginPlay()
{

	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("EXE Begin"));

}

void AExeActor::Tick(float DeltaTime)
{
	//Super::Tick();

	Super::Tick(DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("I AM IN There"));

	bool a = FPlatformProcess::IsProcRunning(CheckProc);

	if (!a && !bisShutDown)
	{

		UE_LOG(LogTemp, Warning, TEXT("EXE End"));

		bisShutDown = true;
		ProcShutdown.Broadcast(true);
		PrimaryActorTick.bCanEverTick = false;

		Destroy();

	}
	//return true;
}