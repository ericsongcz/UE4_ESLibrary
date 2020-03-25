// Some copyright should be here...

using UnrealBuildTool;
using System.IO;

public class ESLibrary : ModuleRules
{
	public ESLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		
		PublicIncludePaths.AddRange(
			new string[] {
				"ESLibrary/Public"
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"ESLibrary/Private"
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"ProceduralMeshComponent",
				"InputCore",
				"UMG",
				"Paper2D",
				"MariaDBConnectorLibs",
		// ... add other public dependencies that you statically link with here ...
	}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"HTTP",
				"NetworkReplayStreaming",
				"ImageWrapper",
				"RenderCore",
				"AIModule",
				"NavigationSystem",
				"ApplicationCore",
				"RHI",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		PublicDefinitions.Add("WITH_OGGVORBIS");
	}
}
