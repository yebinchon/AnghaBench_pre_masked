
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int key; } ;
typedef TYPE_1__ ngx_http_lua_socket_pool_t ;
typedef int lua_State ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 TYPE_4__* VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ,char*,TYPE_1__*,int ) ;
 int VAR_3 ;

void
FUNC_9(lua_State *VAR_4)
{
    ngx_http_lua_socket_pool_t *VAR_5;

    FUNC_2(VAR_4, FUNC_6(
                          VAR_3));
    FUNC_4(VAR_4, VAR_0);

    FUNC_3(VAR_4);
    while (FUNC_0(VAR_4, -2) != 0) {

        VAR_5 = FUNC_5(VAR_4, -1);

        if (VAR_5 != ((void*)0)) {
            FUNC_8(VAR_1, VAR_2->log, 0,
                           "lua tcp socket keepalive: free connection pool %p "
                           "for \"%s\"", VAR_5, VAR_5->key);

            FUNC_7(VAR_5);
        }

        FUNC_1(VAR_4, 1);
    }

    FUNC_1(VAR_4, 1);
}
