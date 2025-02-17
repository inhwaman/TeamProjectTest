// MyActor.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

#ifndef TEAMPROJECT_API
#define TEAMPROJECT_API
#endif

UCLASS()
class TEAMPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	AMyActor();

	virtual void BeginPlay() override;

};
