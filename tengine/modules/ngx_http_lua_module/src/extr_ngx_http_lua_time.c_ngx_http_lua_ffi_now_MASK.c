
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double sec; double msec; } ;
typedef TYPE_1__ ngx_time_t ;


 TYPE_1__* FUNC_0 () ;

double
FUNC_1(void)
{
    ngx_time_t *VAR_0;

    VAR_0 = FUNC_0();

    return VAR_0->sec + VAR_0->msec / 1000.0;
}
