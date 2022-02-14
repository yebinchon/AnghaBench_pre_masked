
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ multi; } ;
typedef TYPE_1__ ngx_http_upstream_t ;
struct TYPE_13__ {TYPE_1__* upstream; TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_14__ {scalar_t__ timedout; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_15__ {int timedout; TYPE_5__* log; TYPE_3__* write; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_16__ {char* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ,TYPE_5__*,int ,char*) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_3)
{
    ngx_event_t *VAR_4;
    ngx_connection_t *VAR_5;
    ngx_http_upstream_t *VAR_6;

    VAR_5 = VAR_3->connection;
    VAR_6 = VAR_3->upstream;
    VAR_4 = VAR_5->write;

    FUNC_4(VAR_2, VAR_5->log, 0,
                   "http upstream process non buffered downstream");

    VAR_5->log->action = "sending to client";

    if (VAR_4->timedout) {
        VAR_5->timedout = 1;
        FUNC_0(VAR_5, VAR_0, "client timed out");
        FUNC_2(VAR_3, VAR_6, VAR_1);
        return;
    }
    FUNC_3(VAR_3, 1);
}
