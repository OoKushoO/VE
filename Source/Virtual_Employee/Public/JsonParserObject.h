// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JsonParserObject.generated.h"

/**
 * 
 */
UCLASS()
class VIRTUAL_EMPLOYEE_API UJsonParserObject : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
  
    public:
    
    UFUNCTION(BlueprintCallable, category = "JsonParser")
    static FString JsonIntializer(FString PathToJson);

};
