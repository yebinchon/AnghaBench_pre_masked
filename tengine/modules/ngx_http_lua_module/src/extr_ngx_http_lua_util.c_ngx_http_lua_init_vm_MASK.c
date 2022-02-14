
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_pool_t ;
struct TYPE_12__ {TYPE_3__* data; int handler; } ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
typedef int ngx_log_t ;
struct TYPE_13__ {int count; int * vm; } ;
typedef TYPE_3__ ngx_http_lua_vm_state_t ;
struct TYPE_14__ {scalar_t__ package; int loader; } ;
typedef TYPE_4__ ngx_http_lua_preload_hook_t ;
struct TYPE_15__ {TYPE_1__* preload_hooks; TYPE_2__* vm_cleanup; } ;
typedef TYPE_5__ ngx_http_lua_main_conf_t ;
typedef int ngx_cycle_t ;
typedef int lua_State ;
struct TYPE_11__ {size_t nelts; TYPE_4__* elts; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int,int *) ;
 int VAR_1 ;
 int * FUNC_7 (int *,int *,TYPE_5__*,int *) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int ,int *,int ,char*,int *) ;
 TYPE_2__* FUNC_10 (int *,int ) ;

lua_State *
FUNC_11(lua_State *VAR_2, ngx_cycle_t *VAR_3,
    ngx_pool_t *VAR_4, ngx_http_lua_main_conf_t *VAR_5, ngx_log_t *VAR_6,
    ngx_pool_cleanup_t **VAR_7)
{
    lua_State *VAR_8;
    ngx_uint_t VAR_9;
    ngx_pool_cleanup_t *VAR_10;
    ngx_http_lua_preload_hook_t *VAR_11;
    ngx_http_lua_vm_state_t *VAR_12;

    VAR_10 = FUNC_10(VAR_4, 0);
    if (VAR_10 == ((void*)0)) {
        return ((void*)0);
    }


    VAR_8 = FUNC_7(VAR_2, VAR_3, VAR_5, VAR_6);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_9(VAR_0, VAR_6, 0, "lua initialize the "
                   "global Lua VM %p", VAR_8);


    VAR_10->handler = VAR_1;

    VAR_12 = FUNC_6(sizeof(ngx_http_lua_vm_state_t), VAR_6);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_12->vm = VAR_8;
    VAR_12->count = 1;

    VAR_10->data = VAR_12;

    if (VAR_5->vm_cleanup == ((void*)0)) {


        VAR_5->vm_cleanup = VAR_10;
    }

    if (VAR_7) {
        *VAR_7 = VAR_10;
    }






    if (VAR_5->preload_hooks) {



        FUNC_1(VAR_8, "package");
        FUNC_0(VAR_8, -1, "preload");

        VAR_11 = VAR_5->preload_hooks->elts;

        for (VAR_9 = 0; VAR_9 < VAR_5->preload_hooks->nelts; VAR_9++) {

            FUNC_8(VAR_8, VAR_11[VAR_9].package);

            FUNC_3(VAR_8, VAR_11[VAR_9].loader);
            FUNC_4(VAR_8, -2, (char *) VAR_11[VAR_9].package);
        }

        FUNC_2(VAR_8, 2);
    }

    return VAR_8;
}
