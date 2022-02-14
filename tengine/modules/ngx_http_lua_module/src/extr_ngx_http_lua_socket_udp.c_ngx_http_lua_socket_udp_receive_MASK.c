
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_22__ {int write_event_handler; TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_20__ {int * connection; } ;
struct TYPE_23__ {int waiting; size_t read_timeout; size_t recv_buf_size; int (* prepare_retvals ) (TYPE_3__*,TYPE_4__*,int *) ;TYPE_7__* co_ctx; int read_event_handler; scalar_t__ ft_type; TYPE_3__* request; TYPE_1__ udp_connection; } ;
typedef TYPE_4__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_24__ {scalar_t__ log_socket_errors; } ;
typedef TYPE_5__ ngx_http_lua_loc_conf_t ;
struct TYPE_25__ {scalar_t__ entered_content_phase; TYPE_7__* cur_co_ctx; } ;
typedef TYPE_6__ ngx_http_lua_ctx_t ;
struct TYPE_26__ {TYPE_4__* data; int cleanup; } ;
typedef TYPE_7__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_21__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ) ;
 TYPE_4__* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int VAR_7 ;
 TYPE_6__* FUNC_11 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_7__*) ;
 int VAR_8 ;
 TYPE_3__* FUNC_14 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_15 (TYPE_3__*,TYPE_4__*) ;
 int VAR_10 ;
 int FUNC_16 (TYPE_3__*,TYPE_4__*,int *) ;
 int VAR_11 ;
 int FUNC_17 (int ,int ,int ,char*) ;
 int FUNC_18 (int ,int ,int ,char*,size_t) ;
 int FUNC_19 (int ,int ,int ,char*,TYPE_4__*,int *) ;
 size_t FUNC_20 (size_t,int ) ;

__attribute__((used)) static int
FUNC_21(lua_State *VAR_12)
{
    ngx_http_request_t *VAR_13;
    ngx_http_lua_socket_udp_upstream_t *VAR_14;
    ngx_int_t VAR_15;
    ngx_http_lua_ctx_t *VAR_16;
    ngx_http_lua_co_ctx_t *VAR_17;
    size_t VAR_18;
    int VAR_19;
    ngx_http_lua_loc_conf_t *VAR_20;

    VAR_19 = FUNC_4(VAR_12);
    if (VAR_19 != 1 && VAR_19 != 2) {
        return FUNC_2(VAR_12, "expecting 1 or 2 arguments "
                          "(including the object), but got %d", VAR_19);
    }

    VAR_13 = FUNC_14(VAR_12);
    if (VAR_13 == ((void*)0)) {
        return FUNC_2(VAR_12, "no request found");
    }

    FUNC_17(VAR_2, VAR_13->connection->log, 0,
                   "lua udp socket calling receive() method");

    FUNC_1(VAR_12, 1, VAR_0);

    FUNC_8(VAR_12, 1, VAR_5);
    VAR_14 = FUNC_9(VAR_12, -1);
    FUNC_5(VAR_12, 1);

    if (VAR_14 == ((void*)0) || VAR_14->udp_connection.connection == ((void*)0)) {
        VAR_20 = FUNC_12(VAR_13, VAR_9);

        if (VAR_20->log_socket_errors) {
            FUNC_19(VAR_3, VAR_13->connection->log, 0,
                          "attempt to receive data on a closed socket: u:%p, "
                          "c:%p", VAR_14, VAR_14 ? VAR_14->udp_connection.connection : ((void*)0));
        }

        FUNC_7(VAR_12);
        FUNC_6(VAR_12, "closed");
        return 2;
    }

    if (VAR_14->request != VAR_13) {
        return FUNC_2(VAR_12, "bad request");
    }

    if (VAR_14->ft_type) {
        VAR_14->ft_type = 0;
    }


    if (VAR_14->waiting) {
        FUNC_7(VAR_12);
        FUNC_6(VAR_12, "socket busy");
        return 2;
    }


    FUNC_18(VAR_2, VAR_13->connection->log, 0,
                   "lua udp socket read timeout: %M", VAR_14->read_timeout);

    VAR_18 = (size_t) FUNC_3(VAR_12, 2, VAR_6);
    VAR_18 = FUNC_20(VAR_18, VAR_6);

    VAR_14->recv_buf_size = VAR_18;

    FUNC_18(VAR_2, VAR_13->connection->log, 0,
                   "lua udp socket receive buffer size: %uz", VAR_14->recv_buf_size);

    VAR_15 = FUNC_15(VAR_13, VAR_14);

    if (VAR_15 == VAR_1) {
        FUNC_0("read failed: %d", (int) VAR_14->ft_type);
        VAR_15 = FUNC_16(VAR_13, VAR_14, VAR_12);
        FUNC_0("udp receive retval returned: %d", (int) VAR_15);
        return VAR_15;
    }

    if (VAR_15 == VAR_4) {

        FUNC_17(VAR_2, VAR_13->connection->log, 0,
                       "lua udp socket receive done in a single run");

        return FUNC_16(VAR_13, VAR_14, VAR_12);
    }



    VAR_14->read_event_handler = VAR_10;

    VAR_16 = FUNC_11(VAR_13, VAR_9);
    if (VAR_16 == ((void*)0)) {
        return FUNC_2(VAR_12, "no request ctx found");
    }

    VAR_17 = VAR_16->cur_co_ctx;

    FUNC_13(VAR_17);
    VAR_17->cleanup = VAR_11;
    VAR_17->data = VAR_14;

    if (VAR_16->entered_content_phase) {
        VAR_13->write_event_handler = VAR_8;

    } else {
        VAR_13->write_event_handler = VAR_7;
    }

    VAR_14->co_ctx = VAR_17;
    VAR_14->waiting = 1;
    VAR_14->prepare_retvals = FUNC_16;

    return FUNC_10(VAR_12, 0);
}
