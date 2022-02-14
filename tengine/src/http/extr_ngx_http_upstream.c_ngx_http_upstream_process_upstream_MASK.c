
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* connection; } ;
struct TYPE_14__ {TYPE_4__* pipe; TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_http_upstream_t ;
typedef int ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ delayed; scalar_t__ timedout; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_16__ {int upstream_error; } ;
typedef TYPE_4__ ngx_event_pipe_t ;
struct TYPE_17__ {TYPE_6__* log; TYPE_3__* read; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_18__ {char* action; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_6__*,int ,char*) ;

__attribute__((used)) static void
FUNC_6(ngx_http_request_t *VAR_5,
    ngx_http_upstream_t *VAR_6)
{
    ngx_event_t *VAR_7;
    ngx_event_pipe_t *VAR_8;
    ngx_connection_t *VAR_9;

    VAR_9 = VAR_6->peer.connection;
    VAR_8 = VAR_6->pipe;
    VAR_7 = VAR_9->read;

    FUNC_5(VAR_3, VAR_9->log, 0,
                   "http upstream process upstream");

    VAR_9->log->action = "reading upstream";

    if (VAR_7->timedout) {

        VAR_8->upstream_error = 1;
        FUNC_0(VAR_9, VAR_2, "upstream timed out");

    } else {

        if (VAR_7->delayed) {

            FUNC_5(VAR_3, VAR_9->log, 0,
                           "http upstream delayed");

            if (FUNC_2(VAR_7, 0) != VAR_4) {
                FUNC_3(VAR_5, VAR_6, VAR_1);
            }

            return;
        }

        if (FUNC_1(VAR_8, 0) == VAR_0) {
            FUNC_3(VAR_5, VAR_6, VAR_1);
            return;
        }
    }

    FUNC_4(VAR_5, VAR_6);
}
