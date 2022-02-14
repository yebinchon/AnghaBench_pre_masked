
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_19__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_18__ {TYPE_6__* connection; } ;
struct TYPE_20__ {TYPE_2__ udp_connection; } ;
typedef TYPE_4__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_21__ {scalar_t__ log_socket_errors; } ;
typedef TYPE_5__ ngx_http_lua_loc_conf_t ;
struct TYPE_22__ {TYPE_15__* read; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_17__ {int log; } ;
struct TYPE_16__ {scalar_t__ timer_set; scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_15__*) ;
 TYPE_5__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_6(ngx_http_request_t *VAR_4,
    ngx_http_lua_socket_udp_upstream_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    ngx_http_lua_loc_conf_t *VAR_7;

    VAR_6 = VAR_5->udp_connection.connection;

    FUNC_4(VAR_1, VAR_4->connection->log, 0,
                   "lua udp socket read handler");

    if (VAR_6->read->timedout) {
        VAR_6->read->timedout = 0;

        VAR_7 = FUNC_1(VAR_4, VAR_3);

        if (VAR_7->log_socket_errors) {
            FUNC_5(VAR_2, VAR_4->connection->log, 0,
                          "lua udp socket read timed out");
        }

        FUNC_2(VAR_4, VAR_5,
                                             VAR_0);
        return;
    }


    if (VAR_6->read->timer_set) {
        FUNC_0(VAR_6->read);
    }


    (void) FUNC_3(VAR_4, VAR_5);
}
