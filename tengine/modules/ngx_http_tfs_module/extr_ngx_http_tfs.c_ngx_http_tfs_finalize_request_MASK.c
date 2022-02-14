
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_28__ ;
typedef struct TYPE_36__ TYPE_20__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_17__ ;
typedef struct TYPE_33__ TYPE_14__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_31__ {TYPE_28__* connection; int data; int (* free ) (TYPE_12__*,int ,int ) ;} ;
typedef TYPE_12__ ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_45__ {scalar_t__ code; } ;
struct TYPE_29__ {TYPE_9__ action; } ;
struct TYPE_44__ {TYPE_7__* segment_data; } ;
struct TYPE_40__ {scalar_t__ size; } ;
struct TYPE_32__ {scalar_t__ sp_curr; size_t tfs_peer_count; scalar_t__ json_output; int (* finalize_request ) (TYPE_13__*) ;TYPE_10__ r_ctx; int (* sp_callback ) (TYPE_13__*) ;TYPE_20__* log; TYPE_17__* parent; TYPE_8__ file; TYPE_4__ stat_info; struct TYPE_32__* next; TYPE_2__* main_conf; TYPE_1__* tfs_peer_servers; void* sp_ready; int sp_fail_count; } ;
typedef TYPE_13__ ngx_http_tfs_t ;
struct TYPE_33__ {TYPE_11__* connection; int write_event_handler; } ;
typedef TYPE_14__ ngx_http_request_t ;
struct TYPE_42__ {scalar_t__ size; } ;
struct TYPE_43__ {TYPE_6__ segment_info; } ;
struct TYPE_41__ {int left_length; } ;
struct TYPE_39__ {int size; } ;
struct TYPE_38__ {int conn_pool; } ;
struct TYPE_37__ {scalar_t__ fd; scalar_t__ pool; } ;
struct TYPE_36__ {char* action; } ;
struct TYPE_35__ {TYPE_12__ peer; } ;
struct TYPE_34__ {scalar_t__ sp_curr; scalar_t__ sp_done_count; scalar_t__ sp_count; int (* sp_callback ) (TYPE_17__*) ;void* request_timeout; int sp_fail_count; TYPE_5__ file; TYPE_3__ stat_info; int sp_succ_count; } ;
struct TYPE_30__ {TYPE_20__* log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_28__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_20__*) ;
 int FUNC_3 (TYPE_14__*,scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (TYPE_14__*,int ) ;
 int FUNC_5 (TYPE_13__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,TYPE_20__*,int ,char*,scalar_t__) ;
 int FUNC_8 (int ,TYPE_20__*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_12__*,int ,int ) ;
 int FUNC_10 (TYPE_12__*,int ,int ) ;
 int FUNC_11 (TYPE_17__*) ;
 int FUNC_12 (TYPE_13__*) ;
 int FUNC_13 (TYPE_13__*) ;

void
FUNC_14(ngx_http_request_t *VAR_10, ngx_http_tfs_t *VAR_11,
    ngx_int_t VAR_12)
{
    ngx_uint_t VAR_13;
    ngx_http_tfs_t *VAR_14;
    ngx_peer_connection_t *VAR_15;

    FUNC_7(VAR_7, VAR_10->connection->log, 0,
                   "finalize http tfs request: %i", VAR_12);

    if (VAR_11->parent
        && VAR_11->r_ctx.action.code == VAR_4
        && VAR_11->parent->sp_curr != VAR_11->sp_curr)
    {
        if (VAR_12 != VAR_0) {
            VAR_11->sp_fail_count++;
        }

        VAR_11->sp_ready = VAR_6;
        FUNC_8(VAR_7, VAR_11->log, 0,
                       "curr output segment is [%uD], [%uD] is ready, wait for call...",
                       VAR_11->parent->sp_curr, VAR_11->sp_curr);
        return;
    }

    for (VAR_13 = 0; VAR_13 < VAR_11->tfs_peer_count; VAR_13++) {
        VAR_15 = &VAR_11->tfs_peer_servers[VAR_13].peer;
        if (VAR_15->free) {
            VAR_15->free(VAR_15, VAR_15->data, 0);
        }

        if (VAR_15->connection) {
            if (VAR_15->free) {
                VAR_15->free(VAR_15, VAR_15->data, 0);
            }

            FUNC_7(VAR_7, VAR_10->connection->log, 0,
                           "close http upstream connection: %d",
                           VAR_15->connection->fd);

            if (VAR_15->connection->pool) {
                FUNC_1(VAR_15->connection->pool);
            }

            FUNC_0(VAR_15->connection);
        }

        VAR_15->connection = ((void*)0);
    }





    if (VAR_11->parent) {

        VAR_14 = VAR_11->next;
        FUNC_5(VAR_11);

        VAR_10->write_event_handler = VAR_9;

        if (VAR_12 == VAR_0) {
            VAR_11->parent->sp_succ_count++;
            VAR_11->parent->stat_info.size += VAR_11->stat_info.size;
            if (VAR_11->r_ctx.action.code == VAR_5) {
                VAR_11->parent->file.left_length -=
                                        VAR_11->file.segment_data->segment_info.size;
            }

        } else {
            VAR_11->parent->sp_fail_count++;
            if (VAR_12 == VAR_2) {
                VAR_11->parent->request_timeout = VAR_6;
            }
        }
        VAR_11->parent->sp_done_count++;
        VAR_11->parent->sp_curr++;

        if (VAR_11->parent->sp_done_count == VAR_11->parent->sp_count){
            VAR_11->parent->sp_callback(VAR_11->parent);

        } else {
            if (VAR_11->r_ctx.action.code == VAR_4) {

                FUNC_7(VAR_7, VAR_11->log, 0,
                               "segment[%uD] output complete, call next...",
                               VAR_11->sp_curr);
                if (VAR_14) {
                    VAR_14->sp_callback(VAR_14);
                }
            }
        }

        return;
    }


    if (VAR_11->r_ctx.action.code == VAR_3) {
        VAR_11->finalize_request(VAR_11);
        return;
    }

    if (VAR_11->json_output) {
        FUNC_6(VAR_11->json_output);
    }

    VAR_10->connection->log->action = "sending to client";
    if (VAR_12 == VAR_8) {
        VAR_12 = FUNC_4(VAR_10, VAR_1);
    }

    FUNC_3(VAR_10, VAR_12);
}
