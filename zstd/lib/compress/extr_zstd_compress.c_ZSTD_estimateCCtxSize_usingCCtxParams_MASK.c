
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int seqDef ;
typedef int rawSeq ;
struct TYPE_7__ {size_t windowLog; int minMatch; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef int ZSTD_compressedBlockState_t ;
struct TYPE_8__ {scalar_t__ nbWorkers; int ldmParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;
typedef int ZSTD_CCtx ;
typedef size_t U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ,size_t) ;
 int FUNC_2 (int,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (size_t const) ;
 TYPE_1__ FUNC_4 (TYPE_2__ const*,int ,int ) ;
 int FUNC_5 (int ,size_t const) ;
 size_t FUNC_6 (int ) ;
 size_t FUNC_7 (TYPE_1__ const*,int) ;

size_t FUNC_8(const ZSTD_CCtx_params* VAR_5)
{
    FUNC_2(VAR_5->nbWorkers > 0, VAR_0, "Estimate CCtx size is supported for single-threaded compression only.");
    { ZSTD_compressionParameters const VAR_6 =
                FUNC_4(VAR_5, VAR_4, 0);
        size_t const VAR_7 = FUNC_1(VAR_3, (size_t)1 << VAR_6.windowLog);
        U32 const VAR_8 = (VAR_6.minMatch==3) ? 3 : 4;
        size_t const VAR_9 = VAR_7 / VAR_8;
        size_t const VAR_10 = FUNC_3(VAR_2 + VAR_7)
                                + FUNC_3(VAR_9 * sizeof(seqDef))
                                + 3 * FUNC_3(VAR_9 * sizeof(BYTE));
        size_t const VAR_11 = FUNC_3(VAR_1);
        size_t const VAR_12 = 2 * FUNC_3(sizeof(ZSTD_compressedBlockState_t));
        size_t const VAR_13 = FUNC_7(&VAR_6, 1);

        size_t const VAR_14 = FUNC_6(VAR_5->ldmParams);
        size_t const VAR_15 = FUNC_3(FUNC_5(VAR_5->ldmParams, VAR_7) * sizeof(rawSeq));

        size_t const VAR_16 = VAR_11 + VAR_12 + VAR_10 +
                                   VAR_13 + VAR_14 + VAR_15;
        size_t const VAR_17 = FUNC_3(sizeof(ZSTD_CCtx));

        FUNC_0(5, "sizeof(ZSTD_CCtx) : %u", (U32)VAR_17);
        FUNC_0(5, "estimate workspace : %u", (U32)VAR_16);
        return VAR_17 + VAR_16;
    }
}
