
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_multi_connection_t ;
struct TYPE_3__ {int * multi_c; } ;
typedef TYPE_1__ ngx_connection_t ;



ngx_multi_connection_t*
FUNC_0(ngx_connection_t *VAR_0)
{
    ngx_multi_connection_t *VAR_1;

    VAR_1 = VAR_0->multi_c;

    return VAR_1;
}
