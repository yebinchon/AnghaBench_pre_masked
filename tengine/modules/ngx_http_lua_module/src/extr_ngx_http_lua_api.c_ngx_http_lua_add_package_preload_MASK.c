
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_8__ {int loader; int * package; } ;
typedef TYPE_1__ ngx_http_lua_preload_hook_t ;
struct TYPE_9__ {int * preload_hooks; int * lua; } ;
typedef TYPE_2__ ngx_http_lua_main_conf_t ;
struct TYPE_10__ {int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int lua_State ;
typedef int lua_CFunction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,char const*) ;
 int * FUNC_5 (int ,int,int) ;
 TYPE_1__* FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,int ) ;
 int VAR_2 ;

ngx_int_t
FUNC_8(ngx_conf_t *VAR_3, const char *VAR_4,
    lua_CFunction VAR_5)
{
    lua_State *VAR_6;
    ngx_http_lua_main_conf_t *VAR_7;
    ngx_http_lua_preload_hook_t *VAR_8;

    VAR_7 = FUNC_7(VAR_3, VAR_2);

    VAR_6 = VAR_7->lua;

    if (VAR_6) {
        FUNC_1(VAR_6, "package");
        FUNC_0(VAR_6, -1, "preload");
        FUNC_3(VAR_6, VAR_5);
        FUNC_4(VAR_6, -2, VAR_4);
        FUNC_2(VAR_6, 2);
    }




    if (VAR_7->preload_hooks == ((void*)0)) {
        VAR_7->preload_hooks =
            FUNC_5(VAR_3->pool, 4,
                             sizeof(ngx_http_lua_preload_hook_t));

        if (VAR_7->preload_hooks == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_8 = FUNC_6(VAR_7->preload_hooks);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->package = (u_char *) VAR_4;
    VAR_8->loader = VAR_5;

    return VAR_1;
}
