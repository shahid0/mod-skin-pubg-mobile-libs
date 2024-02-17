#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate
// 0x0000 (0x00E0 - 0x00E0)
class UAbilityTask_Tick_WaitAbilityActivate : public UAbilityTask_WaitAbilityActivate
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.AbilityTask_Tick_WaitAbilityActivate");
		return pStaticClass;
	}


	static class UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirementsInTick(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	static class UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateInTick_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	static class UAbilityTask_Tick_WaitAbilityActivate* WaitForAbilityActivateInTick(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
};


// Class SGameplayAbilities.SAbilitySystemBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class USAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.SAbilitySystemBlueprintLibrary");
		return pStaticClass;
	}


	static struct FGameplayTag RequestGameplayTag(const struct FString& InTagName, bool ErrorIfNotFound);
	static struct FGameplayTagContainer CreateGameplayTagContainer(TArray<struct FGameplayTag> SourceTags);
};


// Class SGameplayAbilities.SAbilitySystemComponent
// 0x00A0 (0x0D30 - 0x0C90)
class USAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0C90(0x003C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0CCC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              PreloadedAbilities;                                       // 0x0CD8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGameplayAbilitySpecHandle>          PreloadedAbilityHandles;                                  // 0x0CE4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0CF0(0x003C) (Net)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0D2C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.SAbilitySystemComponent");
		return pStaticClass;
	}


	bool TryActivateAbilitiesByTagString(const struct FString& AbilityTag, bool bAllowRemoteActivation);
	void ReloadAbilities();
	struct FGameplayAbilitySpecHandle GiveAbilityByClass(class UClass* AbilityClass);
	void CancelAbilitiesByTagString(const struct FString& AbilityTag);
};


// Class SGameplayAbilities.SGameplayAbility
// 0x0048 (0x0360 - 0x0318)
class USGameplayAbility : public UGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0318(0x003C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0354(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SGameplayAbilities.SGameplayAbility");
		return pStaticClass;
	}


	void K2_OnGiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpec& Spec);
	void AddTargetRequiredTag(const struct FString& TagName);
	void AddTargetBlockedTag(const struct FString& TagName);
	void AddSourceRequiredTag(const struct FString& TagName);
	void AddSourceBlockedTag(const struct FString& TagName);
	void AddCancelAbilityTag(const struct FString& TagName);
	void AddBlockAbilityTag(const struct FString& TagName);
	void AddActivationRequiredTag(const struct FString& TagName);
	void AddActivationOwnedTag(const struct FString& TagName);
	void AddActivationBlockedTag(const struct FString& TagName);
	void AddAbilityTag(const struct FString& TagName);
};


}

