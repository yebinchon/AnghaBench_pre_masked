
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int U64 ;
typedef unsigned int U32 ;
struct TYPE_7__ {size_t const* samplesSizes; unsigned int nbSamples; unsigned int nbTrainSamples; unsigned int nbTestSamples; size_t suffixSize; unsigned int* suffix; unsigned int* dmerAt; size_t* offsets; unsigned int* freqs; unsigned int d; int * samples; } ;
typedef TYPE_1__ COVER_ctx_t ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (unsigned int*,unsigned int,int,TYPE_1__*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t const FUNC_2 (size_t const*,unsigned int const) ;
 int FUNC_3 (int,char*,...) ;
 size_t FUNC_4 (int ) ;
 size_t const FUNC_5 (unsigned int,int) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (unsigned int*,unsigned int,int,int *) ;
 int FUNC_9 (unsigned int*,unsigned int,int,int *) ;
 int VAR_8 ;

__attribute__((used)) static size_t FUNC_10(COVER_ctx_t *VAR_9, const void *VAR_10,
                          const size_t *VAR_11, unsigned VAR_12,
                          unsigned VAR_13, double VAR_14) {
  const BYTE *const VAR_15 = (const BYTE *)VAR_10;
  const size_t VAR_16 = FUNC_2(VAR_11, VAR_12);

  const unsigned VAR_17 = VAR_14 < 1.0 ? (unsigned)((double)VAR_12 * VAR_14) : VAR_12;
  const unsigned VAR_18 = VAR_14 < 1.0 ? VAR_12 - VAR_17 : VAR_12;
  const size_t VAR_19 = VAR_14 < 1.0 ? FUNC_2(VAR_11, VAR_17) : VAR_16;
  const size_t VAR_20 = VAR_14 < 1.0 ? FUNC_2(VAR_11 + VAR_17, VAR_18) : VAR_16;

  if (VAR_16 < FUNC_5(VAR_13, sizeof(U64)) ||
      VAR_16 >= (size_t)VAR_0) {
    FUNC_3(1, "Total samples size is too large (%u MB), maximum size is %u MB\n",
                 (unsigned)(VAR_16>>20), (VAR_0 >> 20));
    return FUNC_4(VAR_8);
  }

  if (VAR_17 < 5) {
    FUNC_3(1, "Total number of training samples is %u and is invalid.", VAR_17);
    return FUNC_4(VAR_8);
  }

  if (VAR_18 < 1) {
    FUNC_3(1, "Total number of testing samples is %u and is invalid.", VAR_18);
    return FUNC_4(VAR_8);
  }

  FUNC_7(VAR_9, 0, sizeof(*VAR_9));
  FUNC_3(2, "Training on %u samples of total size %u\n", VAR_17,
               (unsigned)VAR_19);
  FUNC_3(2, "Testing on %u samples of total size %u\n", VAR_18,
               (unsigned)VAR_20);
  VAR_9->samples = VAR_15;
  VAR_9->samplesSizes = VAR_11;
  VAR_9->nbSamples = VAR_12;
  VAR_9->nbTrainSamples = VAR_17;
  VAR_9->nbTestSamples = VAR_18;

  VAR_9->suffixSize = VAR_19 - FUNC_5(VAR_13, sizeof(U64)) + 1;
  VAR_9->suffix = (U32 *)FUNC_6(VAR_9->suffixSize * sizeof(U32));

  VAR_9->dmerAt = (U32 *)FUNC_6(VAR_9->suffixSize * sizeof(U32));

  VAR_9->offsets = (size_t *)FUNC_6((VAR_12 + 1) * sizeof(size_t));
  if (!VAR_9->suffix || !VAR_9->dmerAt || !VAR_9->offsets) {
    FUNC_3(1, "Failed to allocate scratch buffers\n");
    FUNC_0(VAR_9);
    return FUNC_4(VAR_7);
  }
  VAR_9->freqs = ((void*)0);
  VAR_9->d = VAR_13;


  {
    U32 VAR_21;
    VAR_9->offsets[0] = 0;
    for (VAR_21 = 1; VAR_21 <= VAR_12; ++VAR_21) {
      VAR_9->offsets[VAR_21] = VAR_9->offsets[VAR_21 - 1] + VAR_11[VAR_21 - 1];
    }
  }
  FUNC_3(2, "Constructing partial suffix array\n");
  {




    U32 VAR_22;
    for (VAR_22 = 0; VAR_22 < VAR_9->suffixSize; ++VAR_22) {
      VAR_9->suffix[VAR_22] = VAR_22;
    }



    VAR_6 = VAR_9;




    FUNC_9(VAR_9->suffix, VAR_9->suffixSize, sizeof(U32),
          (VAR_9->d <= 8 ? &VAR_5 : &VAR_4));

  }
  FUNC_3(2, "Computing frequencies\n");







  FUNC_1(VAR_9->suffix, VAR_9->suffixSize, sizeof(U32), VAR_9,
                (VAR_9->d <= 8 ? &VAR_2 : &VAR_1), &VAR_3);
  VAR_9->freqs = VAR_9->suffix;
  VAR_9->suffix = ((void*)0);
  return 0;
}
