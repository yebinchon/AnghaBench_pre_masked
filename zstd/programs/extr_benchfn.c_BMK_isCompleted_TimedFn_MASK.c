
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ timeSpent_ns; scalar_t__ timeBudget_ns; } ;
typedef TYPE_1__ BMK_timedFnState_t ;



int FUNC_0(const BMK_timedFnState_t* VAR_0)
{
    return (VAR_0->timeSpent_ns >= VAR_0->timeBudget_ns);
}
