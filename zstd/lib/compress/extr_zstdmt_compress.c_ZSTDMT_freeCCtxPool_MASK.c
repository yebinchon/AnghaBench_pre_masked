
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int totalCCtx; int cMem; int poolMutex; int * cctx; } ;
typedef TYPE_1__ ZSTDMT_CCtxPool ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(ZSTDMT_CCtxPool* VAR_0)
{
    int VAR_1;
    for (VAR_1=0; VAR_1<VAR_0->totalCCtx; VAR_1++)
        FUNC_1(VAR_0->cctx[VAR_1]);
    FUNC_2(&VAR_0->poolMutex);
    FUNC_0(VAR_0, VAR_0->cMem);
}
