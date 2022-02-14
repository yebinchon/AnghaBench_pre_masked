
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int U64 ;
typedef unsigned int U32 ;
typedef int U16 ;
struct TYPE_6__ {size_t const* samplesSizes; unsigned int nbSamples; unsigned int nbTrainSamples; unsigned int nbTestSamples; size_t nbDmers; unsigned int d; size_t* offsets; unsigned int* freqs; int * segmentFreqs; int * samples; } ;
typedef TYPE_1__ FASTCOVER_ctx_t ;
typedef int BYTE ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int*,unsigned int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 size_t const FUNC_3 (size_t const*,unsigned int const) ;
 size_t const FUNC_4 (unsigned int,int) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_8(FASTCOVER_ctx_t *VAR_1, const void *VAR_2,
                          const size_t *VAR_3, unsigned VAR_4,
                          unsigned VAR_5, double VAR_6, unsigned VAR_7) {
  const BYTE *const VAR_8 = (const BYTE *)VAR_2;
  const size_t VAR_9 = FUNC_3(VAR_3, VAR_4);

  const unsigned VAR_10 = VAR_6 < 1.0 ? (unsigned)((double)VAR_4 * VAR_6) : VAR_4;
  const unsigned VAR_11 = VAR_6 < 1.0 ? VAR_4 - VAR_10 : VAR_4;
  const size_t VAR_12 = VAR_6 < 1.0 ? FUNC_3(VAR_3, VAR_10) : VAR_9;
  const size_t VAR_13 = VAR_6 < 1.0 ? FUNC_3(VAR_3 + VAR_10, VAR_11) : VAR_9;

  if (VAR_9 < FUNC_4(VAR_5, sizeof(U64)) ||
      VAR_9 >= (size_t)VAR_0) {
    FUNC_0(1, "Total samples size is too large (%u MB), maximum size is %u MB\n",
                 (U32)(VAR_9 >> 20), (VAR_0 >> 20));
    return 0;
  }

  if (VAR_10 < 5) {
    FUNC_0(1, "Total number of training samples is %u and is invalid.", VAR_10);
    return 0;
  }

  if (VAR_11 < 1) {
    FUNC_0(1, "Total number of testing samples is %u and is invalid.", VAR_11);
    return 0;
  }

  FUNC_7(VAR_1, 0, sizeof(*VAR_1));
  FUNC_0(2, "Training on %u samples of total size %u\n", VAR_10,
               (U32)VAR_12);
  FUNC_0(2, "Testing on %u samples of total size %u\n", VAR_11,
               (U32)VAR_13);

  VAR_1->samples = VAR_8;
  VAR_1->samplesSizes = VAR_3;
  VAR_1->nbSamples = VAR_4;
  VAR_1->nbTrainSamples = VAR_10;
  VAR_1->nbTestSamples = VAR_11;
  VAR_1->nbDmers = VAR_12 - VAR_5 + 1;
  VAR_1->d = VAR_5;


  VAR_1->offsets = (size_t *)FUNC_6((VAR_4 + 1) * sizeof(size_t));
  if (!VAR_1->offsets) {
    FUNC_0(1, "Failed to allocate scratch buffers\n");
    FUNC_2(VAR_1);
    return 0;
  }


  {
    U32 VAR_14;
    VAR_1->offsets[0] = 0;
    for (VAR_14 = 1; VAR_14 <= VAR_4; ++VAR_14) {
      VAR_1->offsets[VAR_14] = VAR_1->offsets[VAR_14 - 1] + VAR_3[VAR_14 - 1];
    }
  }


  VAR_1->freqs = (U32 *)FUNC_5((1 << VAR_7), sizeof(U32));
  VAR_1->segmentFreqs = (U16 *)FUNC_5((1 << VAR_7), sizeof(U16));
  FUNC_0(2, "Computing frequencies\n");
  FUNC_1(VAR_1->freqs, VAR_7, VAR_1);

  return 1;
}
