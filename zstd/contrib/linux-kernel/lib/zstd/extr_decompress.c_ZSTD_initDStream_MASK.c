
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_5__ {size_t maxWindowSize; char* inBuff; size_t inBuffSize; char* outBuff; size_t outBuffSize; int customMem; scalar_t__ hostageByte; scalar_t__ legacyVersion; int * ddictLocal; int * ddict; scalar_t__ outEnd; scalar_t__ outStart; scalar_t__ inPos; scalar_t__ lhSize; int stage; } ;
typedef TYPE_1__ ZSTD_DStream ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (void*,size_t) ;
 scalar_t__ FUNC_5 (size_t const,int ) ;
 int VAR_2 ;

ZSTD_DStream *FUNC_6(size_t VAR_3, void *VAR_4, size_t VAR_5)
{
 ZSTD_customMem const VAR_6 = FUNC_4(VAR_4, VAR_5);
 ZSTD_DStream *VAR_7 = FUNC_1(VAR_6);
 if (!VAR_7) {
  return ((void*)0);
 }

 VAR_7->maxWindowSize = VAR_3;
 VAR_7->stage = VAR_2;
 VAR_7->lhSize = VAR_7->inPos = VAR_7->outStart = VAR_7->outEnd = 0;
 FUNC_2(VAR_7->ddictLocal);
 VAR_7->ddictLocal = ((void*)0);
 VAR_7->ddict = VAR_7->ddictLocal;
 VAR_7->legacyVersion = 0;
 VAR_7->hostageByte = 0;

 {
  size_t const VAR_8 = FUNC_0(VAR_7->maxWindowSize, VAR_1);
  size_t const VAR_9 = VAR_7->maxWindowSize + VAR_8 + VAR_0 * 2;

  VAR_7->inBuff = (char *)FUNC_5(VAR_8, VAR_7->customMem);
  VAR_7->inBuffSize = VAR_8;
  VAR_7->outBuff = (char *)FUNC_5(VAR_9, VAR_7->customMem);
  VAR_7->outBuffSize = VAR_9;
  if (VAR_7->inBuff == ((void*)0) || VAR_7->outBuff == ((void*)0)) {
   FUNC_3(VAR_7);
   return ((void*)0);
  }
 }
 return VAR_7;
}
