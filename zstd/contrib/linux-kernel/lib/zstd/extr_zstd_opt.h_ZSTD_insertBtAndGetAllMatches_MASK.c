
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {unsigned int off; unsigned int len; } ;
typedef TYPE_3__ ZSTD_match_t ;
struct TYPE_8__ {unsigned int hashLog; unsigned int chainLog; } ;
struct TYPE_9__ {TYPE_1__ cParams; } ;
struct TYPE_11__ {scalar_t__* base; unsigned int* hashTable; unsigned int* chainTable; scalar_t__* dictBase; unsigned int dictLimit; unsigned int lowLimit; unsigned int nextToUpdate; TYPE_2__ params; } ;
typedef TYPE_4__ ZSTD_CCtx ;
typedef unsigned int U32 ;
typedef scalar_t__ BYTE ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int const VAR_2 ;
 size_t FUNC_1 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const) ;
 size_t FUNC_2 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const,scalar_t__ const* const,scalar_t__ const* const) ;
 size_t FUNC_3 (scalar_t__ const* const,unsigned int const,unsigned int const) ;
 unsigned int FUNC_4 (TYPE_4__*,scalar_t__ const* const) ;
 scalar_t__ FUNC_5 (scalar_t__ const* const,size_t) ;

__attribute__((used)) static U32 FUNC_6(ZSTD_CCtx *VAR_3, const BYTE *const VAR_4, const BYTE *const VAR_5, U32 VAR_6, const U32 VAR_7, U32 VAR_8,
      ZSTD_match_t *VAR_9, const U32 VAR_10)
{
 const BYTE *const VAR_11 = VAR_3->base;
 const U32 VAR_12 = (U32)(VAR_4 - VAR_11);
 const U32 VAR_13 = VAR_3->params.cParams.hashLog;
 const size_t VAR_14 = FUNC_3(VAR_4, VAR_13, VAR_7);
 U32 *const VAR_15 = VAR_3->hashTable;
 U32 VAR_16 = VAR_15[VAR_14];
 U32 *const VAR_17 = VAR_3->chainTable;
 const U32 VAR_18 = VAR_3->params.cParams.chainLog - 1;
 const U32 VAR_19 = (1U << VAR_18) - 1;
 size_t VAR_20 = 0, VAR_21 = 0;
 const BYTE *const VAR_22 = VAR_3->dictBase;
 const U32 VAR_23 = VAR_3->dictLimit;
 const BYTE *const VAR_24 = VAR_22 + VAR_23;
 const BYTE *const VAR_25 = VAR_11 + VAR_23;
 const U32 VAR_26 = VAR_19 >= VAR_12 ? 0 : VAR_12 - VAR_19;
 const U32 VAR_27 = VAR_3->lowLimit;
 U32 *VAR_28 = VAR_17 + 2 * (VAR_12 & VAR_19);
 U32 *VAR_29 = VAR_17 + 2 * (VAR_12 & VAR_19) + 1;
 U32 VAR_30 = VAR_12 + 8;
 U32 VAR_31;
 U32 VAR_32 = 0;

 const U32 VAR_33 = (VAR_7 == 3) ? 3 : 4;
 size_t VAR_34 = VAR_10 - 1;

 if (VAR_33 == 3) {
  U32 const VAR_35 = FUNC_4(VAR_3, VAR_4);
  if (VAR_35 > VAR_27 && (VAR_12 - VAR_35 < (1 << 18))) {
   const BYTE *VAR_36;
   size_t VAR_37 = 0;
   if ((!VAR_8) || VAR_35 >= VAR_23) {
    VAR_36 = VAR_11 + VAR_35;
    if (VAR_36[VAR_34] == VAR_4[VAR_34])
     VAR_37 = FUNC_1(VAR_4, VAR_36, VAR_5);
   } else {
    VAR_36 = VAR_22 + VAR_35;
    if (FUNC_5(VAR_36, VAR_0) ==
        FUNC_5(VAR_4, VAR_0))
     VAR_37 = FUNC_2(VAR_4 + VAR_0, VAR_36 + VAR_0, VAR_5, VAR_24, VAR_25) + VAR_0;
   }


   if (VAR_37 > VAR_34) {
    VAR_34 = VAR_37;
    VAR_9[VAR_32].off = VAR_2 + VAR_12 - VAR_35;
    VAR_9[VAR_32].len = (U32)VAR_37;
    VAR_32++;
    if (VAR_37 > VAR_1)
     goto update;
    if (VAR_4 + VAR_37 == VAR_5)
     goto update;
   }
  }
 }

 VAR_15[VAR_14] = VAR_12;

 while (VAR_6-- && (VAR_16 > VAR_27)) {
  U32 *VAR_38 = VAR_17 + 2 * (VAR_16 & VAR_19);
  size_t VAR_39 = FUNC_0(VAR_20, VAR_21);
  const BYTE *VAR_40;

  if ((!VAR_8) || (VAR_16 + VAR_39 >= VAR_23)) {
   VAR_40 = VAR_11 + VAR_16;
   if (VAR_40[VAR_39] == VAR_4[VAR_39]) {
    VAR_39 += FUNC_1(VAR_4 + VAR_39 + 1, VAR_40 + VAR_39 + 1, VAR_5) + 1;
   }
  } else {
   VAR_40 = VAR_22 + VAR_16;
   VAR_39 += FUNC_2(VAR_4 + VAR_39, VAR_40 + VAR_39, VAR_5, VAR_24, VAR_25);
   if (VAR_16 + VAR_39 >= VAR_23)
    VAR_40 = VAR_11 + VAR_16;
  }

  if (VAR_39 > VAR_34) {
   if (VAR_39 > VAR_30 - VAR_16)
    VAR_30 = VAR_16 + (U32)VAR_39;
   VAR_34 = VAR_39;
   VAR_9[VAR_32].off = VAR_2 + VAR_12 - VAR_16;
   VAR_9[VAR_32].len = (U32)VAR_39;
   VAR_32++;
   if (VAR_39 > VAR_1)
    break;
   if (VAR_4 + VAR_39 == VAR_5)
    break;
  }

  if (VAR_40[VAR_39] < VAR_4[VAR_39]) {

   *VAR_28 = VAR_16;
   VAR_20 = VAR_39;
   if (VAR_16 <= VAR_26) {
    VAR_28 = &VAR_31;
    break;
   }
   VAR_28 = VAR_38 + 1;
   VAR_16 = VAR_38[1];
  } else {

   *VAR_29 = VAR_16;
   VAR_21 = VAR_39;
   if (VAR_16 <= VAR_26) {
    VAR_29 = &VAR_31;
    break;
   }
   VAR_29 = VAR_38;
   VAR_16 = VAR_38[0];
  }
 }

 *VAR_28 = *VAR_29 = 0;

update:
 VAR_3->nextToUpdate = (VAR_30 > VAR_12 + 8) ? VAR_30 - 8 : VAR_12 + 1;
 return VAR_32;
}
