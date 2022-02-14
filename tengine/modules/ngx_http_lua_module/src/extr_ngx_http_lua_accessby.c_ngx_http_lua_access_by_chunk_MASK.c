
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_29__ {scalar_t__ header_sent; TYPE_7__* connection; int read_event_handler; int stream; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_30__ {scalar_t__ check_client_abort; } ;
typedef TYPE_3__ ngx_http_lua_loc_conf_t ;
struct TYPE_28__ {int co_ref; int co_top; int * co; } ;
struct TYPE_31__ {int entered_access_phase; int eof; int context; int * cleanup; TYPE_1__* cur_co_ctx; TYPE_1__ entry_co_ctx; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_32__ {int handler; TYPE_4__* data; } ;
typedef TYPE_5__ ngx_http_cleanup_t ;
struct TYPE_33__ {int active; } ;
typedef TYPE_6__ ngx_event_t ;
struct TYPE_34__ {int requests; TYPE_6__* read; int log; } ;
typedef TYPE_7__ ngx_connection_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ,int ) ;
 int VAR_10 ;
 TYPE_5__* FUNC_4 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_5 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 int * FUNC_9 (TYPE_2__*,int *,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (TYPE_2__*,int *,TYPE_4__*) ;
 scalar_t__ FUNC_11 (TYPE_7__*,int *,TYPE_2__*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_12 (int *,TYPE_2__*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_4__*,int *) ;
 int FUNC_14 (int *,TYPE_2__*) ;
 int FUNC_15 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_16(lua_State *VAR_14, ngx_http_request_t *VAR_15)
{
    int VAR_16;
    ngx_int_t VAR_17;
    ngx_uint_t VAR_18;
    lua_State *VAR_19;
    ngx_event_t *VAR_20;
    ngx_connection_t *VAR_21;
    ngx_http_lua_ctx_t *VAR_22;
    ngx_http_cleanup_t *VAR_23;

    ngx_http_lua_loc_conf_t *VAR_24;


    VAR_19 = FUNC_9(VAR_15, VAR_14, &VAR_16);

    if (VAR_19 == ((void*)0)) {
        FUNC_15(VAR_7, VAR_15->connection->log, 0,
                      "lua: failed to create new coroutine "
                      "to handle request");

        return VAR_4;
    }


    FUNC_2(VAR_14, VAR_19, 1);



    FUNC_8(VAR_19);
    FUNC_1(VAR_19, -2);



    FUNC_14(VAR_19, VAR_15);


    VAR_22 = FUNC_5(VAR_15, VAR_11);

    FUNC_0("ctx = %p", VAR_22);

    if (VAR_22 == ((void*)0)) {
        return VAR_3;
    }

    FUNC_10(VAR_15, VAR_14, VAR_22);

    VAR_22->entered_access_phase = 1;

    VAR_22->cur_co_ctx = &VAR_22->entry_co_ctx;
    VAR_22->cur_co_ctx->co = VAR_19;
    VAR_22->cur_co_ctx->co_ref = VAR_16;







    if (VAR_22->cleanup == ((void*)0)) {
        VAR_23 = FUNC_4(VAR_15, 0);
        if (VAR_23 == ((void*)0)) {
            return VAR_4;
        }

        VAR_23->handler = VAR_13;
        VAR_23->data = VAR_22;
        VAR_22->cleanup = &VAR_23->handler;
    }


    VAR_22->context = VAR_5;

    VAR_24 = FUNC_6(VAR_15, VAR_11);

    if (VAR_24->check_client_abort) {
        VAR_15->read_event_handler = VAR_12;





        VAR_20 = VAR_15->connection->read;

        if (!VAR_20->active) {
            if (FUNC_3(VAR_20, VAR_9, 0) != VAR_8) {
                return VAR_3;
            }
        }





    } else {
        VAR_15->read_event_handler = VAR_10;
    }

    VAR_21 = VAR_15->connection;
    VAR_18 = VAR_21->requests;

    VAR_17 = FUNC_12(VAR_14, VAR_15, VAR_22, 0);

    FUNC_0("returned %d", (int) VAR_17);

    if (VAR_17 == VAR_3 || VAR_17 > VAR_8) {
        return VAR_17;
    }

    if (VAR_17 == VAR_0) {
        VAR_17 = FUNC_11(VAR_21, VAR_14, VAR_15, VAR_22, VAR_18);

        if (VAR_17 == VAR_3 || VAR_17 == VAR_2 || VAR_17 > VAR_8) {
            return VAR_17;
        }

        if (VAR_17 != VAR_8) {
            return VAR_1;
        }

    } else if (VAR_17 == VAR_2) {
        FUNC_7(VAR_15, VAR_2);

        VAR_17 = FUNC_11(VAR_21, VAR_14, VAR_15, VAR_22, VAR_18);

        if (VAR_17 == VAR_3 || VAR_17 == VAR_2 || VAR_17 > VAR_8) {
            return VAR_17;
        }

        if (VAR_17 != VAR_8) {
            return VAR_1;
        }
    }


    if (VAR_17 == VAR_8) {
        if (VAR_15->header_sent) {
            FUNC_0("header already sent");





            if (!VAR_22->eof) {
                FUNC_0("eof not yet sent");

                VAR_17 = FUNC_13(VAR_15, VAR_22, ((void*)0)
                                                                         );
                if (VAR_17 == VAR_3 || VAR_17 > VAR_8) {
                    return VAR_17;
                }
            }

            return VAR_6;
        }

        return VAR_8;
    }


    return VAR_1;
}
