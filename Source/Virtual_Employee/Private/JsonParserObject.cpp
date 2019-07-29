// Fill out your copyright notice in the Description page of Project Settings.

#include "JsonParserObject.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"

FString UJsonParserObject::JsonIntializer(FString PathToJson)
{
    FString projectDir = FPaths::GameDir();
    projectDir += PathToJson;
    FString File;
    if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*projectDir))
    {
        UE_LOG(LogTemp, Warning, TEXT("FileNotFound"));
        return *File;
    }
    else {
        FFileHelper::LoadFileToString(File, *projectDir);
        return *File;
}
}
