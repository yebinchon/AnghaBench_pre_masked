
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_2__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_7__* connection; } ;
struct TYPE_20__ {scalar_t__ request_bufs; TYPE_1__ peer; } ;
typedef TYPE_5__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_21__ {scalar_t__ log_socket_errors; } ;
typedef TYPE_6__ ngx_http_lua_loc_conf_t ;
struct TYPE_22__ {TYPE_3__* write; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_18__ {scalar_t__ timedout; } ;
struct TYPE_17__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_4,
    ngx_http_lua_socket_tcp_upstream_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    ngx_http_lua_loc_conf_t *VAR_7;

    VAR_6 = VAR_5->peer.connection;

    FUNC_3(VAR_1, VAR_4->connection->log, 0,
                   "lua tcp socket send handler");

    if (VAR_6->write->timedout) {
        VAR_7 = FUNC_0(VAR_4, VAR_3);

        if (VAR_7->log_socket_errors) {
            FUNC_4(VAR_2, VAR_4->connection->log, 0,
                          "lua tcp socket write timed out");
        }

        FUNC_1(VAR_4, VAR_5,
                                               VAR_0);
        return;
    }

    if (VAR_5->request_bufs) {
        (void) FUNC_2(VAR_4, VAR_5);
    }
}
