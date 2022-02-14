
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_24__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_38__ {scalar_t__ code; int msg; } ;
struct TYPE_39__ {int version; TYPE_7__ action; } ;
struct TYPE_36__ {int tag; } ;
struct TYPE_40__ {scalar_t__ state; scalar_t__ length; scalar_t__ (* process_request_body ) (TYPE_9__*) ;TYPE_6__* main_conf; TYPE_10__* data; int log; int output_size; TYPE_8__ r_ctx; scalar_t__ parent; int * busy_bufs; TYPE_5__ output; int out_bufs; int free_bufs; int pool; TYPE_4__* tfs_peer; TYPE_2__* tfs_peer_servers; } ;
typedef TYPE_9__ ngx_http_tfs_t ;
struct TYPE_27__ {TYPE_12__* connection; } ;
typedef TYPE_10__ ngx_http_request_t ;
struct TYPE_28__ {int send_timeout; int send_lowat; } ;
typedef TYPE_11__ ngx_http_core_loc_conf_t ;
struct TYPE_29__ {scalar_t__ (* recv ) (TYPE_12__*,size_t,size_t) ;TYPE_24__* read; TYPE_24__* write; TYPE_10__* data; } ;
typedef TYPE_12__ ngx_connection_t ;
struct TYPE_30__ {size_t end; size_t last; } ;
typedef TYPE_13__ ngx_buf_t ;
struct TYPE_37__ {int tfs_read_timeout; scalar_t__ body_buffer_size; } ;
struct TYPE_34__ {TYPE_12__* connection; } ;
struct TYPE_35__ {TYPE_3__ peer; TYPE_13__ body_buffer; } ;
struct TYPE_31__ {TYPE_12__* connection; } ;
struct TYPE_33__ {TYPE_1__ peer; TYPE_13__ body_buffer; } ;
struct TYPE_32__ {scalar_t__ timer_set; scalar_t__ ready; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (TYPE_24__*,int ) ;
 int FUNC_1 (int *,int **,int *,int ,...) ;
 int FUNC_2 (TYPE_24__*) ;
 scalar_t__ FUNC_3 (TYPE_24__*,int ) ;
 int VAR_16 ;
 TYPE_11__* FUNC_4 (TYPE_10__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_10__*,int ) ;
 int FUNC_6 (TYPE_13__*) ;
 int FUNC_7 (TYPE_10__*,TYPE_9__*,int ) ;
 int FUNC_8 (TYPE_9__*,scalar_t__) ;
 int FUNC_9 (int ,int ,int ,char*,...) ;
 scalar_t__ FUNC_10 (TYPE_12__*,size_t,size_t) ;
 scalar_t__ FUNC_11 (TYPE_9__*) ;

__attribute__((used)) static void
FUNC_12(ngx_http_tfs_t *VAR_17,
    ngx_uint_t VAR_18)
{
    size_t VAR_19;
    ssize_t VAR_20;
    ngx_int_t VAR_21, VAR_22;
    ngx_buf_t *VAR_23;
    ngx_connection_t *VAR_24, *VAR_25;
    ngx_http_request_t *VAR_26;
    ngx_http_core_loc_conf_t *VAR_27;

    VAR_26 = VAR_17->data;
    VAR_22 = 0;
    VAR_21 = 0;
    VAR_23 = ((void*)0);
    VAR_24 = VAR_26->connection;
    VAR_25 = ((void*)0);

    if (VAR_17->r_ctx.version == 1) {

        VAR_23 = &VAR_17->tfs_peer_servers[VAR_8].body_buffer;
        VAR_25 =VAR_17->tfs_peer_servers[VAR_8].peer.connection;

    } else if (VAR_17->r_ctx.action.code != VAR_4) {
        VAR_23 = &VAR_17->tfs_peer->body_buffer;
        VAR_25 = VAR_17->tfs_peer->peer.connection;
    }

    for ( ;; ) {
        if (VAR_18) {

            if (VAR_17->out_bufs || VAR_17->busy_bufs) {

                VAR_21 = FUNC_5(VAR_26, VAR_17->out_bufs);

                if (VAR_21 == VAR_2) {
                    FUNC_7(VAR_26, VAR_17, 0);
                    return;
                }





                FUNC_1(&VAR_17->free_bufs, &VAR_17->busy_bufs,
                                        &VAR_17->out_bufs, VAR_17->output.tag);

            }


            if (VAR_17->busy_bufs == ((void*)0)) {


                if (VAR_17->parent) {
                    if (VAR_17->r_ctx.action.code == VAR_5
                        && VAR_17->state == VAR_10)
                    {
                        FUNC_6(VAR_23);
                        FUNC_7(VAR_26, VAR_17, VAR_1);
                        return;
                    }
                }

                VAR_17->output_size += VAR_17->main_conf->body_buffer_size;

                if (VAR_17->r_ctx.action.code == VAR_4
                    || (VAR_17->r_ctx.action.code == VAR_5
                        && VAR_17->state == VAR_10)
                    || (VAR_17->r_ctx.version == 2
                        && VAR_17->state == VAR_9)
                    || (VAR_17->r_ctx.action.code == VAR_6
                        && VAR_17->state == VAR_11)
                    || (VAR_17->r_ctx.action.code == VAR_7
                        && VAR_17->state == VAR_12))
                {

                    FUNC_9(VAR_14, VAR_17->log, 0,
                                  "%V, output %uL byte",
                                  &VAR_17->r_ctx.action.msg, VAR_17->output_size);
                    FUNC_7(VAR_26, VAR_17, 0);
                    return;
                }

                FUNC_6(VAR_23);
            }
        }

        VAR_19 = VAR_23->end - VAR_23->last;

        if (VAR_17->length > 0 && VAR_19 && VAR_25->read->ready) {
            VAR_20 = VAR_25->recv(VAR_25, VAR_23->last, VAR_19);

            if (VAR_20 == VAR_0) {
                break;
            }

            if (VAR_20 > 0) {
                VAR_23->last += VAR_20;
                VAR_18 = 1;


                VAR_21 = VAR_17->process_request_body(VAR_17);
                if (VAR_21 == VAR_2) {
                    FUNC_9(VAR_13, VAR_17->log, 0,
                                  "process request body failed");
                    FUNC_7(VAR_17->data, VAR_17,
                                                VAR_3);
                    return;
                }


                if (VAR_21 != VAR_0) {
                    VAR_22 = 1;
                    break;
                }
            }

            continue;
        }

        break;
    }

    VAR_27 = FUNC_4(VAR_26, VAR_16);

    if (VAR_24->data == VAR_26) {
        if (FUNC_3(VAR_24->write, VAR_27->send_lowat)
            != VAR_15)
        {
            FUNC_7(VAR_26, VAR_17, 0);
            return;
        }
    }

    if (VAR_24->write->active && !VAR_24->write->ready) {
        FUNC_0(VAR_24->write, VAR_27->send_timeout);

    } else if (VAR_24->write->timer_set) {
        FUNC_2(VAR_24->write);
    }

    if (VAR_17->length > 0 && VAR_25->read->active && !VAR_25->read->ready) {
        FUNC_0(VAR_25->read, VAR_17->main_conf->tfs_read_timeout);

    } else if (VAR_25->read->timer_set) {
        FUNC_2(VAR_25->read);
    }

    if (VAR_22) {
        FUNC_8(VAR_17, VAR_21);
    }
}
