
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int customFree; int customAlloc; } ;
typedef TYPE_1__ ZSTD_customMem ;
typedef int ZSTD_CCtx ;


 unsigned long long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int * const,TYPE_1__) ;
 scalar_t__ FUNC_2 (int,TYPE_1__) ;
 scalar_t__ VAR_1 ;

ZSTD_CCtx* FUNC_3(ZSTD_customMem VAR_2)
{
    FUNC_0(VAR_1==0);
    FUNC_0(VAR_0==(0ULL - 1));
    if (!VAR_2.customAlloc ^ !VAR_2.customFree) return ((void*)0);
    { ZSTD_CCtx* const VAR_3 = (ZSTD_CCtx*)FUNC_2(sizeof(ZSTD_CCtx), VAR_2);
        if (!VAR_3) return ((void*)0);
        FUNC_1(VAR_3, VAR_2);
        return VAR_3;
    }
}
