
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nbSamples; size_t* samplesSizes; scalar_t__ srcBuffer; } ;
typedef TYPE_1__ sampleInfo ;
struct TYPE_6__ {scalar_t__ dictSize; int dictBuffer; } ;
typedef TYPE_2__ dictInfo ;
typedef int ZSTD_CDict ;
typedef int ZSTD_CCtx ;
typedef int BYTE ;


 int FUNC_0 (int,char*,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (int *,void*,size_t,int const* const,size_t,int) ;
 size_t FUNC_4 (int *,void*,size_t,int const* const,size_t,int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (size_t) ;
 int FUNC_10 (size_t*) ;
 void* FUNC_11 (int) ;

double FUNC_12(sampleInfo *VAR_0, dictInfo* VAR_1, int VAR_2, int VAR_3) {

  size_t VAR_4 = 0;
  size_t VAR_5 = 0;
  const unsigned VAR_6 = VAR_1->dictSize > 0 ? 1 : 0;
  double VAR_7;
  size_t VAR_8;
  int VAR_9;


  ZSTD_CDict *VAR_10 = ((void*)0);
  ZSTD_CCtx* VAR_11 = ((void*)0);
  size_t *VAR_12 = ((void*)0);
  void* VAR_13 = ((void*)0);


  {
    size_t VAR_14 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_0->nbSamples; VAR_9++) {
      VAR_14 = FUNC_1(VAR_0->samplesSizes[VAR_9], VAR_14);
    }
    VAR_8 = FUNC_2(VAR_14);
    VAR_13 = FUNC_11(VAR_8);
  }


  VAR_12 = (size_t *)FUNC_11((VAR_0->nbSamples + 1) * sizeof(size_t));
  VAR_12[0] = 0;
  for (VAR_9 = 1; VAR_9 <= VAR_0->nbSamples; VAR_9++) {
    VAR_12[VAR_9] = VAR_12[VAR_9 - 1] + VAR_0->samplesSizes[VAR_9 - 1];
  }


  VAR_11 = FUNC_5();
  if(!VAR_11 || !VAR_13) {
    VAR_7 = -1;
    goto _cleanup;
  }


  if (VAR_6) {
    VAR_10 = FUNC_6(VAR_1->dictBuffer, VAR_1->dictSize, VAR_2);
    if(!VAR_10) {
      VAR_7 = -1;
      goto _cleanup;
    }
  }


  const BYTE *const VAR_15 = (const BYTE *)VAR_0->srcBuffer;
  for (VAR_9 = 0; VAR_9 < VAR_0->nbSamples; VAR_9++) {
    size_t VAR_16;
    if(VAR_6) {
      VAR_16 = FUNC_4(VAR_11, VAR_13, VAR_8, VAR_15 + VAR_12[VAR_9], VAR_0->samplesSizes[VAR_9], VAR_10);
    } else {
      VAR_16 = FUNC_3(VAR_11, VAR_13, VAR_8,VAR_15 + VAR_12[VAR_9], VAR_0->samplesSizes[VAR_9], VAR_2);
    }
    if (FUNC_9(VAR_16)) {
      VAR_7 = -1;
      goto _cleanup;
    }
    VAR_4 += VAR_16;
  }


  for (VAR_9 = 0; VAR_9<VAR_0->nbSamples; VAR_9++) {
    VAR_5 += VAR_0->samplesSizes[VAR_9];
  }


  FUNC_0(2, "original size is %lu\n", VAR_5);
  FUNC_0(2, "compressed size is %lu\n", VAR_4);
  VAR_7 = (double)VAR_5/(double)VAR_4;

_cleanup:
  FUNC_10(VAR_13);
  FUNC_10(VAR_12);
  FUNC_7(VAR_11);
  FUNC_8(VAR_10);
  return VAR_7;
}
