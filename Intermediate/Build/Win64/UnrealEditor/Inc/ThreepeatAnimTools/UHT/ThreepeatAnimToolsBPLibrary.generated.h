// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThreepeatAnimToolsBPLibrary.h"

#ifdef THREEPEATANIMTOOLS_ThreepeatAnimToolsBPLibrary_generated_h
#error "ThreepeatAnimToolsBPLibrary.generated.h already included, missing '#pragma once' in ThreepeatAnimToolsBPLibrary.h"
#endif
#define THREEPEATANIMTOOLS_ThreepeatAnimToolsBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UThreepeatAnimToolsBPLibrary *********************************************
#define FID_Projects_UE56_TatoolsDev_Plugins_ThreepeatAnimTools_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execApplyTimeDilationToSelection); \
	DECLARE_FUNCTION(execThreepeatScrollSequencerToTopOrBottom); \
	DECLARE_FUNCTION(execThreepeatExecuteShiftKeysFilter); \
	DECLARE_FUNCTION(execThreepeatExecuteAlignToKeyFilter); \
	DECLARE_FUNCTION(execThreepeatExecuteEulerFilter); \
	DECLARE_FUNCTION(execSelectionSetToString); \
	DECLARE_FUNCTION(execThreepeatAnimToolsViewerSnapshot);


THREEPEATANIMTOOLS_API UClass* Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_NoRegister();

#define FID_Projects_UE56_TatoolsDev_Plugins_ThreepeatAnimTools_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUThreepeatAnimToolsBPLibrary(); \
	friend struct Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THREEPEATANIMTOOLS_API UClass* Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UThreepeatAnimToolsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ThreepeatAnimTools"), Z_Construct_UClass_UThreepeatAnimToolsBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UThreepeatAnimToolsBPLibrary)


#define FID_Projects_UE56_TatoolsDev_Plugins_ThreepeatAnimTools_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThreepeatAnimToolsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThreepeatAnimToolsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThreepeatAnimToolsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThreepeatAnimToolsBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UThreepeatAnimToolsBPLibrary(UThreepeatAnimToolsBPLibrary&&) = delete; \
	UThreepeatAnimToolsBPLibrary(const UThreepeatAnimToolsBPLibrary&) = delete; \
	NO_API virtual ~UThreepeatAnimToolsBPLibrary();


#define FID_Projects_UE56_TatoolsDev_Plugins_ThreepeatAnimTools_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_36_PROLOG
#define FID_Projects_UE56_TatoolsDev_Plugins_ThreepeatAnimTools_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_UE56_TatoolsDev_Plugins_ThreepeatAnimTools_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_39_RPC_WRAPPERS \
	FID_Projects_UE56_TatoolsDev_Plugins_ThreepeatAnimTools_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_39_INCLASS \
	FID_Projects_UE56_TatoolsDev_Plugins_ThreepeatAnimTools_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UThreepeatAnimToolsBPLibrary;

// ********** End Class UThreepeatAnimToolsBPLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_UE56_TatoolsDev_Plugins_ThreepeatAnimTools_Source_ThreepeatAnimTools_Public_ThreepeatAnimToolsBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
