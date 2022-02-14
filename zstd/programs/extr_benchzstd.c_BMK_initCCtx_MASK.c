
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int strategy; scalar_t__ targetLength; scalar_t__ minMatch; scalar_t__ searchLog; scalar_t__ chainLog; scalar_t__ hashLog; scalar_t__ windowLog; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef int ZSTD_CCtx ;
struct TYPE_6__ {int nbWorkers; int ldmFlag; int ldmMinMatch; int ldmHashLog; int ldmBucketSizeLog; int ldmHashRateLog; scalar_t__ literalCompressionMode; } ;
typedef TYPE_2__ BMK_advancedParams_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_4(ZSTD_CCtx* VAR_16,
            const void* VAR_17, size_t VAR_18,
            int VAR_19,
            const ZSTD_compressionParameters* VAR_20,
            const BMK_advancedParams_t* VAR_21)
{
    FUNC_2(VAR_16, VAR_15);
    if (VAR_21->nbWorkers==1) {
        FUNC_0(FUNC_3(VAR_16, VAR_10, 0));
    } else {
        FUNC_0(FUNC_3(VAR_16, VAR_10, VAR_21->nbWorkers));
    }
    FUNC_0(FUNC_3(VAR_16, VAR_1, VAR_19));
    FUNC_0(FUNC_3(VAR_16, VAR_2, VAR_21->ldmFlag));
    FUNC_0(FUNC_3(VAR_16, VAR_7, VAR_21->ldmMinMatch));
    FUNC_0(FUNC_3(VAR_16, VAR_5, VAR_21->ldmHashLog));
    FUNC_0(FUNC_3(VAR_16, VAR_4, VAR_21->ldmBucketSizeLog));
    FUNC_0(FUNC_3(VAR_16, VAR_6, VAR_21->ldmHashRateLog));
    FUNC_0(FUNC_3(VAR_16, VAR_14, (int)VAR_20->windowLog));
    FUNC_0(FUNC_3(VAR_16, VAR_3, (int)VAR_20->hashLog));
    FUNC_0(FUNC_3(VAR_16, VAR_0, (int)VAR_20->chainLog));
    FUNC_0(FUNC_3(VAR_16, VAR_11, (int)VAR_20->searchLog));
    FUNC_0(FUNC_3(VAR_16, VAR_9, (int)VAR_20->minMatch));
    FUNC_0(FUNC_3(VAR_16, VAR_13, (int)VAR_20->targetLength));
    FUNC_0(FUNC_3(VAR_16, VAR_8, (int)VAR_21->literalCompressionMode));
    FUNC_0(FUNC_3(VAR_16, VAR_12, VAR_20->strategy));
    FUNC_0(FUNC_1(VAR_16, VAR_17, VAR_18));
}
