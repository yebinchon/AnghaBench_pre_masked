
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_lua_ctx_t ;
struct TYPE_9__ {scalar_t__ co_ref; int co_status; int co; } ;
typedef TYPE_3__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_7__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 int FUNC_6 (int ,int ,int ,char*) ;

void
FUNC_7(ngx_http_request_t *VAR_5, lua_State *VAR_6,
    ngx_http_lua_ctx_t *VAR_7, ngx_http_lua_co_ctx_t *VAR_8)
{
    if (VAR_8->co_ref == VAR_0) {
        return;
    }

    FUNC_6(VAR_3, VAR_5->connection->log, 0,
                   "lua deleting light thread");

    FUNC_2(VAR_6, FUNC_4(
                          VAR_4));
    FUNC_3(VAR_6, VAR_1);

    FUNC_5(VAR_5, VAR_8->co, VAR_7);

    FUNC_0(VAR_6, -1, VAR_8->co_ref);
    VAR_8->co_ref = VAR_0;
    VAR_8->co_status = VAR_2;

    FUNC_1(VAR_6, 1);
}
