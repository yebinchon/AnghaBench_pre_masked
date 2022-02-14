
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_parameters ;
struct TYPE_4__ {scalar_t__ litLengthSum; } ;
struct TYPE_5__ {int xxhState; TYPE_1__ seqStore; int * rep; scalar_t__ loadedDictEnd; scalar_t__ dictID; int stage; scalar_t__ nextToUpdate; scalar_t__ dictLimit; scalar_t__ lowLimit; int frameContentSize; int params; scalar_t__ base; scalar_t__ nextSrc; } ;
typedef TYPE_2__ ZSTD_CCtx ;
typedef int U64 ;
typedef scalar_t__ U32 ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static size_t FUNC_1(ZSTD_CCtx *VAR_3, ZSTD_parameters VAR_4, U64 VAR_5)
{
 U32 const VAR_6 = (U32)(VAR_3->nextSrc - VAR_3->base);
 VAR_3->params = VAR_4;
 VAR_3->frameContentSize = VAR_5;
 VAR_3->lowLimit = VAR_6;
 VAR_3->dictLimit = VAR_6;
 VAR_3->nextToUpdate = VAR_6 + 1;
 VAR_3->stage = VAR_1;
 VAR_3->dictID = 0;
 VAR_3->loadedDictEnd = 0;
 {
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   VAR_3->rep[VAR_7] = VAR_2[VAR_7];
 }
 VAR_3->seqStore.litLengthSum = 0;
 FUNC_0(&VAR_3->xxhState, 0);
 return 0;
}
