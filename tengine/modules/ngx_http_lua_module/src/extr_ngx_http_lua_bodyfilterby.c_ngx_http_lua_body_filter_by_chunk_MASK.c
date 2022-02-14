
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_chain_t ;
typedef int lua_State ;
struct TYPE_5__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int,size_t*) ;
 int FUNC_8 (int *,TYPE_2__*,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 int VAR_4 ;
 int FUNC_11 (int ,int ,int ,char*,size_t,int *) ;

ngx_int_t
FUNC_12(lua_State *VAR_5, ngx_http_request_t *VAR_6,
    ngx_chain_t *VAR_7)
{
    ngx_int_t VAR_8;
    u_char *VAR_9;
    size_t VAR_10;




    FUNC_0("initialize nginx context in Lua VM, code chunk at stack top  sp = 1");
    FUNC_8(VAR_5, VAR_6, VAR_7);






    FUNC_3(VAR_5, VAR_4);
    FUNC_1(VAR_5, 1);

    FUNC_0("protected call user code");
    VAR_8 = FUNC_2(VAR_5, 0, 1, 1);

    FUNC_4(VAR_5, 1);






    if (VAR_8 != 0) {


        VAR_9 = (u_char *) FUNC_7(VAR_5, -1, &VAR_10);

        if (VAR_9 == ((void*)0)) {
            VAR_9 = (u_char *) "unknown reason";
            VAR_10 = sizeof("unknown reason") - 1;
        }

        FUNC_11(VAR_2, VAR_6->connection->log, 0,
                      "failed to run body_filter_by_lua*: %*s", VAR_10, VAR_9);

        FUNC_5(VAR_5, 0);

        return VAR_0;
    }



    VAR_8 = (ngx_int_t) FUNC_6(VAR_5, -1);

    FUNC_0("got return value: %d", (int) VAR_8);

    FUNC_5(VAR_5, 0);

    if (VAR_8 == VAR_0 || VAR_8 >= VAR_1) {
        return VAR_0;
    }

    return VAR_3;
}
