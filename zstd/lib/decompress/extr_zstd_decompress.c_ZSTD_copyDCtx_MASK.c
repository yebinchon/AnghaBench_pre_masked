
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int inBuff; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (TYPE_1__*,TYPE_1__ const*,size_t const) ;

void FUNC_1(ZSTD_DCtx* VAR_0, const ZSTD_DCtx* VAR_1)
{
    size_t const VAR_2 = (size_t)((char*)(&VAR_0->inBuff) - (char*)VAR_0);
    FUNC_0(VAR_0, VAR_1, VAR_2);
}
