
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_29__ {TYPE_8__* lock; int main_conf; TYPE_7__* upstream; } ;
typedef TYPE_9__ ngx_http_tfs_timers_data_t ;
struct TYPE_24__ {int code; } ;
struct TYPE_25__ {int version; TYPE_4__ action; } ;
struct TYPE_17__ {int main_conf; TYPE_6__* loc_conf; TYPE_5__ r_ctx; TYPE_12__* finalize_data; int finalize_request; int log; TYPE_11__* data; int * pool; } ;
typedef TYPE_10__ ngx_http_tfs_t ;
typedef int ngx_http_tfs_loc_conf_t ;
struct TYPE_18__ {TYPE_3__* connection; int * pool; } ;
typedef TYPE_11__ ngx_http_request_t ;
struct TYPE_19__ {int log; TYPE_13__* data; } ;
typedef TYPE_12__ ngx_event_t ;
struct TYPE_20__ {TYPE_9__* data; } ;
typedef TYPE_13__ ngx_connection_t ;
struct TYPE_28__ {int ngx_http_tfs_kp_mutex; } ;
struct TYPE_27__ {int rcs_interval; TYPE_2__* rc_ctx; } ;
struct TYPE_26__ {TYPE_7__* upstream; } ;
struct TYPE_23__ {int destroyed; int log; } ;
struct TYPE_22__ {TYPE_1__* sh; } ;
struct TYPE_21__ {int kp_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_12__*,int ) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,char*) ;
 void* FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(ngx_event_t *VAR_4)
{
    ngx_int_t VAR_5;
    ngx_pool_t *VAR_6;
    ngx_http_tfs_t *VAR_7;
    ngx_connection_t *VAR_8;
    ngx_http_request_t *VAR_9;
    ngx_http_tfs_timers_data_t *VAR_10;

    VAR_8 = VAR_4->data;
    VAR_10 = VAR_8->data;
    if (FUNC_7(&VAR_10->lock->ngx_http_tfs_kp_mutex)) {

        if (FUNC_6(&VAR_10->upstream->rc_ctx->sh->kp_queue)) {
            FUNC_4(VAR_2, VAR_4->log, 0,
                           "empty rc keepalive queue");
            FUNC_8(&VAR_10->lock->ngx_http_tfs_kp_mutex);
            FUNC_0(VAR_4, VAR_10->upstream->rcs_interval);
            return;
        }

        VAR_6 = FUNC_1(8192, VAR_4->log);
        if (VAR_6 == ((void*)0)) {
            FUNC_8(&VAR_10->lock->ngx_http_tfs_kp_mutex);
            return;
        }


        VAR_9 = FUNC_5(VAR_6, sizeof(ngx_http_request_t));
        if (VAR_9 == ((void*)0)) {
            FUNC_8(&VAR_10->lock->ngx_http_tfs_kp_mutex);
            return;
        }

        VAR_9->pool = VAR_6;
        VAR_9->connection = FUNC_5(VAR_6, sizeof(ngx_connection_t));
        if (VAR_9->connection == ((void*)0)) {
            FUNC_2(VAR_6);
            FUNC_8(&VAR_10->lock->ngx_http_tfs_kp_mutex);
            return;
        }
        VAR_9->connection->log = VAR_4->log;

        VAR_9->connection->destroyed = 1;

        VAR_7 = FUNC_5(VAR_6, sizeof(ngx_http_tfs_t));
        if (VAR_7 == ((void*)0)) {
            FUNC_2(VAR_6);
            FUNC_8(&VAR_10->lock->ngx_http_tfs_kp_mutex);
            return;
        }

        VAR_7->pool = VAR_6;
        VAR_7->data = VAR_9;
        VAR_7->log = VAR_4->log;
        VAR_7->finalize_request = VAR_3;
        VAR_7->finalize_data = VAR_4;

        VAR_7->r_ctx.action.code = VAR_1;
        VAR_7->r_ctx.version = 1;
        VAR_7->loc_conf = FUNC_5(VAR_6, sizeof(ngx_http_tfs_loc_conf_t));
        if (VAR_7->loc_conf == ((void*)0)) {
            FUNC_2(VAR_6);
            FUNC_8(&VAR_10->lock->ngx_http_tfs_kp_mutex);
            return;
        }
        VAR_7->loc_conf->upstream = VAR_10->upstream;
        VAR_7->main_conf = VAR_10->main_conf;

        VAR_5 = FUNC_3(VAR_7);
        if (VAR_5 == VAR_0) {
            FUNC_2(VAR_6);
            FUNC_8(&VAR_10->lock->ngx_http_tfs_kp_mutex);
            return;
        }

    } else {
        FUNC_4(VAR_2, VAR_4->log, 0,
                       "tfs kp mutex lock failed");
    }
}
