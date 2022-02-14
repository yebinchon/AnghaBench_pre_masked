
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hashLog; int chainLog; } ;
struct TYPE_6__ {TYPE_1__ cParams; } ;
struct TYPE_7__ {int* hashTable; int* chainTable; scalar_t__* base; scalar_t__* dictBase; int dictLimit; int lowLimit; TYPE_2__ params; } ;
typedef TYPE_3__ ZSTD_CCtx ;
typedef int U32 ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const) ;
 scalar_t__ FUNC_2 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const,scalar_t__ const* const,scalar_t__ const* const) ;
 size_t FUNC_3 (scalar_t__ const* const,int const,int const) ;

__attribute__((used)) static U32 FUNC_4(ZSTD_CCtx *VAR_0, const BYTE *const VAR_1, const U32 VAR_2, const BYTE *const VAR_3, U32 VAR_4, U32 VAR_5)
{
 U32 *const VAR_6 = VAR_0->hashTable;
 U32 const VAR_7 = VAR_0->params.cParams.hashLog;
 size_t const VAR_8 = FUNC_3(VAR_1, VAR_7, VAR_2);
 U32 *const VAR_9 = VAR_0->chainTable;
 U32 const VAR_10 = VAR_0->params.cParams.chainLog - 1;
 U32 const VAR_11 = (1 << VAR_10) - 1;
 U32 VAR_12 = VAR_6[VAR_8];
 size_t VAR_13 = 0, VAR_14 = 0;
 const BYTE *const VAR_15 = VAR_0->base;
 const BYTE *const VAR_16 = VAR_0->dictBase;
 const U32 VAR_17 = VAR_0->dictLimit;
 const BYTE *const VAR_18 = VAR_16 + VAR_17;
 const BYTE *const VAR_19 = VAR_15 + VAR_17;
 const BYTE *VAR_20;
 const U32 VAR_21 = (U32)(VAR_1 - VAR_15);
 const U32 VAR_22 = VAR_11 >= VAR_21 ? 0 : VAR_21 - VAR_11;
 U32 *VAR_23 = VAR_9 + 2 * (VAR_21 & VAR_11);
 U32 *VAR_24 = VAR_23 + 1;
 U32 VAR_25;
 U32 const VAR_26 = VAR_0->lowLimit;
 U32 VAR_27 = VAR_21 + 8;
 size_t VAR_28 = 8;

 VAR_6[VAR_8] = VAR_21;

 while (VAR_4-- && (VAR_12 > VAR_26)) {
  U32 *const VAR_29 = VAR_9 + 2 * (VAR_12 & VAR_11);
  size_t VAR_30 = FUNC_0(VAR_13, VAR_14);

  if ((!VAR_5) || (VAR_12 + VAR_30 >= VAR_17)) {
   VAR_20 = VAR_15 + VAR_12;
   if (VAR_20[VAR_30] == VAR_1[VAR_30])
    VAR_30 += FUNC_1(VAR_1 + VAR_30 + 1, VAR_20 + VAR_30 + 1, VAR_3) + 1;
  } else {
   VAR_20 = VAR_16 + VAR_12;
   VAR_30 += FUNC_2(VAR_1 + VAR_30, VAR_20 + VAR_30, VAR_3, VAR_18, VAR_19);
   if (VAR_12 + VAR_30 >= VAR_17)
    VAR_20 = VAR_15 + VAR_12;
  }

  if (VAR_30 > VAR_28) {
   VAR_28 = VAR_30;
   if (VAR_30 > VAR_27 - VAR_12)
    VAR_27 = VAR_12 + (U32)VAR_30;
  }

  if (VAR_1 + VAR_30 == VAR_3)
   break;

  if (VAR_20[VAR_30] < VAR_1[VAR_30]) {

   *VAR_23 = VAR_12;
   VAR_13 = VAR_30;
   if (VAR_12 <= VAR_22) {
    VAR_23 = &VAR_25;
    break;
   }
   VAR_23 = VAR_29 + 1;
   VAR_12 = VAR_29[1];
  } else {

   *VAR_24 = VAR_12;
   VAR_14 = VAR_30;
   if (VAR_12 <= VAR_22) {
    VAR_24 = &VAR_25;
    break;
   }
   VAR_24 = VAR_29;
   VAR_12 = VAR_29[0];
  }
 }

 *VAR_23 = *VAR_24 = 0;
 if (VAR_28 > 384)
  return FUNC_0(192, (U32)(VAR_28 - 384));
 if (VAR_27 > VAR_21 + 8)
  return VAR_27 - VAR_21 - 8;
 return 1;
}
