
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {scalar_t__ lowLimit; } ;
struct TYPE_15__ {scalar_t__ nextToUpdate; TYPE_10__ window; int dictMatchState; int loadedDictEnd; } ;
typedef TYPE_4__ ZSTD_matchState_t ;
struct TYPE_13__ {scalar_t__ checksumFlag; } ;
struct TYPE_12__ {int windowLog; } ;
struct TYPE_17__ {TYPE_2__ fParams; TYPE_1__ cParams; } ;
struct TYPE_14__ {TYPE_4__ matchState; } ;
struct TYPE_16__ {size_t blockSize; int stage; scalar_t__ isFirstBlock; TYPE_7__ appliedParams; int workspace; TYPE_3__ blockState; int xxhState; } ;
typedef TYPE_5__ ZSTD_CCtx ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *,int const) ;
 size_t VAR_0 ;
 int FUNC_3 (int,int ,char*) ;
 int FUNC_4 (int *,void const*,size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_5 (TYPE_10__*,int const*,int const,int *,int *) ;
 size_t FUNC_6 (TYPE_5__*,int *,size_t,int const*,size_t,int) ;
 size_t FUNC_7 (int *,size_t,int const*,size_t,int const) ;
 int FUNC_8 (TYPE_4__* const,int *,TYPE_7__*,int const*,int const*) ;
 int VAR_3 ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static size_t FUNC_10 (ZSTD_CCtx* VAR_7,
                                     void* VAR_8, size_t VAR_9,
                               const void* VAR_10, size_t VAR_11,
                                     U32 VAR_12)
{
    size_t VAR_13 = VAR_7->blockSize;
    size_t VAR_14 = VAR_11;
    const BYTE* VAR_15 = (const BYTE*)VAR_10;
    BYTE* const VAR_16 = (BYTE*)VAR_8;
    BYTE* VAR_17 = VAR_16;
    U32 const VAR_18 = (U32)1 << VAR_7->appliedParams.cParams.windowLog;
    FUNC_9(VAR_7->appliedParams.cParams.windowLog <= VAR_1);

    FUNC_0(5, "ZSTD_compress_frameChunk (blockSize=%u)", (unsigned)VAR_13);
    if (VAR_7->appliedParams.fParams.checksumFlag && VAR_11)
        FUNC_4(&VAR_7->xxhState, VAR_10, VAR_11);

    while (VAR_14) {
        ZSTD_matchState_t* const VAR_19 = &VAR_7->blockState.matchState;
        U32 const VAR_20 = VAR_12 & (VAR_13 >= VAR_14);

        FUNC_3(VAR_9 < VAR_2 + VAR_0,
                        VAR_6,
                        "not enough space to store compressed block");
        if (VAR_14 < VAR_13) VAR_13 = VAR_14;

        FUNC_8(
            VAR_19, &VAR_7->workspace, &VAR_7->appliedParams, VAR_15, VAR_15 + VAR_13);
        FUNC_5(&VAR_19->window, VAR_15 + VAR_13, VAR_18, &VAR_19->loadedDictEnd, &VAR_19->dictMatchState);


        if (VAR_19->nextToUpdate < VAR_19->window.lowLimit) VAR_19->nextToUpdate = VAR_19->window.lowLimit;

        { size_t VAR_21 = FUNC_6(VAR_7,
                                VAR_17+VAR_2, VAR_9-VAR_2,
                                VAR_15, VAR_13, 1 );
            FUNC_1(VAR_21);
            if (VAR_21 == 0) {
                VAR_21 = FUNC_7(VAR_17, VAR_9, VAR_15, VAR_13, VAR_20);
                FUNC_1(VAR_21);
            } else {
                const U32 VAR_22 = VAR_21 == 1 ?
                    VAR_20 + (((U32)VAR_5)<<1) + (U32)(VAR_13 << 3) :
                    VAR_20 + (((U32)VAR_4)<<1) + (U32)(VAR_21 << 3);
                FUNC_2(VAR_17, VAR_22);
                VAR_21 += VAR_2;
            }

            VAR_15 += VAR_13;
            FUNC_9(VAR_14 >= VAR_13);
            VAR_14 -= VAR_13;
            VAR_17 += VAR_21;
            FUNC_9(VAR_9 >= VAR_21);
            VAR_9 -= VAR_21;
            VAR_7->isFirstBlock = 0;
            FUNC_0(5, "ZSTD_compress_frameChunk: adding a block of size %u",
                        (unsigned)VAR_21);
    } }

    if (VAR_12 && (VAR_17>VAR_16)) VAR_7->stage = VAR_3;
    return (size_t)(VAR_17-VAR_16);
}
