
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_20__ {char* data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_21__ {TYPE_2__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_18__ {int * connection; } ;
struct TYPE_22__ {size_t length; size_t rest; void* input_filter; int read_timeout; TYPE_4__* request; scalar_t__ eof; scalar_t__ ft_type; TYPE_1__ peer; scalar_t__ read_closed; } ;
typedef TYPE_5__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_23__ {scalar_t__ log_socket_errors; } ;
typedef TYPE_6__ ngx_http_lua_loc_conf_t ;
typedef int lua_State ;
typedef int lua_Integer ;
struct TYPE_19__ {int log; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,char*) ;
 scalar_t__ FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int) ;
 TYPE_5__* FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 TYPE_6__* FUNC_13 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_14 (int *) ;
 int VAR_4 ;
 int FUNC_15 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_16 (TYPE_4__*,TYPE_5__*,int *) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_17 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_18 (int ,int ,int ,char*) ;
 int FUNC_19 (int ,int ,int ,char*,int ) ;
 int FUNC_20 (int ,int ,int ,char*,TYPE_5__*,int *,int,int) ;

__attribute__((used)) static int
FUNC_21(lua_State *VAR_8)
{
    ngx_http_request_t *VAR_9;
    ngx_http_lua_socket_tcp_upstream_t *VAR_10;
    int VAR_11;
    ngx_str_t VAR_12;
    lua_Integer VAR_13;
    char *VAR_14;
    int VAR_15;
    ngx_http_lua_loc_conf_t *VAR_16;

    VAR_11 = FUNC_4(VAR_8);
    if (VAR_11 != 1 && VAR_11 != 2) {
        return FUNC_3(VAR_8, "expecting 1 or 2 arguments "
                          "(including the object), but got %d", VAR_11);
    }

    VAR_9 = FUNC_14(VAR_8);
    if (VAR_9 == ((void*)0)) {
        return FUNC_3(VAR_8, "no request found");
    }

    FUNC_18(VAR_1, VAR_9->connection->log, 0,
                   "lua tcp socket calling receive() method");

    FUNC_2(VAR_8, 1, VAR_0);

    FUNC_9(VAR_8, 1, VAR_3);
    VAR_10 = FUNC_11(VAR_8, -1);

    if (VAR_10 == ((void*)0) || VAR_10->peer.connection == ((void*)0) || VAR_10->read_closed) {

        VAR_16 = FUNC_13(VAR_9, VAR_4);

        if (VAR_16->log_socket_errors) {
            FUNC_20(VAR_2, VAR_9->connection->log, 0,
                          "attempt to receive data on a closed socket: u:%p, "
                          "c:%p, ft:%d eof:%d",
                          VAR_10, VAR_10 ? VAR_10->peer.connection : ((void*)0),
                          VAR_10 ? (int) VAR_10->ft_type : 0, VAR_10 ? (int) VAR_10->eof : 0);
        }

        FUNC_8(VAR_8);
        FUNC_7(VAR_8, "closed");
        return 2;
    }

    if (VAR_10->request != VAR_9) {
        return FUNC_3(VAR_8, "bad request");
    }

    FUNC_15(VAR_9, VAR_10, VAR_8);
    FUNC_16(VAR_9, VAR_10, VAR_8);

    FUNC_19(VAR_1, VAR_9->connection->log, 0,
                   "lua tcp socket read timeout: %M", VAR_10->read_timeout);

    if (VAR_11 > 1) {
        if (FUNC_5(VAR_8, 2)) {
            VAR_15 = 129;

        } else {
            VAR_15 = FUNC_12(VAR_8, 2);
        }

        switch (VAR_15) {
        case 128:
            VAR_12.data = (u_char *) FUNC_1(VAR_8, 2, &VAR_12.len);
            if (VAR_12.len != 2 || VAR_12.data[0] != '*') {
                VAR_14 = (char *) FUNC_6(VAR_8, "bad pattern argument: %s",
                                             (char *) VAR_12.data);

                return FUNC_0(VAR_8, 2, VAR_14);
            }

            switch (VAR_12.data[1]) {
            case 'l':
                VAR_10->input_filter = VAR_7;
                break;

            case 'a':
                VAR_10->input_filter = VAR_5;
                break;

            default:
                return FUNC_0(VAR_8, 2, "bad pattern argument");
                break;
            }

            VAR_10->length = 0;
            VAR_10->rest = 0;

            break;

        case 129:
            VAR_13 = FUNC_10(VAR_8, 2);
            if (VAR_13 < 0) {
                return FUNC_0(VAR_8, 2, "bad pattern argument");
            }


            if (VAR_13 == 0) {
                FUNC_7(VAR_8, "");
                return 1;
            }


            VAR_10->input_filter = VAR_6;
            VAR_10->length = (size_t) VAR_13;
            VAR_10->rest = VAR_10->length;

            break;

        default:
            return FUNC_0(VAR_8, 2, "bad pattern argument");
            break;
        }

    } else {
        VAR_10->input_filter = VAR_7;
        VAR_10->length = 0;
        VAR_10->rest = 0;
    }

    return FUNC_17(VAR_9, VAR_10, VAR_8);
}
