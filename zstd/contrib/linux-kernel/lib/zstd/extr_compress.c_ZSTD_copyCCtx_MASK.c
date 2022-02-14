
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ strategy; int chainLog; size_t hashLog; } ;
struct TYPE_9__ {int contentSizeFlag; } ;
struct TYPE_11__ {TYPE_2__ cParams; TYPE_1__ fParams; } ;
typedef TYPE_3__ ZSTD_parameters ;
typedef int ZSTD_customMem ;
struct TYPE_12__ {scalar_t__ stage; size_t hashLog3; int * hufTable; scalar_t__ flagStaticHufTable; int * offcodeCTable; int * matchlengthCTable; int * litlengthCTable; scalar_t__ flagStaticTables; int dictID; int loadedDictEnd; int lowLimit; int dictLimit; int dictBase; int base; int nextSrc; int nextToUpdate3; int nextToUpdate; int * workSpace; TYPE_3__ params; int customMem; } ;
typedef TYPE_4__ ZSTD_CCtx ;
typedef int U32 ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__,unsigned long long,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int *,size_t const) ;
 int VAR_3 ;

size_t FUNC_3(ZSTD_CCtx *VAR_4, const ZSTD_CCtx *VAR_5, unsigned long long VAR_6)
{
 if (VAR_5->stage != VAR_2)
  return FUNC_0(VAR_3);

 FUNC_2(&VAR_4->customMem, &VAR_5->customMem, sizeof(ZSTD_customMem));
 {
  ZSTD_parameters VAR_7 = VAR_5->params;
  VAR_7.fParams.contentSizeFlag = (VAR_6 > 0);
  FUNC_1(VAR_4, VAR_7, VAR_6, VAR_1);
 }


 {
  size_t const VAR_8 = (VAR_5->params.cParams.strategy == VAR_0) ? 0 : (1 << VAR_5->params.cParams.chainLog);
  size_t const VAR_9 = ((size_t)1) << VAR_5->params.cParams.hashLog;
  size_t const VAR_10 = (size_t)1 << VAR_5->hashLog3;
  size_t const VAR_11 = (VAR_8 + VAR_9 + VAR_10) * sizeof(U32);
  FUNC_2(VAR_4->workSpace, VAR_5->workSpace, VAR_11);
 }


 VAR_4->nextToUpdate = VAR_5->nextToUpdate;
 VAR_4->nextToUpdate3 = VAR_5->nextToUpdate3;
 VAR_4->nextSrc = VAR_5->nextSrc;
 VAR_4->base = VAR_5->base;
 VAR_4->dictBase = VAR_5->dictBase;
 VAR_4->dictLimit = VAR_5->dictLimit;
 VAR_4->lowLimit = VAR_5->lowLimit;
 VAR_4->loadedDictEnd = VAR_5->loadedDictEnd;
 VAR_4->dictID = VAR_5->dictID;


 VAR_4->flagStaticTables = VAR_5->flagStaticTables;
 VAR_4->flagStaticHufTable = VAR_5->flagStaticHufTable;
 if (VAR_5->flagStaticTables) {
  FUNC_2(VAR_4->litlengthCTable, VAR_5->litlengthCTable, sizeof(VAR_4->litlengthCTable));
  FUNC_2(VAR_4->matchlengthCTable, VAR_5->matchlengthCTable, sizeof(VAR_4->matchlengthCTable));
  FUNC_2(VAR_4->offcodeCTable, VAR_5->offcodeCTable, sizeof(VAR_4->offcodeCTable));
 }
 if (VAR_5->flagStaticHufTable) {
  FUNC_2(VAR_4->hufTable, VAR_5->hufTable, 256 * 4);
 }

 return 0;
}
