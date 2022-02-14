
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double value; double range; } ;
typedef TYPE_1__ average_t ;



void FUNC_0(average_t *VAR_0, int VAR_1)
{
    const double VAR_2 = VAR_0->value * VAR_0->range;

    VAR_0->range = VAR_1;
    VAR_0->value = VAR_2 / VAR_0->range;
}
