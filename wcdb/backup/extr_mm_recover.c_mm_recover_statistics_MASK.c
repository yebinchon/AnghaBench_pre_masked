
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int succ_count; unsigned int fail_count; } ;
typedef TYPE_1__ mm_recover_ctx ;



void FUNC_0(mm_recover_ctx *VAR_0,
                           unsigned int *VAR_1,
                           unsigned int *VAR_2)
{
    if (VAR_1)
        *VAR_1 = VAR_0->succ_count;
    if (VAR_2)
        *VAR_2 = VAR_0->fail_count;
}
