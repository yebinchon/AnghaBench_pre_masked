
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_25__ {int sockaddr; TYPE_5__* connection; } ;
struct TYPE_22__ {scalar_t__ socket_errno; TYPE_8__ peer; } ;
typedef TYPE_3__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_23__ {scalar_t__ log_socket_errors; } ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_24__ {int read; TYPE_17__* write; int addr_text; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_20__ {int log; } ;
struct TYPE_19__ {scalar_t__ timer_set; scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_17__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_17__*,int ) ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_8__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,char*) ;
 int FUNC_10 (int ,int ,int ,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_11(ngx_http_request_t *VAR_6,
    ngx_http_lua_socket_tcp_upstream_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_connection_t *VAR_9;
    ngx_http_lua_loc_conf_t *VAR_10;

    VAR_9 = VAR_7->peer.connection;

    if (VAR_9->write->timedout) {

        VAR_10 = FUNC_3(VAR_6, VAR_5);

        if (VAR_10->log_socket_errors) {
            FUNC_6(&VAR_7->peer);
            FUNC_10(VAR_3, VAR_6->connection->log, 0,
                          "lua tcp socket connect timed out,"
                          " when connecting to %V:%ud",
                          &VAR_9->addr_text, FUNC_8(VAR_7->peer.sockaddr));
        }

        FUNC_4(VAR_6, VAR_7,
                                              VAR_1);
        return;
    }

    if (VAR_9->write->timer_set) {
        FUNC_0(VAR_9->write);
    }

    VAR_8 = FUNC_7(VAR_6, VAR_9);
    if (VAR_8 != VAR_4) {
        if (VAR_8 > 0) {
            VAR_7->socket_errno = (ngx_err_t) VAR_8;
        }

        FUNC_4(VAR_6, VAR_7,
                                              VAR_0);
        return;
    }

    FUNC_9(VAR_2, VAR_6->connection->log, 0,
                   "lua tcp socket connected");






    if (FUNC_2(VAR_9->write, 0) != VAR_4) {
        FUNC_4(VAR_6, VAR_7,
                                              VAR_0);
        return;
    }

    if (FUNC_1(VAR_9->read, 0) != VAR_4) {
        FUNC_4(VAR_6, VAR_7,
                                              VAR_0);
        return;
    }

    FUNC_5(VAR_6, VAR_7);
}
