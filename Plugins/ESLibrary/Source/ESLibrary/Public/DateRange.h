#pragma once

#include "CoreMinimal.h"
#include "Range.h"
#include "DateRange.generated.h"

#if !CPP      //noexport class

/**
 * Defines a single bound for a range of values.
 * @note This is a mirror of TRangeBound<float>, defined in RangeBound.h
 */
USTRUCT(noexport, BlueprintType)
struct FDateRangeBound
{
	/** Holds the type of the bound. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Range)
		TEnumAsByte<ERangeBoundTypes::Type> Type;

	/** Holds the bound's value. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Range)
		FDateTime Value;
};

/**
 * A contiguous set of floats described by lower and upper bound values.
 * @note This is a mirror of TRange<float>, defined in Range.h
 */
USTRUCT(noexport, BlueprintType)
struct FDateRange
{
	/** Holds the range's lower bound. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Range)
		FDateRangeBound LowerBound;

	/** Holds the range's upper bound. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Range)
		FDateRangeBound UpperBound;
};

#endif