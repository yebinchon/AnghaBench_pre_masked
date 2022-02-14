
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct TYPE_21__ {TYPE_2__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_20__ {int * start; } ;
struct TYPE_18__ {TYPE_7__* connection; } ;
struct TYPE_22__ {TYPE_3__ buffer; TYPE_1__ peer; } ;
typedef TYPE_5__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_23__ {scalar_t__ log_socket_errors; } ;
typedef TYPE_6__ ngx_http_lua_loc_conf_t ;
struct TYPE_24__ {TYPE_16__* read; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_19__ {int log; } ;
struct TYPE_17__ {scalar_t__ timer_set; scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_16__*) ;
 TYPE_6__* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_6(ngx_http_request_t *VAR_4,
    ngx_http_lua_socket_tcp_upstream_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    ngx_http_lua_loc_conf_t *VAR_7;

    VAR_6 = VAR_5->peer.connection;

    FUNC_4(VAR_1, VAR_4->connection->log, 0,
                   "lua tcp socket read handler");

    if (VAR_6->read->timedout) {
        VAR_6->read->timedout = 0;

        VAR_7 = FUNC_1(VAR_4, VAR_3);

        if (VAR_7->log_socket_errors) {
            FUNC_5(VAR_2, VAR_4->connection->log, 0,
                          "lua tcp socket read timed out");
        }

        FUNC_2(VAR_4, VAR_5,
                                              VAR_0);
        return;
    }


    if (VAR_6->read->timer_set) {
        FUNC_0(VAR_6->read);
    }


    if (VAR_5->buffer.start != ((void*)0)) {
        (void) FUNC_3(VAR_4, VAR_5);
    }
}
