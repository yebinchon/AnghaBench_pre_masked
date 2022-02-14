
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_5__ {TYPE_1__ init_src; } ;
typedef TYPE_2__ ngx_http_lua_main_conf_t ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int,char*) ;

ngx_int_t
FUNC_3(ngx_log_t *VAR_0, ngx_http_lua_main_conf_t *VAR_1,
    lua_State *VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_0(VAR_2, (char *) VAR_1->init_src.data)
             || FUNC_1(VAR_0, VAR_2);

    return FUNC_2(VAR_0, VAR_2, VAR_3, "init_by_lua_file");
}
