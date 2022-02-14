
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dictEnd; int * vBase; int * base; int * previousDstEnd; int stage; int expected; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_0(ZSTD_DCtx* VAR_2)
{
    VAR_2->expected = VAR_0;
    VAR_2->stage = VAR_1;
    VAR_2->previousDstEnd = ((void*)0);
    VAR_2->base = ((void*)0);
    VAR_2->vBase = ((void*)0);
    VAR_2->dictEnd = ((void*)0);
    return 0;
}
