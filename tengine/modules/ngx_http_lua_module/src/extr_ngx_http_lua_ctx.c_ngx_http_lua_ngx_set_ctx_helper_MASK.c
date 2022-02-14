
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_9__ {scalar_t__ ctx_ref; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_7__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (int ,int ,int ,char*) ;

int
FUNC_10(lua_State *VAR_5, ngx_http_request_t *VAR_6,
    ngx_http_lua_ctx_t *VAR_7, int VAR_8)
{
    if (VAR_8 < 0) {
        VAR_8 = FUNC_3(VAR_5) + VAR_8 + 1;
    }

    if (VAR_7->ctx_ref == VAR_0) {
        FUNC_9(VAR_2, VAR_6->connection->log, 0,
                       "lua create ngx.ctx table for the current request");

        FUNC_5(VAR_5, VAR_4);
        FUNC_7(VAR_5, VAR_1);
        FUNC_6(VAR_5, VAR_8);
        VAR_7->ctx_ref = FUNC_1(VAR_5, -2);
        FUNC_4(VAR_5, 1);

        if (FUNC_8(VAR_6, VAR_7->ctx_ref) != VAR_3) {
            return FUNC_0(VAR_5, "no memory");
        }

        return 0;
    }

    FUNC_9(VAR_2, VAR_6->connection->log, 0,
                   "lua fetching existing ngx.ctx table for the current "
                   "request");

    FUNC_5(VAR_5, VAR_4);
    FUNC_7(VAR_5, VAR_1);
    FUNC_2(VAR_5, -1, VAR_7->ctx_ref);
    FUNC_6(VAR_5, VAR_8);
    VAR_7->ctx_ref = FUNC_1(VAR_5, -2);
    FUNC_4(VAR_5, 1);

    return 0;
}
