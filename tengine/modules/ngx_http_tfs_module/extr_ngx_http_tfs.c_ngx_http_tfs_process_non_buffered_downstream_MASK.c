
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ segment_index; } ;
struct TYPE_16__ {scalar_t__ code; } ;
struct TYPE_17__ {int version; scalar_t__ is_raw_update; TYPE_1__ action; } ;
struct TYPE_19__ {int data; TYPE_3__ file; int is_rolling_back; int state; int parent; TYPE_2__ r_ctx; } ;
typedef TYPE_4__ ngx_http_tfs_t ;
struct TYPE_20__ {int write_event_handler; TYPE_7__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_21__ {scalar_t__ timedout; } ;
typedef TYPE_6__ ngx_event_t ;
struct TYPE_22__ {int timedout; TYPE_8__* log; TYPE_6__* write; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_23__ {char* action; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_7__*,int ,char*) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int ) ;
 int VAR_8 ;
 int FUNC_2 (int ,TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int ,TYPE_8__*,int ,char*) ;

__attribute__((used)) static void
FUNC_6(ngx_http_request_t *VAR_10)
{
    ngx_event_t *VAR_11;
    ngx_http_tfs_t *VAR_12;
    ngx_connection_t *VAR_13;

    VAR_13 = VAR_10->connection;
    VAR_11 = VAR_13->write;
    VAR_12 = FUNC_1(VAR_10, VAR_9);

    FUNC_5(VAR_6, VAR_13->log, 0,
                   "http tfs upstream process downstream");

    VAR_13->log->action = "sending to client";

    if (VAR_11->timedout) {
        VAR_13->timedout = 1;
        FUNC_0(VAR_13, VAR_0, "client timed out");


        if (VAR_12->r_ctx.version == 1
            && VAR_12->r_ctx.action.code == VAR_2
            && VAR_12->r_ctx.is_raw_update == VAR_3
            && !VAR_12->parent)
        {
            VAR_10->write_event_handler = VAR_8;
            VAR_12->state = VAR_4;
            VAR_12->is_rolling_back = VAR_5;
            VAR_12->file.segment_index = 0;
            FUNC_3(VAR_12, VAR_7);
            return;
        }

        FUNC_2(VAR_12->data, VAR_12,
                                      VAR_1);
        return;
    }

    FUNC_4(VAR_12, 1);
}
