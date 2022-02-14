
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_6__ {int totalCCtx; int cMem; } ;
typedef TYPE_1__ ZSTDMT_CCtxPool ;


 TYPE_1__* FUNC_0 (int,int const) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static ZSTDMT_CCtxPool* FUNC_2(ZSTDMT_CCtxPool* VAR_0,
                                              int VAR_1)
{
    if (VAR_0==((void*)0)) return ((void*)0);
    if (VAR_1 <= VAR_0->totalCCtx) return VAR_0;

    { ZSTD_customMem const VAR_2 = VAR_0->cMem;
        FUNC_1(VAR_0);
        return FUNC_0(VAR_1, VAR_2);
    }
}
