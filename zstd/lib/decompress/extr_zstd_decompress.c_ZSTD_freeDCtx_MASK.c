
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_5__ {int previousLegacyVersion; scalar_t__ legacyContext; struct TYPE_5__* inBuff; int customMem; int staticSize; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int const) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_0 ;

size_t FUNC_4(ZSTD_DCtx* VAR_1)
{
    if (VAR_1==((void*)0)) return 0;
    FUNC_0(VAR_1->staticSize, VAR_0, "not compatible with static DCtx");
    { ZSTD_customMem const VAR_2 = VAR_1->customMem;
        FUNC_1(VAR_1);
        FUNC_2(VAR_1->inBuff, VAR_2);
        VAR_1->inBuff = ((void*)0);




        FUNC_2(VAR_1, VAR_2);
        return 0;
    }
}
