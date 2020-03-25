#pragma once

#include "Core.h"
#include "Engine.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "PixelFormat.h"
#include "DynamicLoader.generated.h"

// Forward declarations
class UTexture2D;

/**
 *
 */

UCLASS()
class  UImageLoader : public UObject
{
	GENERATED_BODY()

public:
	/**
	Loads an image file from disk into a texture. This will block the calling thread until completed.
	@return A texture created from the loaded image file.
	*/
	UFUNCTION(BlueprintCallable, Category = ImageLoader, meta = (HidePin = "Outer", DefaultToSelf = "Outer"))
		static UTexture2D* LoadImageFromDisk(const FString& ImagePath);

public:

	/**
	Declare a broadcast-style delegate type, which is used for the load completed event.
	Dynamic multicast delegates are the only type of event delegates that Blueprint scripts can bind to.
	*/

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnImageLoadCompleted, UTexture2D*, Texture);


	UPROPERTY(BlueprintAssignable, Category = ImageLoader, meta = (AllowPrivateAccess = true))
		FOnImageLoadCompleted LoadCompleted;

	/** This accessor function allows C++ code to bind to the event. */
	FOnImageLoadCompleted& OnLoadCompleted()
	{
		return LoadCompleted;
	}

	/** Helper function to dynamically create a new texture from raw pixel data. */
	//static UTexture2D* CreateTexture(UObject* Outer, const TArray<uint8>& PixelData, int32 InSizeX, int32 InSizeY, EPixelFormat PixelFormat = EPixelFormat::PF_B8G8R8A8, FName BaseName = NAME_None);

private:
	/**
	Holds the load completed event delegate.
	Giving Blueprint access to this private variable allows Blueprint scripts to bind to the event.
	*/


	/** Holds the future value which represents the asynchronous loading operation. */
	TFuture<UTexture2D*> Future;


};

UCLASS()
class AExeActor : public AActor
{
	GENERATED_BODY()

public:
	AExeActor();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, meta = (Keywords = "FFMPEGPort sample test testing"), Category = "FFMPEGPortTesting")
		bool Getstat();

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProcShutdown, bool, IsOver);

	UPROPERTY(BlueprintAssignable, Category = FFMPEGPort, meta = (AllowPrivateAccess = true))
		FOnProcShutdown ProcShutdown;

public:

	bool bisShutDown = false;

	FProcHandle CheckProc;

};