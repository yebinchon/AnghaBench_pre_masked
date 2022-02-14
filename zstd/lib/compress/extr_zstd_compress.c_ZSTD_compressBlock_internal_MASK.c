
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ offcode_repeatMode; } ;
struct TYPE_20__ {TYPE_4__ fse; } ;
struct TYPE_18__ {TYPE_9__ entropy; } ;
typedef TYPE_6__ ZSTD_compressedBlockState_t ;
struct TYPE_13__ {scalar_t__ dictLimit; } ;
struct TYPE_14__ {scalar_t__ nextToUpdate; TYPE_1__ window; } ;
struct TYPE_17__ {TYPE_6__* prevCBlock; TYPE_6__* nextCBlock; TYPE_2__ matchState; } ;
struct TYPE_15__ {scalar_t__ collectSequences; } ;
struct TYPE_19__ {TYPE_5__ blockState; int isFirstBlock; int bmi2; int entropyWorkspace; int appliedParams; int seqStore; TYPE_3__ seqCollector; } ;
typedef TYPE_7__ ZSTD_CCtx ;
typedef size_t U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (size_t const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (TYPE_7__*,void const*,size_t) ;
 size_t FUNC_3 (int *,TYPE_9__*,TYPE_9__*,int *,void*,size_t,size_t,int ,int ,int ) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (int const*,size_t) ;
 size_t const VAR_3 ;

__attribute__((used)) static size_t FUNC_7(ZSTD_CCtx* VAR_4,
                                        void* VAR_5, size_t VAR_6,
                                        const void* VAR_7, size_t VAR_8, U32 VAR_9)
{




    const U32 VAR_10 = 25;
    size_t VAR_11;
    const BYTE* VAR_12 = (const BYTE*)VAR_7;
    BYTE* VAR_13 = (BYTE*)VAR_5;
    FUNC_0(5, "ZSTD_compressBlock_internal (dstCapacity=%u, dictLimit=%u, nextToUpdate=%u)",
                (unsigned)VAR_6, (unsigned)VAR_4->blockState.matchState.window.dictLimit,
                (unsigned)VAR_4->blockState.matchState.nextToUpdate);

    { const size_t VAR_14 = FUNC_2(VAR_4, VAR_7, VAR_8);
        FUNC_1(VAR_14);
        if (VAR_14 == VAR_3) { VAR_11 = 0; goto out; }
    }

    if (VAR_4->seqCollector.collectSequences) {
        FUNC_4(VAR_4);
        return 0;
    }


    VAR_11 = FUNC_3(&VAR_4->seqStore,
            &VAR_4->blockState.prevCBlock->entropy, &VAR_4->blockState.nextCBlock->entropy,
            &VAR_4->appliedParams,
            VAR_5, VAR_6,
            VAR_8,
            VAR_4->entropyWorkspace, VAR_2 ,
            VAR_4->bmi2);

    if (VAR_9 &&




        !VAR_4->isFirstBlock &&
        VAR_11 < VAR_10 &&
        FUNC_6(VAR_12, VAR_8))
    {
        VAR_11 = 1;
        VAR_13[0] = VAR_12[0];
    }

out:
    if (!FUNC_5(VAR_11) && VAR_11 > 1) {

        ZSTD_compressedBlockState_t* const VAR_15 = VAR_4->blockState.prevCBlock;
        VAR_4->blockState.prevCBlock = VAR_4->blockState.nextCBlock;
        VAR_4->blockState.nextCBlock = VAR_15;
    }




    if (VAR_4->blockState.prevCBlock->entropy.fse.offcode_repeatMode == VAR_1)
        VAR_4->blockState.prevCBlock->entropy.fse.offcode_repeatMode = VAR_0;

    return VAR_11;
}
