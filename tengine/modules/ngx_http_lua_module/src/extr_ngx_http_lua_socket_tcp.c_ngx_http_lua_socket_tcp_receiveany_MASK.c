
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_17__ {int * connection; } ;
struct TYPE_20__ {size_t rest; size_t length; int input_filter; TYPE_3__* request; scalar_t__ eof; scalar_t__ ft_type; TYPE_1__ peer; scalar_t__ read_closed; } ;
typedef TYPE_4__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_21__ {scalar_t__ log_socket_errors; } ;
typedef TYPE_5__ ngx_http_lua_loc_conf_t ;
typedef int lua_State ;
typedef scalar_t__ lua_Integer ;
struct TYPE_18__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int ) ;
 scalar_t__ FUNC_8 (int *,int) ;
 TYPE_4__* FUNC_9 (int *,int) ;
 TYPE_5__* FUNC_10 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_11 (int *) ;
 int VAR_4 ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*,int *) ;
 int FUNC_13 (TYPE_3__*,TYPE_4__*,int *) ;
 int VAR_5 ;
 int FUNC_14 (TYPE_3__*,TYPE_4__*,int *) ;
 int FUNC_15 (int ,int ,int ,char*,size_t) ;
 int FUNC_16 (int ,int ,int ,char*,TYPE_4__*,int *,int,int) ;

__attribute__((used)) static int
FUNC_17(lua_State *VAR_6)
{
    int VAR_7;
    lua_Integer VAR_8;
    ngx_http_request_t *VAR_9;
    ngx_http_lua_loc_conf_t *VAR_10;
    ngx_http_lua_socket_tcp_upstream_t *VAR_11;

    VAR_7 = FUNC_3(VAR_6);
    if (VAR_7 != 2) {
        return FUNC_2(VAR_6, "expecting 2 arguments "
                          "(including the object), but got %d", VAR_7);
    }

    VAR_9 = FUNC_11(VAR_6);
    if (VAR_9 == ((void*)0)) {
        return FUNC_2(VAR_6, "no request found");
    }

    FUNC_1(VAR_6, 1, VAR_0);

    FUNC_7(VAR_6, 1, VAR_3);
    VAR_11 = FUNC_9(VAR_6, -1);

    if (VAR_11 == ((void*)0) || VAR_11->peer.connection == ((void*)0) || VAR_11->read_closed) {

        VAR_10 = FUNC_10(VAR_9, VAR_4);

        if (VAR_10->log_socket_errors) {
            FUNC_16(VAR_2, VAR_9->connection->log, 0,
                          "attempt to receive data on a closed socket: u:%p, "
                          "c:%p, ft:%d eof:%d",
                          VAR_11, VAR_11 ? VAR_11->peer.connection : ((void*)0),
                          VAR_11 ? (int) VAR_11->ft_type : 0, VAR_11 ? (int) VAR_11->eof : 0);
        }

        FUNC_6(VAR_6);
        FUNC_5(VAR_6, "closed");
        return 2;
    }

    if (VAR_11->request != VAR_9) {
        return FUNC_2(VAR_6, "bad request");
    }

    FUNC_12(VAR_9, VAR_11, VAR_6);
    FUNC_13(VAR_9, VAR_11, VAR_6);

    if (!FUNC_4(VAR_6, 2)) {
        return FUNC_0(VAR_6, 2, "bad max argument");
    }

    VAR_8 = FUNC_8(VAR_6, 2);
    if (VAR_8 <= 0) {
        return FUNC_0(VAR_6, 2, "bad max argument");
    }

    VAR_11->input_filter = VAR_5;
    VAR_11->rest = (size_t) VAR_8;
    VAR_11->length = VAR_11->rest;

    FUNC_15(VAR_1, VAR_9->connection->log, 0,
                   "lua tcp socket calling receiveany() method to read at "
                   "most %uz bytes", VAR_11->rest);

    return FUNC_14(VAR_9, VAR_11, VAR_6);
}
