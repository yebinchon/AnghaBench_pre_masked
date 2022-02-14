
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
struct TYPE_14__ {int args; int uri; TYPE_6__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_15__ {int (* resume_handler ) (TYPE_1__*) ;scalar_t__ entered_content_phase; TYPE_3__* cur_co_ctx; } ;
typedef TYPE_2__ ngx_http_lua_ctx_t ;
struct TYPE_16__ {int * cleanup; TYPE_1__* data; } ;
typedef TYPE_3__ ngx_http_lua_co_ctx_t ;
struct TYPE_17__ {TYPE_1__* current_request; } ;
typedef TYPE_4__ ngx_http_log_ctx_t ;
struct TYPE_18__ {TYPE_3__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_19__ {scalar_t__ fd; TYPE_7__* log; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_20__ {TYPE_4__* data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,TYPE_7__*,int ,char*,int *,int *) ;

void
FUNC_5(ngx_event_t *VAR_2)
{
    ngx_connection_t *VAR_3;
    ngx_http_request_t *VAR_4;
    ngx_http_lua_ctx_t *VAR_5;
    ngx_http_log_ctx_t *VAR_6;
    ngx_http_lua_co_ctx_t *VAR_7;

    VAR_7 = VAR_2->data;

    VAR_4 = VAR_7->data;
    VAR_3 = VAR_4->connection;

    VAR_5 = FUNC_1(VAR_4, VAR_1);

    if (VAR_5 == ((void*)0)) {
        return;
    }

    if (VAR_3->fd != (ngx_socket_t) -1) {
        VAR_6 = VAR_3->log->data;
        VAR_6->current_request = VAR_4;
    }

    VAR_7->cleanup = ((void*)0);

    FUNC_4(VAR_0, VAR_3->log, 0,
                   "lua sleep timer expired: \"%V?%V\"", &VAR_4->uri, &VAR_4->args);

    VAR_5->cur_co_ctx = VAR_7;

    if (VAR_5->entered_content_phase) {
        (void) FUNC_2(VAR_4);

    } else {
        VAR_5->resume_handler = FUNC_2;
        FUNC_0(VAR_4);
    }

    FUNC_3(VAR_3);
}
