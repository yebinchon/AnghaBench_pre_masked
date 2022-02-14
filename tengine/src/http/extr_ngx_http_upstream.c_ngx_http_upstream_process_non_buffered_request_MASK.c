
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {int tag; } ;
struct TYPE_30__ {size_t pos; size_t start; size_t last; size_t end; } ;
struct TYPE_22__ {TYPE_8__* connection; } ;
struct TYPE_26__ {int length; scalar_t__ (* input_filter ) (int ,scalar_t__) ;TYPE_4__* conf; int input_filter_ctx; TYPE_3__* state; int * busy_bufs; TYPE_2__ output; scalar_t__ out_bufs; int free_bufs; TYPE_9__ buffer; TYPE_1__ peer; } ;
typedef TYPE_5__ ngx_http_upstream_t ;
struct TYPE_27__ {int pool; TYPE_8__* connection; TYPE_5__* upstream; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_28__ {int send_timeout; int send_lowat; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
struct TYPE_29__ {scalar_t__ (* recv ) (TYPE_8__*,size_t,size_t) ;TYPE_17__* read; TYPE_17__* write; TYPE_6__* data; int log; scalar_t__ buffered; } ;
typedef TYPE_8__ ngx_connection_t ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_25__ {int read_timeout; } ;
struct TYPE_24__ {int response_length; int bytes_received; } ;
struct TYPE_21__ {scalar_t__ timer_set; scalar_t__ ready; scalar_t__ active; scalar_t__ error; scalar_t__ eof; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_17__*,int ) ;
 int FUNC_1 (int ,int *,int **,scalar_t__*,int ) ;
 int FUNC_2 (TYPE_17__*) ;
 scalar_t__ FUNC_3 (TYPE_17__*,int) ;
 scalar_t__ FUNC_4 (TYPE_17__*,int ) ;
 int VAR_6 ;
 TYPE_7__* FUNC_5 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_6__*,scalar_t__) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_9 (TYPE_8__*,size_t,size_t) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(ngx_http_request_t *VAR_7,
    ngx_uint_t VAR_8)
{
    size_t VAR_9;
    ssize_t VAR_10;
    ngx_buf_t *VAR_11;
    ngx_int_t VAR_12;
    ngx_uint_t VAR_13;
    ngx_connection_t *VAR_14, *VAR_15;
    ngx_http_upstream_t *VAR_16;
    ngx_http_core_loc_conf_t *VAR_17;

    VAR_16 = VAR_7->upstream;
    VAR_14 = VAR_7->connection;
    VAR_15 = VAR_16->peer.connection;

    VAR_11 = &VAR_16->buffer;

    VAR_8 = VAR_8 || VAR_16->length == 0;

    for ( ;; ) {

        if (VAR_8) {

            if (VAR_16->out_bufs || VAR_16->busy_bufs || VAR_14->buffered) {
                VAR_12 = FUNC_6(VAR_7, VAR_16->out_bufs);

                if (VAR_12 == VAR_2) {
                    FUNC_7(VAR_7, VAR_16, VAR_2);
                    return;
                }

                FUNC_1(VAR_7->pool, &VAR_16->free_bufs, &VAR_16->busy_bufs,
                                        &VAR_16->out_bufs, VAR_16->output.tag);
            }

            if (VAR_16->busy_bufs == ((void*)0)) {

                if (VAR_16->length == 0
                    || (VAR_15->read->eof && VAR_16->length == -1))
                {
                    FUNC_7(VAR_7, VAR_16, 0);
                    return;
                }

                if (VAR_15->read->eof) {
                    FUNC_8(VAR_4, VAR_15->log, 0,
                                  "upstream prematurely closed connection");

                    FUNC_7(VAR_7, VAR_16,
                                                       VAR_3);
                    return;
                }

                if (VAR_15->read->error) {
                    FUNC_7(VAR_7, VAR_16,
                                                       VAR_3);
                    return;
                }

                VAR_11->pos = VAR_11->start;
                VAR_11->last = VAR_11->start;
            }
        }

        VAR_9 = VAR_11->end - VAR_11->last;

        if (VAR_9 && VAR_15->read->ready) {

            VAR_10 = VAR_15->recv(VAR_15, VAR_11->last, VAR_9);

            if (VAR_10 == VAR_0) {
                break;
            }

            if (VAR_10 > 0) {
                VAR_16->state->bytes_received += VAR_10;
                VAR_16->state->response_length += VAR_10;

                if (VAR_16->input_filter(VAR_16->input_filter_ctx, VAR_10) == VAR_2) {
                    FUNC_7(VAR_7, VAR_16, VAR_2);
                    return;
                }
            }

            VAR_8 = 1;

            continue;
        }

        break;
    }

    VAR_17 = FUNC_5(VAR_7, VAR_6);

    if (VAR_14->data == VAR_7) {
        if (FUNC_4(VAR_14->write, VAR_17->send_lowat)
            != VAR_5)
        {
            FUNC_7(VAR_7, VAR_16, VAR_2);
            return;
        }
    }

    if (VAR_14->write->active && !VAR_14->write->ready) {
        FUNC_0(VAR_14->write, VAR_17->send_timeout);

    } else if (VAR_14->write->timer_set) {
        FUNC_2(VAR_14->write);
    }

    if (VAR_15->read->eof || VAR_15->read->error) {
        VAR_13 = VAR_1;

    } else {
        VAR_13 = 0;
    }

    if (FUNC_3(VAR_15->read, VAR_13) != VAR_5) {
        FUNC_7(VAR_7, VAR_16, VAR_2);
        return;
    }

    if (VAR_15->read->active && !VAR_15->read->ready) {
        FUNC_0(VAR_15->read, VAR_16->conf->read_timeout);

    } else if (VAR_15->read->timer_set) {
        FUNC_2(VAR_15->read);
    }
}
