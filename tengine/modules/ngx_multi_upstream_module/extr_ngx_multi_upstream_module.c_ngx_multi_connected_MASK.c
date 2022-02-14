
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connected; } ;
typedef TYPE_1__ ngx_multi_connection_t ;
typedef int ngx_flag_t ;
typedef int ngx_connection_t ;


 TYPE_1__* FUNC_0 (int *) ;

ngx_flag_t
FUNC_1(ngx_connection_t *VAR_0)
{
    ngx_multi_connection_t *VAR_1;

    VAR_1 = FUNC_0(VAR_0);

    return VAR_1->connected;
}
