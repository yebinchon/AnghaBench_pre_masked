
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {int main; TYPE_6__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_21__ {int (* write_event_handler ) (TYPE_1__*,TYPE_2__*) ;} ;
typedef TYPE_2__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_22__ {scalar_t__ entered_content_phase; scalar_t__ flushing_coros; TYPE_2__* downstream; scalar_t__ writing_raw_req_socket; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_23__ {int send_lowat; int send_timeout; } ;
typedef TYPE_4__ ngx_http_core_loc_conf_t ;
struct TYPE_24__ {scalar_t__ timedout; int ready; scalar_t__ delayed; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_25__ {int timedout; int buffered; int log; int error; TYPE_5__* write; } ;
typedef TYPE_6__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int ) ;
 int VAR_7 ;
 TYPE_3__* FUNC_3 (TYPE_1__*,int ) ;
 TYPE_4__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_3__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 int FUNC_9 (int ,int ,int ,char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_10 (int ,int ,int ,char*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;

ngx_int_t
FUNC_12(ngx_http_request_t *VAR_9)
{
    ngx_int_t VAR_10;
    ngx_event_t *VAR_11;
    ngx_connection_t *VAR_12;
    ngx_http_lua_ctx_t *VAR_13;
    ngx_http_core_loc_conf_t *VAR_14;

    ngx_http_lua_socket_tcp_upstream_t *VAR_15;

    VAR_12 = VAR_9->connection;
    VAR_11 = VAR_12->write;

    VAR_13 = FUNC_3(VAR_9, VAR_8);
    if (VAR_13 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_9(VAR_4, VAR_12->log, 0,
                   "lua run write event handler: timedout:%ud, ready:%ud, "
                   "writing_raw_req_socket:%ud",
                   VAR_11->timedout, VAR_11->ready, VAR_13->writing_raw_req_socket);

    VAR_14 = FUNC_4(VAR_9->main, VAR_7);

    if (VAR_11->timedout && !VAR_13->writing_raw_req_socket) {
        if (!VAR_11->delayed) {
            FUNC_10(VAR_5, VAR_12->log, VAR_2,
                          "client timed out");
            VAR_12->timedout = 1;

            goto flush_coros;
        }

        VAR_11->timedout = 0;
        VAR_11->delayed = 0;

        if (!VAR_11->ready) {
            FUNC_1(VAR_11, VAR_14->send_timeout);

            if (FUNC_2(VAR_11, VAR_14->send_lowat) != VAR_6) {
                if (VAR_13->entered_content_phase) {
                    FUNC_5(VAR_9, VAR_1);
                }
                return VAR_1;
            }
        }
    }

    if (!VAR_11->ready && !VAR_11->timedout) {
        goto useless;
    }

    if (VAR_13->writing_raw_req_socket) {
        VAR_13->writing_raw_req_socket = 0;

        VAR_15 = VAR_13->downstream;
        if (VAR_15 == ((void*)0)) {
            return VAR_1;
        }

        VAR_15->write_event_handler(VAR_9, VAR_15);
        return VAR_0;
    }

    if (VAR_12->buffered & VAR_3) {
        VAR_10 = FUNC_6(VAR_9, VAR_13);

        FUNC_0("flush pending output returned %d, c->error: %d", (int) VAR_10,
           VAR_12->error);

        if (VAR_10 != VAR_1 && VAR_10 != VAR_6) {
            goto useless;
        }


    }

flush_coros:

    FUNC_0("ctx->flushing_coros: %d", (int) VAR_13->flushing_coros);

    if (VAR_13->flushing_coros) {
        return FUNC_7(VAR_9, VAR_13);
    }



useless:

    FUNC_8(VAR_4, VAR_12->log, 0,
                   "useless lua write event handler");

    if (VAR_13->entered_content_phase) {
        return VAR_6;
    }

    return VAR_0;
}
