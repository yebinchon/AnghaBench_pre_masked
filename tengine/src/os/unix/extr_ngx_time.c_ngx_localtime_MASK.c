
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_5__ {int ngx_tm_year; int ngx_tm_mon; } ;
typedef TYPE_1__ ngx_tm_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(time_t VAR_0, ngx_tm_t *VAR_1)
{




    ngx_tm_t *VAR_2;

    VAR_2 = FUNC_0(&VAR_0);
    *VAR_1 = *VAR_2;



    VAR_1->ngx_tm_mon++;
    VAR_1->ngx_tm_year += 1900;
}
