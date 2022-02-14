
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
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_16__ {scalar_t__ code; } ;
struct TYPE_17__ {TYPE_1__ action; } ;
struct TYPE_18__ {int (* read_event_handler ) (TYPE_4__*,TYPE_3__*) ;int (* write_event_handler ) (TYPE_4__*,TYPE_3__*) ;TYPE_2__ r_ctx; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
struct TYPE_19__ {int args; int uri; TYPE_7__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_20__ {TYPE_4__* current_request; } ;
typedef TYPE_5__ ngx_http_log_ctx_t ;
struct TYPE_21__ {scalar_t__ write; TYPE_7__* data; } ;
typedef TYPE_6__ ngx_event_t ;
struct TYPE_22__ {TYPE_12__* log; TYPE_3__* data; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_15__ {TYPE_5__* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int ,TYPE_12__*,int ,char*,int *,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(ngx_event_t *VAR_2)
{
    ngx_http_tfs_t *VAR_3;
    ngx_connection_t *VAR_4;
    ngx_http_request_t *VAR_5;
    ngx_http_log_ctx_t *VAR_6;

    VAR_4 = VAR_2->data;
    VAR_3 = VAR_4->data;

    VAR_5 = VAR_3->data;
    VAR_4 = VAR_5->connection;

    if (VAR_3->r_ctx.action.code != VAR_0) {
        VAR_6 = VAR_4->log->data;
        VAR_6->current_request = VAR_5;
    }

    FUNC_1(VAR_1, VAR_4->log, 0,
                   "http tfs request: \"%V?%V\"", &VAR_5->uri, &VAR_5->args);

    if (VAR_2->write) {
        VAR_3->write_event_handler(VAR_5, VAR_3);

    } else {
        VAR_3->read_event_handler(VAR_5, VAR_3);
    }

    FUNC_0(VAR_4);
}
