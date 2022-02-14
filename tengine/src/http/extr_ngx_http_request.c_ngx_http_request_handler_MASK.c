
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int (* read_event_handler ) (TYPE_2__*) ;int (* write_event_handler ) (TYPE_2__*) ;TYPE_1__* main; int args; int uri; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_13__ {scalar_t__ write; scalar_t__ timedout; scalar_t__ delayed; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_14__ {scalar_t__ close; int log; TYPE_2__* data; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_11__ {int count; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(ngx_event_t *VAR_1)
{
    ngx_connection_t *VAR_2;
    ngx_http_request_t *VAR_3;

    VAR_2 = VAR_1->data;
    VAR_3 = VAR_2->data;

    FUNC_1(VAR_2->log, VAR_3);

    FUNC_3(VAR_0, VAR_2->log, 0,
                   "http run request: \"%V?%V\"", &VAR_3->uri, &VAR_3->args);

    if (VAR_2->close) {
        VAR_3->main->count++;
        FUNC_2(VAR_3, 0);
        FUNC_0(VAR_2);
        return;
    }

    if (VAR_1->delayed && VAR_1->timedout) {
        VAR_1->delayed = 0;
        VAR_1->timedout = 0;
    }

    if (VAR_1->write) {
        VAR_3->write_event_handler(VAR_3);

    } else {
        VAR_3->read_event_handler(VAR_3);
    }

    FUNC_0(VAR_2);
}
