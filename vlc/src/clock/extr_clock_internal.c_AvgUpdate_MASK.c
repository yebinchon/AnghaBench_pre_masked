
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int range; int value; } ;
typedef TYPE_1__ average_t ;



void FUNC_0(average_t *VAR_0, double VAR_1)
{
    const int VAR_2 = 1;
    int VAR_3;
    int VAR_4;
    if (VAR_0->count < VAR_0->range)
    {
        VAR_3 = VAR_0->count++;
        VAR_4 = VAR_0->count;
    }
    else
    {
        VAR_3 = VAR_0->range - 1;
        VAR_4 = VAR_0->range;
    }

    const double VAR_5 = VAR_3 * VAR_0->value + VAR_2 * VAR_1;
    VAR_0->value = VAR_5 / VAR_4;
}
