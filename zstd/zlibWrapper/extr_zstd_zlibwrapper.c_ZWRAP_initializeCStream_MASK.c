
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned long long pledgedSrcSize; int * zbc; int compressionLevel; } ;
typedef TYPE_2__ ZWRAP_CCtx ;
struct TYPE_7__ {int strategy; int minMatch; int searchLog; int hashLog; int chainLog; int windowLog; } ;
struct TYPE_9__ {TYPE_1__ cParams; } ;
typedef TYPE_3__ ZSTD_parameters ;


 int FUNC_0 (char*,...) ;
 TYPE_3__ FUNC_1 (int ,unsigned long long,size_t) ;
 size_t FUNC_2 (int *,void const*,size_t,TYPE_3__ const,unsigned long long) ;
 scalar_t__ FUNC_3 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(ZWRAP_CCtx* VAR_2, const void* VAR_3, size_t VAR_4, unsigned long long VAR_5)
{
    FUNC_0("- ZWRAP_initializeCStream=%p\n", VAR_2);
    if (VAR_2 == ((void*)0) || VAR_2->zbc == ((void*)0)) return VAR_1;

    if (!VAR_5) VAR_5 = VAR_2->pledgedSrcSize;
    { ZSTD_parameters const VAR_6 = FUNC_1(VAR_2->compressionLevel, VAR_5, VAR_4);
        size_t VAR_7;
        FUNC_0("pledgedSrcSize=%d windowLog=%d chainLog=%d hashLog=%d searchLog=%d minMatch=%d strategy=%d\n",
                    (int)VAR_5, VAR_6.cParams.windowLog, VAR_6.cParams.chainLog, VAR_6.cParams.hashLog, VAR_6.cParams.searchLog, VAR_6.cParams.minMatch, VAR_6.cParams.strategy);
        VAR_7 = FUNC_2(VAR_2->zbc, VAR_3, VAR_4, VAR_6, VAR_5);
        if (FUNC_3(VAR_7)) return VAR_1;
    }

    return VAR_0;
}
