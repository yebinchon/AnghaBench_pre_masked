
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ ssl; } ;
typedef TYPE_1__ ngx_http_upstream_t ;
struct TYPE_14__ {TYPE_1__* upstream; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ timedout; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_16__ {int * ssl; int log; int write; TYPE_2__* data; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ,char*,TYPE_4__*) ;

void
FUNC_6(ngx_event_t *VAR_4)
{
    ngx_connection_t *VAR_5;

    ngx_http_request_t *VAR_6;
    ngx_http_upstream_t *VAR_7;

    VAR_5 = VAR_4->data;
    VAR_6 = VAR_5->data;
    VAR_7 = VAR_6->upstream;

    if (VAR_4->timedout) {
        FUNC_5(VAR_2, VAR_5->log, 0, "multi: connect timeout %p", VAR_5);
        FUNC_2(VAR_5, VAR_1);
        return;
    }

    FUNC_0(VAR_5->write);

    if (FUNC_4(VAR_5) != VAR_3) {
        FUNC_5(VAR_2, VAR_5->log, 0, "multi: connect failed %p", VAR_5);
        FUNC_2(VAR_5, VAR_0);
        return;
    }
    FUNC_1(VAR_5);
}
