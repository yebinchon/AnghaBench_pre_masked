
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ ctx_ref; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_8__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,scalar_t__) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,int ) ;
 int VAR_4 ;
 TYPE_2__* FUNC_8 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (TYPE_2__*,scalar_t__) ;
 int FUNC_10 (int ,int ,int ,char*) ;

int
FUNC_11(lua_State *VAR_6)
{
    ngx_http_request_t *VAR_7;
    ngx_http_lua_ctx_t *VAR_8;

    VAR_7 = FUNC_8(VAR_6);
    if (VAR_7 == ((void*)0)) {
        return FUNC_0(VAR_6, "no request found");
    }

    VAR_8 = FUNC_7(VAR_7, VAR_5);
    if (VAR_8 == ((void*)0)) {
        return FUNC_0(VAR_6, "no request ctx found");
    }

    if (VAR_8->ctx_ref == VAR_0) {
        FUNC_10(VAR_2, VAR_7->connection->log, 0,
                       "lua create ngx.ctx table for the current request");

        FUNC_3(VAR_6, VAR_4);
        FUNC_5(VAR_6, VAR_1);
        FUNC_2(VAR_6, 0 , 4 );
        FUNC_4(VAR_6, -1);
        VAR_8->ctx_ref = FUNC_1(VAR_6, -3);

        if (FUNC_9(VAR_7, VAR_8->ctx_ref) != VAR_3) {
            return FUNC_0(VAR_6, "no memory");
        }

        return 1;
    }

    FUNC_10(VAR_2, VAR_7->connection->log, 0,
                   "lua fetching existing ngx.ctx table for the current "
                   "request");

    FUNC_3(VAR_6, VAR_4);
    FUNC_5(VAR_6, VAR_1);
    FUNC_6(VAR_6, -1, VAR_8->ctx_ref);

    return 1;
}
