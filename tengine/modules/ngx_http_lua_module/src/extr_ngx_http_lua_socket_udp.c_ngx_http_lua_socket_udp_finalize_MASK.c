
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_10__ {int * connection; } ;
struct TYPE_12__ {scalar_t__ waiting; TYPE_3__ udp_connection; TYPE_1__* resolved; int ** cleanup; } ;
typedef TYPE_5__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_9__ {int log; } ;
struct TYPE_8__ {int * ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(ngx_http_request_t *VAR_1,
    ngx_http_lua_socket_udp_upstream_t *VAR_2)
{
    FUNC_1(VAR_0, VAR_1->connection->log, 0,
                   "lua finalize socket");

    if (VAR_2->cleanup) {
        *VAR_2->cleanup = ((void*)0);
        VAR_2->cleanup = ((void*)0);
    }

    if (VAR_2->resolved && VAR_2->resolved->ctx) {
        FUNC_2(VAR_2->resolved->ctx);
        VAR_2->resolved->ctx = ((void*)0);
    }

    if (VAR_2->udp_connection.connection) {
        FUNC_1(VAR_0, VAR_1->connection->log, 0,
                       "lua close socket connection");

        FUNC_0(VAR_2->udp_connection.connection);
        VAR_2->udp_connection.connection = ((void*)0);
    }

    if (VAR_2->waiting) {
        VAR_2->waiting = 0;
    }
}
