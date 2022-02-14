
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
struct TYPE_11__ {int args; int uri; TYPE_5__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_12__ {int (* read_event_handler ) (TYPE_1__*,TYPE_2__*) ;TYPE_1__* request; } ;
typedef TYPE_2__ ngx_http_lua_socket_udp_upstream_t ;
struct TYPE_13__ {TYPE_1__* current_request; } ;
typedef TYPE_3__ ngx_http_log_ctx_t ;
struct TYPE_14__ {scalar_t__ write; TYPE_5__* data; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_15__ {scalar_t__ fd; TYPE_8__* log; TYPE_2__* data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_16__ {TYPE_3__* data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,TYPE_8__*,int ,char*,int *,int *,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(ngx_event_t *VAR_1)
{
    ngx_connection_t *VAR_2;
    ngx_http_request_t *VAR_3;
    ngx_http_log_ctx_t *VAR_4;

    ngx_http_lua_socket_udp_upstream_t *VAR_5;

    VAR_2 = VAR_1->data;
    VAR_5 = VAR_2->data;
    VAR_3 = VAR_5->request;
    VAR_2 = VAR_3->connection;

    if (VAR_2->fd != (ngx_socket_t) -1) {
        VAR_4 = VAR_2->log->data;
        VAR_4->current_request = VAR_3;
    }

    FUNC_1(VAR_0, VAR_2->log, 0,
                   "lua udp socket handler for \"%V?%V\", wev %d", &VAR_3->uri,
                   &VAR_3->args, (int) VAR_1->write);

    VAR_5->read_event_handler(VAR_3, VAR_5);

    FUNC_0(VAR_2);
}
