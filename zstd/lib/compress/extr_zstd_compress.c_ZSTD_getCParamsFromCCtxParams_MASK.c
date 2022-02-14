
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ strategy; scalar_t__ targetLength; scalar_t__ minMatch; scalar_t__ searchLog; scalar_t__ chainLog; scalar_t__ hashLog; scalar_t__ windowLog; } ;
typedef TYPE_3__ ZSTD_compressionParameters ;
struct TYPE_12__ {scalar_t__ strategy; scalar_t__ targetLength; scalar_t__ minMatch; scalar_t__ searchLog; scalar_t__ chainLog; scalar_t__ hashLog; scalar_t__ windowLog; } ;
struct TYPE_11__ {scalar_t__ enableLdm; } ;
struct TYPE_14__ {scalar_t__ srcSizeHint; TYPE_2__ cParams; TYPE_1__ ldmParams; int compressionLevel; } ;
typedef TYPE_4__ ZSTD_CCtx_params ;
typedef scalar_t__ U64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ FUNC_0 (TYPE_3__,scalar_t__,size_t) ;
 int FUNC_1 (TYPE_3__) ;
 TYPE_3__ FUNC_2 (int ,scalar_t__,size_t) ;
 int FUNC_3 (int) ;

ZSTD_compressionParameters FUNC_4(
        const ZSTD_CCtx_params* VAR_2, U64 VAR_3, size_t VAR_4)
{
    ZSTD_compressionParameters VAR_5;
    if (VAR_3 == VAR_0 && VAR_2->srcSizeHint > 0) {
      VAR_3 = VAR_2->srcSizeHint;
    }
    VAR_5 = FUNC_2(VAR_2->compressionLevel, VAR_3, VAR_4);
    if (VAR_2->ldmParams.enableLdm) VAR_5.windowLog = VAR_1;
    if (VAR_2->cParams.windowLog) VAR_5.windowLog = VAR_2->cParams.windowLog;
    if (VAR_2->cParams.hashLog) VAR_5.hashLog = VAR_2->cParams.hashLog;
    if (VAR_2->cParams.chainLog) VAR_5.chainLog = VAR_2->cParams.chainLog;
    if (VAR_2->cParams.searchLog) VAR_5.searchLog = VAR_2->cParams.searchLog;
    if (VAR_2->cParams.minMatch) VAR_5.minMatch = VAR_2->cParams.minMatch;
    if (VAR_2->cParams.targetLength) VAR_5.targetLength = VAR_2->cParams.targetLength;
    if (VAR_2->cParams.strategy) VAR_5.strategy = VAR_2->cParams.strategy;
    FUNC_3(!FUNC_1(VAR_5));

    return FUNC_0(VAR_5, VAR_3, VAR_4);
}
