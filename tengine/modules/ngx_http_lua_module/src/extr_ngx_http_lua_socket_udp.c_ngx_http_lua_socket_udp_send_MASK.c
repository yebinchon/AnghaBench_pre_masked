
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_16__ {size_t len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_17__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_15__ {int * connection; } ;
struct TYPE_18__ {int ft_type; int socket_errno; TYPE_2__ udp_connection; scalar_t__ waiting; TYPE_4__* request; } ;
typedef TYPE_5__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_19__ {scalar_t__ log_socket_errors; } ;
typedef TYPE_6__ ngx_http_lua_loc_conf_t ;
typedef int lua_State ;
struct TYPE_14__ {int log; } ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *,int,size_t*) ;
 TYPE_5__* FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 TYPE_6__* FUNC_17 (TYPE_4__*,int ) ;
 size_t FUNC_18 (int *,int,int,int) ;
 int FUNC_19 (int *,int,int *) ;
 TYPE_4__* FUNC_20 (int *) ;
 int VAR_5 ;
 int FUNC_21 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_22 (int ,int ,int ,char*,TYPE_5__*,int *) ;
 int FUNC_23 (int *,int *,size_t) ;
 scalar_t__ FUNC_24 (int *,int *,size_t) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_25(lua_State *VAR_7)
{
    ssize_t VAR_8;
    ngx_http_request_t *VAR_9;
    u_char *VAR_10;
    size_t VAR_11;
    ngx_http_lua_socket_udp_upstream_t *VAR_12;
    int VAR_13;
    const char *VAR_14;
    ngx_str_t VAR_15;
    ngx_http_lua_loc_conf_t *VAR_16;

    if (FUNC_4(VAR_7) != 2) {
        return FUNC_3(VAR_7, "expecting 2 arguments (including the object), "
                          "but got %d", FUNC_4(VAR_7));
    }

    VAR_9 = FUNC_20(VAR_7);
    if (VAR_9 == ((void*)0)) {
        return FUNC_3(VAR_7, "request object not found");
    }

    FUNC_2(VAR_7, 1, 128);

    FUNC_11(VAR_7, 1, VAR_4);
    VAR_12 = FUNC_14(VAR_7, -1);
    FUNC_6(VAR_7, 1);

    if (VAR_12 == ((void*)0) || VAR_12->udp_connection.connection == ((void*)0)) {
        VAR_16 = FUNC_17(VAR_9, VAR_5);

        if (VAR_16->log_socket_errors) {
            FUNC_22(VAR_3, VAR_9->connection->log, 0,
                          "attempt to send data on a closed socket: u:%p, c:%p",
                          VAR_12, VAR_12 ? VAR_12->udp_connection.connection : ((void*)0));
        }

        FUNC_10(VAR_7);
        FUNC_9(VAR_7, "closed");
        return 2;
    }

    if (VAR_12->request != VAR_9) {
        return FUNC_3(VAR_7, "bad request");
    }

    if (VAR_12->ft_type) {
        VAR_12->ft_type = 0;
    }

    if (VAR_12->waiting) {
        FUNC_10(VAR_7);
        FUNC_9(VAR_7, "socket busy");
        return 2;
    }

    VAR_13 = FUNC_15(VAR_7, 2);
    switch (VAR_13) {
        case 130:
        case 129:
            FUNC_13(VAR_7, 2, &VAR_11);
            break;

        case 128:
            VAR_11 = FUNC_18(VAR_7, 2, 2, 1 );
            break;

        case 131:
            VAR_11 = sizeof("nil") - 1;
            break;

        case 132:
            if (FUNC_12(VAR_7, 2)) {
                VAR_11 = sizeof("true") - 1;

            } else {
                VAR_11 = sizeof("false") - 1;
            }

            break;

        default:
            VAR_14 = FUNC_7(VAR_7, "string, number, boolean, nil, "
                                  "or array table expected, got %s",
                                  FUNC_16(VAR_7, VAR_13));

            return FUNC_1(VAR_7, 2, VAR_14);
    }

    VAR_15.data = FUNC_5(VAR_7, VAR_11);
    VAR_15.len = VAR_11;

    switch (VAR_13) {
        case 130:
        case 129:
            VAR_10 = (u_char *) FUNC_13(VAR_7, 2, &VAR_11);
            FUNC_23(VAR_15.data, (u_char *) VAR_10, VAR_11);
            break;

        case 128:
            (void) FUNC_19(VAR_7, 2, VAR_15.data);
            break;

        case 131:
            VAR_10 = VAR_15.data;
            *VAR_10++ = 'n';
            *VAR_10++ = 'i';
            *VAR_10++ = 'l';
            break;

        case 132:
            VAR_10 = VAR_15.data;

            if (FUNC_12(VAR_7, 2)) {
                *VAR_10++ = 't';
                *VAR_10++ = 'r';
                *VAR_10++ = 'u';
                *VAR_10++ = 'e';

            } else {
                *VAR_10++ = 'f';
                *VAR_10++ = 'a';
                *VAR_10++ = 'l';
                *VAR_10++ = 's';
                *VAR_10++ = 'e';
            }

            break;

        default:
            return FUNC_3(VAR_7, "impossible to reach here");
    }

    VAR_12->ft_type = 0;




    VAR_12->waiting = 0;


    FUNC_0("sending query %.*s", (int) VAR_15.len, VAR_15.data);

    VAR_8 = FUNC_24(VAR_12->udp_connection.connection, VAR_15.data, VAR_15.len);

    FUNC_0("ngx_send returns %d (query len %d)", (int) VAR_8, (int) VAR_15.len);

    if (VAR_8 == VAR_1 || VAR_8 == VAR_0) {
        VAR_12->socket_errno = VAR_6;

        return FUNC_21(VAR_9, VAR_12, VAR_7);
    }

    if (VAR_8 != (ssize_t) VAR_15.len) {
        FUNC_0("not the while query was sent");

        VAR_12->ft_type |= VAR_2;
        return FUNC_21(VAR_9, VAR_12, VAR_7);
    }

    FUNC_0("n == len");

    FUNC_8(VAR_7, 1);
    return 1;
}
