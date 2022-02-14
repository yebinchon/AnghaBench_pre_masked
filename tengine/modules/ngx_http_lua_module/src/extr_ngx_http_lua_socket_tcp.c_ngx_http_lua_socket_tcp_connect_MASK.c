
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_26__ {int len; int * data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_27__ {int log; int log_error; scalar_t__ connection; } ;
typedef TYPE_3__ ngx_peer_connection_t ;
typedef void* ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_28__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_29__ {int * socket_pool; TYPE_6__* conf; void* read_timeout; void* send_timeout; void* connect_timeout; TYPE_3__ peer; TYPE_4__* request; scalar_t__ raw_downstream; scalar_t__ body_downstream; } ;
typedef TYPE_5__ ngx_http_lua_socket_tcp_upstream_t ;
typedef int ngx_http_lua_socket_pool_t ;
struct TYPE_30__ {scalar_t__ pool_size; void* read_timeout; void* send_timeout; void* connect_timeout; } ;
typedef TYPE_6__ ngx_http_lua_loc_conf_t ;
typedef int ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_25__ {int log; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,int,scalar_t__) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int) ;
 TYPE_5__* FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 char* FUNC_15 (int *,char*,int) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int,int ) ;
 int FUNC_22 (int *,int,int ) ;
 int FUNC_23 (int *,int) ;
 scalar_t__ FUNC_24 (int *,int) ;
 scalar_t__ FUNC_25 (int *,int,int *) ;
 int FUNC_26 (int *,int) ;
 void* FUNC_27 (int *,int) ;
 scalar_t__ FUNC_28 (int *,int) ;
 int FUNC_29 (int *,scalar_t__) ;
 int * FUNC_30 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_31 (TYPE_4__*,int ) ;
 int FUNC_32 (int *,int *,int) ;
 TYPE_4__* FUNC_33 (int *) ;
 int FUNC_34 (int ) ;
 int VAR_15 ;
 int FUNC_35 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_36 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_37 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_38 (int *,TYPE_5__*,TYPE_4__*,int *,int *,size_t,int,int ) ;
 int FUNC_39 (int *,TYPE_4__*,TYPE_2__,scalar_t__,scalar_t__,int **) ;
 int FUNC_40 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_41 (int ,int ,int ,char*) ;
 int FUNC_42 (TYPE_5__*,int) ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_43(lua_State *VAR_18)
{
    ngx_http_request_t *VAR_19;
    ngx_http_lua_ctx_t *VAR_20;
    int VAR_21;
    int VAR_22;
    u_char *VAR_23;
    size_t VAR_24;
    ngx_http_lua_loc_conf_t *VAR_25;
    ngx_peer_connection_t *VAR_26;
    int VAR_27, VAR_28, VAR_29;
    unsigned VAR_30;
    int VAR_31;
    ngx_int_t VAR_32;
    ngx_int_t VAR_33;
    ngx_str_t VAR_34;
    const char *VAR_35;

    ngx_http_lua_socket_tcp_upstream_t *VAR_36;

    ngx_http_lua_socket_pool_t *VAR_37;

    VAR_22 = FUNC_9(VAR_18);
    if (VAR_22 != 2 && VAR_22 != 3 && VAR_22 != 4) {
        return FUNC_5(VAR_18, "ngx.socket connect: expecting 2, 3, or 4 "
                          "arguments (including the object), but seen %d", VAR_22);
    }

    VAR_19 = FUNC_33(VAR_18);
    if (VAR_19 == ((void*)0)) {
        return FUNC_5(VAR_18, "no request found");
    }

    VAR_20 = FUNC_30(VAR_19, VAR_15);
    if (VAR_20 == ((void*)0)) {
        return FUNC_5(VAR_18, "no ctx found");
    }

    FUNC_32(VAR_18, VAR_20, VAR_5
                               | VAR_3
                               | VAR_4
                               | VAR_8
                               | VAR_6
                               | VAR_7);

    FUNC_4(VAR_18, 1, VAR_1);

    VAR_23 = (u_char *) FUNC_3(VAR_18, 2, &VAR_24);

    VAR_32 = -1;
    VAR_31 = 2;
    VAR_33 = 0;
    VAR_30 = 0;
    VAR_25 = FUNC_31(VAR_19, VAR_15);

    if (FUNC_28(VAR_18, VAR_22) == VAR_1) {



        FUNC_8(VAR_18, VAR_22, "pool_size");

        if (FUNC_12(VAR_18, -1)) {
            VAR_33 = (ngx_int_t) FUNC_24(VAR_18, -1);

            if (VAR_33 <= 0) {
                VAR_35 = FUNC_15(VAR_18, "bad \"pool_size\" option value: %i",
                                      VAR_33);
                return FUNC_1(VAR_18, VAR_22, VAR_35);
            }

        } else if (!FUNC_11(VAR_18, -1)) {
            VAR_35 = FUNC_15(VAR_18, "bad \"pool_size\" option type: %s",
                                  FUNC_29(VAR_18, FUNC_28(VAR_18, -1)));
            return FUNC_1(VAR_18, VAR_22, VAR_35);
        }

        FUNC_14(VAR_18, 1);

        FUNC_8(VAR_18, VAR_22, "backlog");

        if (FUNC_12(VAR_18, -1)) {
            VAR_32 = (ngx_int_t) FUNC_24(VAR_18, -1);

            if (VAR_32 < 0) {
                VAR_35 = FUNC_15(VAR_18, "bad \"backlog\" option value: %i",
                                      VAR_32);
                return FUNC_1(VAR_18, VAR_22, VAR_35);
            }


            if (VAR_33 == 0) {
                VAR_33 = VAR_25->pool_size;
            }
        }

        FUNC_14(VAR_18, 1);

        FUNC_8(VAR_18, VAR_22, "pool");

        switch (FUNC_28(VAR_18, -1)) {
        case 129:
            FUNC_26(VAR_18, -1);


        case 128:
            VAR_30 = 1;

            FUNC_19(VAR_18, -1);
            FUNC_22(VAR_18, 1, VAR_12);

            VAR_31 = VAR_22 + 1;

            break;

        case 130:
            FUNC_14(VAR_18, 2);
            break;

        default:
            VAR_35 = FUNC_15(VAR_18, "bad \"pool\" option type: %s",
                                  FUNC_6(VAR_18, -1));
            FUNC_1(VAR_18, VAR_22, VAR_35);
            break;
        }

        VAR_22--;
    }


    if (VAR_22 == 4) {
        FUNC_14(VAR_18, 1);
        VAR_22--;
    }

    if (VAR_22 == 3) {
        VAR_21 = FUNC_2(VAR_18, 3);

        if (VAR_21 < 0 || VAR_21 > 65535) {
            FUNC_18(VAR_18);
            FUNC_15(VAR_18, "bad port number: %d", VAR_21);
            return 2;
        }

        if (!VAR_30) {
            FUNC_17(VAR_18, ":");
            FUNC_10(VAR_18, 3);
            FUNC_7(VAR_18, 3);
        }

        FUNC_0("socket key: %s", FUNC_26(VAR_18, -1));

    } else {
        VAR_21 = 0;
    }

    if (!VAR_30) {


        FUNC_19(VAR_18, 2);
        FUNC_22(VAR_18, 1, VAR_12);
    }

    FUNC_21(VAR_18, 1, VAR_11);
    VAR_36 = FUNC_27(VAR_18, -1);
    FUNC_14(VAR_18, 1);

    if (VAR_36) {
        if (VAR_36->request && VAR_36->request != VAR_19) {
            return FUNC_5(VAR_18, "bad request");
        }

        FUNC_35(VAR_19, VAR_36, VAR_18);
        FUNC_36(VAR_19, VAR_36, VAR_18);
        FUNC_37(VAR_19, VAR_36, VAR_18);

        if (VAR_36->body_downstream || VAR_36->raw_downstream) {
            return FUNC_5(VAR_18, "attempt to re-connect a request socket");
        }

        if (VAR_36->peer.connection) {
            FUNC_41(VAR_9, VAR_19->connection->log, 0,
                           "lua tcp socket reconnect without shutting down");

            FUNC_40(VAR_19, VAR_36);
        }

        FUNC_41(VAR_9, VAR_19->connection->log, 0,
                       "lua reuse socket upstream ctx");

    } else {
        VAR_36 = FUNC_13(VAR_18, sizeof(ngx_http_lua_socket_tcp_upstream_t));
        if (VAR_36 == ((void*)0)) {
            return FUNC_5(VAR_18, "no memory");
        }


        FUNC_16(VAR_18, FUNC_34(
                              VAR_17));
        FUNC_20(VAR_18, VAR_0);
        FUNC_23(VAR_18, -2);


        FUNC_22(VAR_18, 1, VAR_11);
    }

    FUNC_42(VAR_36, sizeof(ngx_http_lua_socket_tcp_upstream_t));

    VAR_36->request = VAR_19;

    VAR_36->conf = VAR_25;

    VAR_26 = &VAR_36->peer;

    VAR_26->log = VAR_19->connection->log;
    VAR_26->log_error = VAR_2;

    FUNC_0("lua peer connection log: %p", VAR_26->log);

    FUNC_21(VAR_18, 1, VAR_10);
    FUNC_21(VAR_18, 1, VAR_14);
    FUNC_21(VAR_18, 1, VAR_13);

    VAR_29 = (ngx_int_t) FUNC_24(VAR_18, -1);
    VAR_28 = (ngx_int_t) FUNC_24(VAR_18, -2);
    VAR_27 = (ngx_int_t) FUNC_24(VAR_18, -3);

    FUNC_14(VAR_18, 3);

    if (VAR_27 > 0) {
        VAR_36->connect_timeout = (ngx_msec_t) VAR_27;

    } else {
        VAR_36->connect_timeout = VAR_36->conf->connect_timeout;
    }

    if (VAR_28 > 0) {
        VAR_36->send_timeout = (ngx_msec_t) VAR_28;

    } else {
        VAR_36->send_timeout = VAR_36->conf->send_timeout;
    }

    if (VAR_29 > 0) {
        VAR_36->read_timeout = (ngx_msec_t) VAR_29;

    } else {
        VAR_36->read_timeout = VAR_36->conf->read_timeout;
    }

    FUNC_16(VAR_18, FUNC_34(VAR_16));
    FUNC_20(VAR_18, VAR_0);
    FUNC_19(VAR_18, VAR_31);

    FUNC_20(VAR_18, -2);
    VAR_37 = FUNC_27(VAR_18, -1);
    FUNC_14(VAR_18, 1);

    if (VAR_37 != ((void*)0)) {
        VAR_36->socket_pool = VAR_37;

    } else if (VAR_33 > 0) {
        FUNC_19(VAR_18, VAR_31);
        VAR_34.data = (u_char *) FUNC_25(VAR_18, -1, &VAR_34.len);

        FUNC_39(VAR_18, VAR_19, VAR_34, VAR_33,
                                                   VAR_32, &VAR_37);
        VAR_36->socket_pool = VAR_37;
    }

    return FUNC_38(VAR_18, VAR_36, VAR_19, VAR_20, VAR_23,
                                                  VAR_24, VAR_21, 0);
}
