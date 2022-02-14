
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolEncodingType_e ;
struct TYPE_4__ {int workspace; int MLTable; int OFTable; int LLTable; } ;
struct TYPE_5__ {TYPE_1__ entropy; int fseEntropy; int MLTptr; int OFTptr; int LLTptr; } ;
typedef TYPE_2__ ZSTD_DCtx ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_1 (int ,int *,int const,int ,int ,int const*,int,int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (size_t const) ;
 int FUNC_3 (int const*) ;
 int VAR_11 ;
 int VAR_12 ;

size_t FUNC_4(ZSTD_DCtx *VAR_13, int *VAR_14, const void *VAR_15, size_t VAR_16)
{
 const BYTE *const VAR_17 = (const BYTE *const)VAR_15;
 const BYTE *const VAR_18 = VAR_17 + VAR_16;
 const BYTE *VAR_19 = VAR_17;


 if (VAR_16 < VAR_3)
  return FUNC_0(VAR_12);


 {
  int VAR_20 = *VAR_19++;
  if (!VAR_20) {
   *VAR_14 = 0;
   return 1;
  }
  if (VAR_20 > 0x7F) {
   if (VAR_20 == 0xFF) {
    if (VAR_19 + 2 > VAR_18)
     return FUNC_0(VAR_12);
    VAR_20 = FUNC_3(VAR_19) + VAR_2, VAR_19 += 2;
   } else {
    if (VAR_19 >= VAR_18)
     return FUNC_0(VAR_12);
    VAR_20 = ((VAR_20 - 0x80) << 8) + *VAR_19++;
   }
  }
  *VAR_14 = VAR_20;
 }


 if (VAR_19 + 4 > VAR_18)
  return FUNC_0(VAR_12);
 {
  symbolEncodingType_e const VAR_21 = (symbolEncodingType_e)(*VAR_19 >> 6);
  symbolEncodingType_e const VAR_22 = (symbolEncodingType_e)((*VAR_19 >> 4) & 3);
  symbolEncodingType_e const VAR_23 = (symbolEncodingType_e)((*VAR_19 >> 2) & 3);
  VAR_19++;


  {
   size_t const VAR_24 = FUNC_1(VAR_13->entropy.LLTable, &VAR_13->LLTptr, VAR_21, VAR_6, VAR_0, VAR_19, VAR_18 - VAR_19,
          VAR_1, VAR_13->fseEntropy, VAR_13->entropy.workspace, sizeof(VAR_13->entropy.workspace));
   if (FUNC_2(VAR_24))
    return FUNC_0(VAR_11);
   VAR_19 += VAR_24;
  }
  {
   size_t const VAR_25 = FUNC_1(VAR_13->entropy.OFTable, &VAR_13->OFTptr, VAR_22, VAR_8, VAR_10, VAR_19, VAR_18 - VAR_19,
          VAR_9, VAR_13->fseEntropy, VAR_13->entropy.workspace, sizeof(VAR_13->entropy.workspace));
   if (FUNC_2(VAR_25))
    return FUNC_0(VAR_11);
   VAR_19 += VAR_25;
  }
  {
   size_t const VAR_26 = FUNC_1(VAR_13->entropy.MLTable, &VAR_13->MLTptr, VAR_23, VAR_7, VAR_4, VAR_19, VAR_18 - VAR_19,
          VAR_5, VAR_13->fseEntropy, VAR_13->entropy.workspace, sizeof(VAR_13->entropy.workspace));
   if (FUNC_2(VAR_26))
    return FUNC_0(VAR_11);
   VAR_19 += VAR_26;
  }
 }

 return VAR_19 - VAR_17;
}
