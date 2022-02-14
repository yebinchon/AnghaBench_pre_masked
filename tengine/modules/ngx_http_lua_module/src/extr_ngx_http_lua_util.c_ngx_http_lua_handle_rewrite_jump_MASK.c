
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int ngx_int_t ;
struct TYPE_15__ {scalar_t__ filter_finalize; int args; int uri; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_12__* cur_co_ctx; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_14__ {int log; } ;
struct TYPE_13__ {int co_status; int co; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_12__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_5 (int ,int ,int ,char*,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_6(lua_State *VAR_4, ngx_http_request_t *VAR_5,
    ngx_http_lua_ctx_t *VAR_6)
{
    FUNC_5(VAR_1, VAR_5->connection->log, 0,
                   "lua thread aborting request with URI rewrite jump: "
                   "\"%V?%V\"", &VAR_5->uri, &VAR_5->args);

    FUNC_0(VAR_6->cur_co_ctx);

    FUNC_2(VAR_5, VAR_6->cur_co_ctx->co, 1);

    VAR_6->cur_co_ctx->co_status = VAR_0;

    if (VAR_5->filter_finalize) {
        FUNC_4(VAR_5, VAR_6, VAR_3);
    }

    FUNC_3(VAR_6, 1 );
    FUNC_1(VAR_5, VAR_6);

    return VAR_2;
}
