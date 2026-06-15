class CheatManager
{
private:
	SDK::UWorld** _UWorld;
	SDK::UWorld* gWorld;
	SDK::APlayerController* PlayerController;
	SDK::ULocalPlayer* LocalPlayer;
	SDK::UGameInstance* OwningGameInstance;
	SDK::UGameViewportClient* GameViewportClient;
	SDK::AGameStateBase* GameState;
	SDK::AActor* obj;
	SDK::UGameplayStatics* UGStatics;
	SDK::UKismetSystemLibrary* KismetSystemLib;
	SDK::APawn* MyPlayer;
	SDK::ABP_FirstPersonCharacter_Main_C* BaseClass; //change a class for each game
	SDK::UKismetMathLibrary* MathLib;
	int x, y = 0;
public:
	void Init();
	void DumpBones();
};