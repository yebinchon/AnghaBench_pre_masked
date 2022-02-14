
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct TYPE_19__ {TYPE_6__* connection; } ;
struct TYPE_21__ {int write_event_handler; TYPE_1__* conf; scalar_t__ header_sent; scalar_t__ ssl; TYPE_2__ peer; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_22__ {TYPE_3__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_23__ {TYPE_16__* write; int * ssl; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_20__ {int log; } ;
struct TYPE_18__ {int preserve_output; } ;
struct TYPE_17__ {scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_16__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,TYPE_6__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_3,
    ngx_http_upstream_t *VAR_4)
{
    ngx_connection_t *VAR_5;

    VAR_5 = VAR_4->peer.connection;

    FUNC_4(VAR_1, VAR_3->connection->log, 0,
                   "http upstream send request handler");

    if (VAR_5->write->timedout) {
        FUNC_1(VAR_3, VAR_4, VAR_0);
        return;
    }
    if (VAR_4->header_sent && !VAR_4->conf->preserve_output) {
        VAR_4->write_event_handler = VAR_2;

        (void) FUNC_0(VAR_5->write, 0);

        return;
    }

    FUNC_2(VAR_3, VAR_4, 1);
}
