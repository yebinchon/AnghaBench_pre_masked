
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ d; scalar_t__ k; } ;
typedef TYPE_1__ ZDICT_cover_params_t ;
struct TYPE_16__ {size_t dictBufferCapacity; int best; TYPE_1__ parameters; TYPE_4__* ctx; } ;
typedef TYPE_2__ U32 ;
struct TYPE_17__ {int suffixSize; int offsets; int nbSamples; scalar_t__ nbTrainSamples; int samplesSizes; int samples; int freqs; } ;
typedef TYPE_2__ COVER_tryParameters_data_t ;
typedef int COVER_map_t ;
typedef int COVER_dictSelection_t ;
typedef TYPE_4__ COVER_ctx_t ;
typedef TYPE_2__ BYTE ;


 int FUNC_0 (int ,TYPE_1__ const,int ) ;
 size_t FUNC_1 (TYPE_4__ const* const,TYPE_2__*,int *,TYPE_2__* const,size_t,TYPE_1__ const) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (TYPE_2__* const,size_t,int ,int ,unsigned int,scalar_t__,int ,TYPE_1__ const,int ,size_t) ;
 int FUNC_8 (int,char*) ;
 size_t FUNC_9 (int ) ;
 int VAR_0 ;
 int FUNC_10 (TYPE_2__* const) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_13(void *VAR_1) {

  COVER_tryParameters_data_t *const VAR_2 = (COVER_tryParameters_data_t *)VAR_1;
  const COVER_ctx_t *const VAR_3 = VAR_2->ctx;
  const ZDICT_cover_params_t VAR_4 = VAR_2->parameters;
  size_t VAR_5 = VAR_2->dictBufferCapacity;
  size_t VAR_6 = FUNC_9(VAR_0);

  COVER_map_t VAR_7;
  BYTE *const VAR_8 = (BYTE * const)FUNC_11(VAR_5);
  COVER_dictSelection_t VAR_9 = FUNC_2(FUNC_9(VAR_0));
  U32 *VAR_10 = (U32 *)FUNC_11(VAR_3->suffixSize * sizeof(U32));
  if (!FUNC_6(&VAR_7, VAR_4.k - VAR_4.d + 1)) {
    FUNC_8(1, "Failed to allocate dmer map: out of memory\n");
    goto _cleanup;
  }
  if (!VAR_8 || !VAR_10) {
    FUNC_8(1, "Failed to allocate buffers: out of memory\n");
    goto _cleanup;
  }

  FUNC_12(VAR_10, VAR_3->freqs, VAR_3->suffixSize * sizeof(U32));

  {
    const size_t VAR_11 = FUNC_1(VAR_3, VAR_10, &VAR_7, VAR_8,
                                              VAR_5, VAR_4);
    VAR_9 = FUNC_7(VAR_8 + VAR_11, VAR_5 - VAR_11,
        VAR_3->samples, VAR_3->samplesSizes, (unsigned)VAR_3->nbTrainSamples, VAR_3->nbTrainSamples, VAR_3->nbSamples, VAR_4, VAR_3->offsets,
        VAR_6);

    if (FUNC_4(VAR_9)) {
      FUNC_8(1, "Failed to select dictionary\n");
      goto _cleanup;
    }
  }
_cleanup:
  FUNC_10(VAR_8);
  FUNC_0(VAR_2->best, VAR_4, VAR_9);
  FUNC_10(VAR_2);
  FUNC_5(&VAR_7);
  FUNC_3(VAR_9);
  if (VAR_10) {
    FUNC_10(VAR_10);
  }
}
