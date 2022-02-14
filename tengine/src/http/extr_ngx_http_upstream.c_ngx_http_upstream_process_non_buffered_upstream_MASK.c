
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* connection; } ;
struct TYPE_11__ {TYPE_1__ peer; } ;
typedef TYPE_3__ ngx_http_upstream_t ;
typedef int ngx_http_request_t ;
struct TYPE_12__ {TYPE_2__* read; TYPE_5__* log; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_13__ {char* action; } ;
struct TYPE_10__ {scalar_t__ timedout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,TYPE_5__*,int ,char*) ;

__attribute__((used)) static void
FUNC_4(ngx_http_request_t *VAR_3,
    ngx_http_upstream_t *VAR_4)
{
    ngx_connection_t *VAR_5;

    VAR_5 = VAR_4->peer.connection;

    FUNC_3(VAR_2, VAR_5->log, 0,
                   "http upstream process non buffered upstream");

    VAR_5->log->action = "reading upstream";

    if (VAR_5->read->timedout) {
        FUNC_0(VAR_5, VAR_0, "upstream timed out");
        FUNC_1(VAR_3, VAR_4, VAR_1);
        return;
    }

    FUNC_2(VAR_3, 0);
}
