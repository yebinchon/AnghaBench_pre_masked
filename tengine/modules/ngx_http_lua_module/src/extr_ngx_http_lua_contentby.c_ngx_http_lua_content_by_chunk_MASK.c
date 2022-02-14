
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_28__ {int read_event_handler; TYPE_2__* connection; int stream; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_29__ {scalar_t__ check_client_abort; } ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
struct TYPE_26__ {int co_ref; int co_top; int * co; } ;
struct TYPE_30__ {int entered_content_phase; int context; int * cleanup; TYPE_1__* cur_co_ctx; TYPE_1__ entry_co_ctx; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_31__ {int handler; TYPE_5__* data; } ;
typedef TYPE_6__ ngx_http_cleanup_t ;
struct TYPE_32__ {int active; } ;
typedef TYPE_7__ ngx_event_t ;
typedef int lua_State ;
struct TYPE_27__ {TYPE_7__* read; int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int ,int ) ;
 int VAR_8 ;
 TYPE_6__* FUNC_4 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_5 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_3__*,TYPE_5__*,int) ;
 TYPE_5__* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int VAR_9 ;
 int * FUNC_10 (TYPE_3__*,int *,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (TYPE_3__*,int *,TYPE_5__*) ;
 scalar_t__ FUNC_12 (int *,TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_13 (int *,TYPE_3__*) ;
 int FUNC_14 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_15(lua_State *VAR_12, ngx_http_request_t *VAR_13)
{
    int VAR_14;
    ngx_int_t VAR_15;
    lua_State *VAR_16;
    ngx_event_t *VAR_17;
    ngx_http_lua_ctx_t *VAR_18;
    ngx_http_cleanup_t *VAR_19;

    ngx_http_lua_loc_conf_t *VAR_20;

    FUNC_0("content by chunk");

    VAR_18 = FUNC_5(VAR_13, VAR_9);

    if (VAR_18 == ((void*)0)) {
        VAR_18 = FUNC_8(VAR_13);
        if (VAR_18 == ((void*)0)) {
            return VAR_3;
        }

    } else {
        FUNC_0("reset ctx");
        FUNC_11(VAR_13, VAR_12, VAR_18);
    }

    VAR_18->entered_content_phase = 1;


    VAR_16 = FUNC_10(VAR_13, VAR_12, &VAR_14);

    if (VAR_16 == ((void*)0)) {
        FUNC_14(VAR_5, VAR_13->connection->log, 0,
                      "lua: failed to create new coroutine to handle request");

        return VAR_3;
    }


    FUNC_2(VAR_12, VAR_16, 1);



    FUNC_9(VAR_16);
    FUNC_1(VAR_16, -2);



    FUNC_13(VAR_16, VAR_13);

    VAR_18->cur_co_ctx = &VAR_18->entry_co_ctx;
    VAR_18->cur_co_ctx->co = VAR_16;
    VAR_18->cur_co_ctx->co_ref = VAR_14;





    if (VAR_18->cleanup == ((void*)0)) {
        VAR_19 = FUNC_4(VAR_13, 0);
        if (VAR_19 == ((void*)0)) {
            return VAR_3;
        }

        VAR_19->handler = VAR_11;
        VAR_19->data = VAR_18;
        VAR_18->cleanup = &VAR_19->handler;
    }


    VAR_18->context = VAR_4;

    VAR_20 = FUNC_6(VAR_13, VAR_9);

    if (VAR_20->check_client_abort) {
        VAR_13->read_event_handler = VAR_10;





        VAR_17 = VAR_13->connection->read;

        if (!VAR_17->active) {
            if (FUNC_3(VAR_17, VAR_7, 0) != VAR_6) {
                return VAR_2;
            }
        }





    } else {
        VAR_13->read_event_handler = VAR_8;
    }

    VAR_15 = FUNC_12(VAR_12, VAR_13, VAR_18, 0);

    if (VAR_15 == VAR_2 || VAR_15 >= VAR_6) {
        return VAR_15;
    }

    if (VAR_15 == VAR_0) {
        return FUNC_7(VAR_12, VAR_13, VAR_18, 0);
    }

    if (VAR_15 == VAR_1) {
        return FUNC_7(VAR_12, VAR_13, VAR_18, 1);
    }

    return VAR_6;
}
