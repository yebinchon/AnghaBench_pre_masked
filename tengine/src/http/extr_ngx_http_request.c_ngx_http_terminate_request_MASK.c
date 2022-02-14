
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {scalar_t__ status; } ;
struct TYPE_13__ {scalar_t__ write_event_handler; int * posted_requests; TYPE_2__* connection; scalar_t__ blocked; int count; TYPE_5__* cleanup; TYPE_1__ headers_out; struct TYPE_13__* main; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_14__ {int terminal_posted_request; } ;
typedef TYPE_4__ ngx_http_ephemeral_t ;
struct TYPE_15__ {struct TYPE_15__* next; int data; int (* handler ) (int ) ;} ;
typedef TYPE_5__ ngx_http_cleanup_t ;
struct TYPE_12__ {scalar_t__ sent; int error; int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;
 int FUNC_4 (int ,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(ngx_http_request_t *VAR_3, ngx_int_t VAR_4)
{
    ngx_http_cleanup_t *VAR_5;
    ngx_http_request_t *VAR_6;
    ngx_http_ephemeral_t *VAR_7;

    VAR_6 = VAR_3->main;

    FUNC_3(VAR_0, VAR_3->connection->log, 0,
                   "http terminate request count:%d", VAR_6->count);

    if (VAR_4 > 0 && (VAR_6->headers_out.status == 0 || VAR_6->connection->sent == 0)) {
        VAR_6->headers_out.status = VAR_4;
    }

    VAR_5 = VAR_6->cleanup;
    VAR_6->cleanup = ((void*)0);

    while (VAR_5) {
        if (VAR_5->handler) {
            VAR_5->handler(VAR_5->data);
        }

        VAR_5 = VAR_5->next;
    }

    FUNC_4(VAR_0, VAR_3->connection->log, 0,
                   "http terminate cleanup count:%d blk:%d",
                   VAR_6->count, VAR_6->blocked);

    if (VAR_6->write_event_handler) {

        if (VAR_6->blocked) {
            VAR_3->connection->error = 1;
            VAR_3->write_event_handler = VAR_1;
            return;
        }

        VAR_7 = FUNC_1(VAR_6);
        VAR_6->posted_requests = ((void*)0);
        VAR_6->write_event_handler = VAR_2;
        (void) FUNC_2(VAR_6, &VAR_7->terminal_posted_request);
        return;
    }

    FUNC_0(VAR_6, VAR_4);
}
