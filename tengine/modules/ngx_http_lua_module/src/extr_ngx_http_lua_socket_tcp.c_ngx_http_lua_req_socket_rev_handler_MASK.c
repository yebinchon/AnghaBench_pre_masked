
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {void* read_event_handler; TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_11__ {int * connection; } ;
struct TYPE_14__ {int (* read_event_handler ) (TYPE_3__*,TYPE_4__*) ;TYPE_1__ peer; } ;
typedef TYPE_4__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_15__ {TYPE_4__* downstream; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3(ngx_http_request_t *VAR_3)
{
    ngx_http_lua_ctx_t *VAR_4;
    ngx_http_lua_socket_tcp_upstream_t *VAR_5;

    FUNC_1(VAR_0, VAR_3->connection->log, 0,
                   "lua request socket read event handler");

    VAR_4 = FUNC_0(VAR_3, VAR_2);
    if (VAR_4 == ((void*)0)) {
        VAR_3->read_event_handler = VAR_1;
        return;
    }

    VAR_5 = VAR_4->downstream;
    if (VAR_5 == ((void*)0) || VAR_5->peer.connection == ((void*)0)) {
        VAR_3->read_event_handler = VAR_1;
        return;
    }

    VAR_5->read_event_handler(VAR_3, VAR_5);
}
