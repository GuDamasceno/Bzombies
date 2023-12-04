// Augusto Damasceno's YouTube Channel Copyright

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BzPlayerController.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class BZOMBIES_API ABzPlayerController : public APlayerController
{
	GENERATED_BODY()

	
protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	// Begin Actor interface
protected:

	virtual void BeginPlay() override;

	// End Actor interface
};
