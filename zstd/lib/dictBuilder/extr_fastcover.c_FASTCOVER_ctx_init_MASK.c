
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int U64 ;
typedef unsigned int U32 ;
struct TYPE_6__ {size_t const* samplesSizes; unsigned int nbSamples; unsigned int nbTrainSamples; unsigned int nbTestSamples; size_t nbDmers; unsigned int d; unsigned int f; size_t* offsets; unsigned int* freqs; int accelParams; int * samples; } ;
typedef TYPE_1__ FASTCOVER_ctx_t ;
typedef int FASTCOVER_accel_t ;
typedef int BYTE ;


 size_t const FUNC_0 (size_t const*,unsigned int const) ;
 int FUNC_1 (int,char*,...) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 size_t const FUNC_5 (unsigned int,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned int,int) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_9(FASTCOVER_ctx_t* VAR_3,
                   const void* VAR_4,
                   const size_t* VAR_5, unsigned VAR_6,
                   unsigned VAR_7, double VAR_8, unsigned VAR_9,
                   FASTCOVER_accel_t VAR_10)
{
    const BYTE* const VAR_11 = (const BYTE*)VAR_4;
    const size_t VAR_12 = FUNC_0(VAR_5, VAR_6);

    const unsigned VAR_13 = VAR_8 < 1.0 ? (unsigned)((double)VAR_6 * VAR_8) : VAR_6;
    const unsigned VAR_14 = VAR_8 < 1.0 ? VAR_6 - VAR_13 : VAR_6;
    const size_t VAR_15 = VAR_8 < 1.0 ? FUNC_0(VAR_5, VAR_13) : VAR_12;
    const size_t VAR_16 = VAR_8 < 1.0 ? FUNC_0(VAR_5 + VAR_13, VAR_14) : VAR_12;


    if (VAR_12 < FUNC_5(VAR_7, sizeof(U64)) ||
        VAR_12 >= (size_t)VAR_0) {
        FUNC_1(1, "Total samples size is too large (%u MB), maximum size is %u MB\n",
                    (unsigned)(VAR_12 >> 20), (VAR_0 >> 20));
        return FUNC_2(VAR_2);
    }


    if (VAR_13 < 5) {
        FUNC_1(1, "Total number of training samples is %u and is invalid\n", VAR_13);
        return FUNC_2(VAR_2);
    }


    if (VAR_14 < 1) {
        FUNC_1(1, "Total number of testing samples is %u and is invalid.\n", VAR_14);
        return FUNC_2(VAR_2);
    }


    FUNC_8(VAR_3, 0, sizeof(*VAR_3));
    FUNC_1(2, "Training on %u samples of total size %u\n", VAR_13,
                    (unsigned)VAR_15);
    FUNC_1(2, "Testing on %u samples of total size %u\n", VAR_14,
                    (unsigned)VAR_16);

    VAR_3->samples = VAR_11;
    VAR_3->samplesSizes = VAR_5;
    VAR_3->nbSamples = VAR_6;
    VAR_3->nbTrainSamples = VAR_13;
    VAR_3->nbTestSamples = VAR_14;
    VAR_3->nbDmers = VAR_15 - FUNC_5(VAR_7, sizeof(U64)) + 1;
    VAR_3->d = VAR_7;
    VAR_3->f = VAR_9;
    VAR_3->accelParams = VAR_10;


    VAR_3->offsets = (size_t*)FUNC_7((VAR_6 + 1), sizeof(size_t));
    if (VAR_3->offsets == ((void*)0)) {
        FUNC_1(1, "Failed to allocate scratch buffers \n");
        FUNC_4(VAR_3);
        return FUNC_2(VAR_1);
    }


    { U32 VAR_17;
        VAR_3->offsets[0] = 0;
        FUNC_6(VAR_6 >= 5);
        for (VAR_17 = 1; VAR_17 <= VAR_6; ++VAR_17) {
            VAR_3->offsets[VAR_17] = VAR_3->offsets[VAR_17 - 1] + VAR_5[VAR_17 - 1];
        }
    }


    VAR_3->freqs = (U32*)FUNC_7(((U64)1 << VAR_9), sizeof(U32));
    if (VAR_3->freqs == ((void*)0)) {
        FUNC_1(1, "Failed to allocate frequency table \n");
        FUNC_4(VAR_3);
        return FUNC_2(VAR_1);
    }

    FUNC_1(2, "Computing frequencies\n");
    FUNC_3(VAR_3->freqs, VAR_3);

    return 0;
}
