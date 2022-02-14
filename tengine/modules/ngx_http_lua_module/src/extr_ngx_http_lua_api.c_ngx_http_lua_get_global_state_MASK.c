
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lua; } ;
typedef TYPE_1__ ngx_http_lua_main_conf_t ;
typedef int ngx_conf_t ;
typedef int lua_State ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_0 ;

lua_State *
FUNC_1(ngx_conf_t *VAR_1)
{
    ngx_http_lua_main_conf_t *VAR_2;

    VAR_2 = FUNC_0(VAR_1, VAR_0);

    return VAR_2->lua;
}
