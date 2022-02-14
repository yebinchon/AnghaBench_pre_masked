
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {int co_ref; } ;
struct TYPE_11__ {scalar_t__ co_op; int exec_args; int exec_uri; int resume_handler; scalar_t__ exited; scalar_t__ exit_code; scalar_t__ entered_content_phase; scalar_t__ entered_access_phase; scalar_t__ entered_rewrite_phase; TYPE_4__ entry_co_ctx; int * user_co_ctx; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
typedef int ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int *) ;

void
FUNC_4(ngx_http_request_t *VAR_3, lua_State *VAR_4,
    ngx_http_lua_ctx_t *VAR_5)
{
    FUNC_1(VAR_1, VAR_3->connection->log, 0,
                   "lua reset ctx");

    FUNC_0(VAR_3, VAR_5, VAR_4);
    FUNC_2(&VAR_5->entry_co_ctx, sizeof(ngx_http_lua_co_ctx_t));

    VAR_5->entry_co_ctx.co_ref = VAR_0;

    VAR_5->entered_rewrite_phase = 0;
    VAR_5->entered_access_phase = 0;
    VAR_5->entered_content_phase = 0;

    VAR_5->exit_code = 0;
    VAR_5->exited = 0;
    VAR_5->resume_handler = VAR_2;

    FUNC_3(&VAR_5->exec_uri);
    FUNC_3(&VAR_5->exec_args);

    VAR_5->co_op = 0;
}
