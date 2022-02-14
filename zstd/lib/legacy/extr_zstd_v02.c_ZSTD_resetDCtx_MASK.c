
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * base; int * previousDstEnd; scalar_t__ phase; int expected; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int VAR_0 ;

__attribute__((used)) static size_t FUNC_0(ZSTD_DCtx* VAR_1)
{
    VAR_1->expected = VAR_0;
    VAR_1->phase = 0;
    VAR_1->previousDstEnd = ((void*)0);
    VAR_1->base = ((void*)0);
    return 0;
}
