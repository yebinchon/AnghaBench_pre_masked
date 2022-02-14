
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_18__ {scalar_t__ entered_content_phase; TYPE_1__* cur_co_ctx; int resume_handler; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_19__ {int log; int requests; } ;
typedef TYPE_4__ ngx_connection_t ;
typedef int lua_State ;
struct TYPE_16__ {scalar_t__ sem_resume_status; int co; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int * FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_4__*,int *,TYPE_2__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_2__*,TYPE_3__*,int) ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_7)
{
    lua_State *VAR_8;
    ngx_connection_t *VAR_9;
    ngx_int_t VAR_10;
    ngx_uint_t VAR_11;
    ngx_http_lua_ctx_t *VAR_12;

    VAR_12 = FUNC_3(VAR_7, VAR_5);
    if (VAR_12 == ((void*)0)) {
        return VAR_2;
    }

    VAR_12->resume_handler = VAR_6;

    VAR_9 = VAR_7->connection;
    VAR_8 = FUNC_5(VAR_7, VAR_12);
    VAR_11 = VAR_9->requests;

    if (VAR_12->cur_co_ctx->sem_resume_status == VAR_4) {
        FUNC_0(VAR_12->cur_co_ctx->co, 1);
        FUNC_2(VAR_12->cur_co_ctx->co);

    } else {
        FUNC_0(VAR_12->cur_co_ctx->co, 0);
        FUNC_1(VAR_12->cur_co_ctx->co, "timeout");
    }

    VAR_10 = FUNC_7(VAR_8, VAR_7, VAR_12, 2);

    FUNC_8(VAR_3, VAR_7->connection->log, 0,
                   "lua run thread returned %d", VAR_10);

    if (VAR_10 == VAR_0) {
        return FUNC_6(VAR_9, VAR_8, VAR_7, VAR_12, VAR_11);
    }

    if (VAR_10 == VAR_1) {
        FUNC_4(VAR_7, VAR_1);
        return FUNC_6(VAR_9, VAR_8, VAR_7, VAR_12, VAR_11);
    }



    if (VAR_12->entered_content_phase) {
        FUNC_4(VAR_7, VAR_10);
        return VAR_1;
    }

    return VAR_10;
}
