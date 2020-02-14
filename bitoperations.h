#ifndef BITOPERATIONS
#define BITOPERATIONS

#include "Std_types.h"

#define SET_BIT(X , BIT) (X |= (U32)(1<<BIT))
#define CLR_BIT(X , BIT) (X &=~(U32)(1<<BIT))
#define TOG_BIT(X , BIT) (X ^= (U32)(1<<BIT))
#define GET_BIT(X , BIT) ((X>>BIT) & (U32) 1)

#endif  
