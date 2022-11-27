// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EngineUtils.h"


/**
 * 
 */
class ARENAVR_API WorldUtils
{
public:

	template <typename T>
	static void FindAllActors(UWorld* world, TArray<T*>& out)
	{
		for (TActorIterator<T> it(world); it; ++it)
		{
			out.Add(*it);
		}
	}
};
