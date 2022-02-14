
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resource_count; int wait_count; } ;
typedef TYPE_1__ ngx_http_lua_sema_t ;



int
FUNC_0(ngx_http_lua_sema_t *VAR_0)
{
    return VAR_0->resource_count - VAR_0->wait_count;
}
