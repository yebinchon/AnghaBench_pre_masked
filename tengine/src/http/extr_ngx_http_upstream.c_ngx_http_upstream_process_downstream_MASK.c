
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* pipe; } ;
typedef TYPE_1__ ngx_http_upstream_t ;
struct TYPE_16__ {int aio; TYPE_1__* upstream; TYPE_5__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_17__ {scalar_t__ delayed; scalar_t__ timedout; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_18__ {int downstream_error; int send_lowat; int aio; } ;
typedef TYPE_4__ ngx_event_pipe_t ;
struct TYPE_19__ {int timedout; TYPE_6__* log; TYPE_3__* write; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_20__ {char* action; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_6__*,int ,char*) ;

__attribute__((used)) static void
FUNC_6(ngx_http_request_t *VAR_5)
{
    ngx_event_t *VAR_6;
    ngx_connection_t *VAR_7;
    ngx_event_pipe_t *VAR_8;
    ngx_http_upstream_t *VAR_9;

    VAR_7 = VAR_5->connection;
    VAR_9 = VAR_5->upstream;
    VAR_8 = VAR_9->pipe;
    VAR_6 = VAR_7->write;

    FUNC_5(VAR_3, VAR_7->log, 0,
                   "http upstream process downstream");

    VAR_7->log->action = "sending to client";





    if (VAR_6->timedout) {

        VAR_8->downstream_error = 1;
        VAR_7->timedout = 1;
        FUNC_0(VAR_7, VAR_2, "client timed out");

    } else {

        if (VAR_6->delayed) {

            FUNC_5(VAR_3, VAR_7->log, 0,
                           "http downstream delayed");

            if (FUNC_2(VAR_6, VAR_8->send_lowat) != VAR_4) {
                FUNC_3(VAR_5, VAR_9, VAR_1);
            }

            return;
        }

        if (FUNC_1(VAR_8, 1) == VAR_0) {
            FUNC_3(VAR_5, VAR_9, VAR_1);
            return;
        }
    }

    FUNC_4(VAR_5, VAR_9);
}
