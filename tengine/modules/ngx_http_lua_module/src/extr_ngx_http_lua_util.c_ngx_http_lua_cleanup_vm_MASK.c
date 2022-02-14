
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; int * vm; } ;
typedef TYPE_1__ ngx_http_lua_vm_state_t ;
typedef int lua_State ;
struct TYPE_5__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,char*,int *) ;

void
FUNC_5(void *VAR_2)
{
    lua_State *VAR_3;
    ngx_http_lua_vm_state_t *VAR_4 = VAR_2;







    if (VAR_4) {
        FUNC_4(VAR_0, VAR_1->log, 0,
                       "lua decrementing the reference count for Lua VM: %i",
                       VAR_4->count);

        if (--VAR_4->count == 0) {
            VAR_3 = VAR_4->vm;
            FUNC_3(VAR_3);
            FUNC_4(VAR_0, VAR_1->log, 0,
                           "lua close the global Lua VM %p", VAR_3);
            FUNC_1(VAR_3);
            FUNC_2(VAR_4);
        }
    }
}
