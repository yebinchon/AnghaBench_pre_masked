
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_18__ ;


typedef size_t off_t ;
struct TYPE_32__ {size_t send_window; scalar_t__ queued; TYPE_7__* free_bufs; TYPE_4__* connection; scalar_t__ out_closed; } ;
typedef TYPE_2__ ngx_http_v2_stream_t ;
typedef int ngx_http_v2_out_frame_t ;
struct TYPE_33__ {size_t chunk_size; } ;
typedef TYPE_3__ ngx_http_v2_loc_conf_t ;
struct TYPE_34__ {size_t send_window; size_t frame_size; } ;
typedef TYPE_4__ ngx_http_v2_connection_t ;
struct TYPE_35__ {int pool; TYPE_2__* stream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_36__ {TYPE_1__* write; int buffered; int log; TYPE_5__* data; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_37__ {TYPE_18__* buf; struct TYPE_37__* next; } ;
typedef TYPE_7__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_31__ {int active; scalar_t__ ready; } ;
struct TYPE_30__ {scalar_t__ tag; size_t pos; size_t file_pos; scalar_t__ last_buf; scalar_t__ flush; struct TYPE_30__* shadow; } ;


 TYPE_7__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 TYPE_7__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_18__*) ;
 size_t FUNC_2 (TYPE_18__*) ;
 int FUNC_3 (int ,TYPE_7__*) ;
 TYPE_3__* FUNC_4 (TYPE_5__*,int ) ;
 int * FUNC_5 (TYPE_5__*) ;
 int * FUNC_6 (TYPE_2__*,size_t,TYPE_7__*,TYPE_7__*) ;
 TYPE_7__* FUNC_7 (TYPE_2__*,TYPE_18__*,size_t,size_t) ;
 scalar_t__ FUNC_8 (TYPE_6__*,TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_chain_t *
FUNC_12(ngx_connection_t *VAR_7, ngx_chain_t *VAR_8, off_t VAR_9)
{
    off_t VAR_10, VAR_11;
    size_t VAR_12, VAR_13;
    ngx_chain_t *VAR_14, *VAR_15, **VAR_16;
    ngx_http_request_t *VAR_17;
    ngx_http_v2_stream_t *VAR_18;
    ngx_http_v2_loc_conf_t *VAR_19;
    ngx_http_v2_out_frame_t *VAR_20, *VAR_21;
    ngx_http_v2_connection_t *VAR_22;

    VAR_17 = VAR_7->data;
    VAR_18 = VAR_17->stream;





    while (VAR_8) {
        VAR_10 = FUNC_2(VAR_8->buf);

        if (VAR_10 || VAR_8->buf->last_buf) {
            break;
        }

        VAR_8 = VAR_8->next;
    }

    if (VAR_8 == ((void*)0) || VAR_18->out_closed) {

        if (VAR_10) {
            FUNC_11(VAR_5, VAR_7->log, 0,
                          "output on closed stream");
            return VAR_0;
        }

        if (VAR_18->queued) {
            VAR_7->write->active = 1;
            VAR_7->write->ready = 0;

        } else {
            VAR_7->buffered &= ~VAR_3;
        }

        return ((void*)0);
    }

    VAR_22 = VAR_18->connection;

    if (VAR_10 && FUNC_9(VAR_22, VAR_18) == VAR_1) {
        VAR_7->write->active = 1;
        VAR_7->write->ready = 0;
        return VAR_8;
    }

    if (VAR_8->buf->tag == (ngx_buf_tag_t) &FUNC_7) {
        VAR_14 = FUNC_0(VAR_17->pool);
        if (VAR_14 == ((void*)0)) {
            return VAR_0;
        }

        VAR_14->buf = VAR_8->buf;
        VAR_8->buf = VAR_14->buf->shadow;

        VAR_11 = FUNC_1(VAR_8->buf)
                 ? (VAR_14->buf->pos - VAR_8->buf->pos)
                 : (VAR_14->buf->file_pos - VAR_8->buf->file_pos);

        VAR_14->next = VAR_18->free_bufs;
        VAR_18->free_bufs = VAR_14;

    } else {
        VAR_11 = 0;
    }

    if (VAR_9 == 0 || VAR_9 > (off_t) VAR_22->send_window) {
        VAR_9 = VAR_22->send_window;
    }

    if (VAR_9 > VAR_18->send_window) {
        VAR_9 = (VAR_18->send_window > 0) ? VAR_18->send_window : 0;
    }

    VAR_19 = FUNC_4(VAR_17, VAR_6);

    VAR_13 = (VAR_19->chunk_size < VAR_22->frame_size)
                 ? VAR_19->chunk_size : VAR_22->frame_size;

    VAR_21 = VAR_4;





    for ( ;; ) {
        if ((off_t) VAR_13 > VAR_9) {
            VAR_13 = (size_t) VAR_9;
        }

        VAR_16 = &VAR_15;
        VAR_12 = VAR_13;

        while ((off_t) VAR_12 >= VAR_10) {

            if (VAR_11) {
                VAR_14 = FUNC_7(VAR_18, VAR_8->buf,
                                                   VAR_11, VAR_10);
                if (VAR_14 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_11 = 0;

            } else {
                VAR_14 = FUNC_0(VAR_17->pool);
                if (VAR_14 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_14->buf = VAR_8->buf;
            }

            *VAR_16 = VAR_14;
            VAR_16 = &VAR_14->next;

            VAR_12 -= (size_t) VAR_10;
            VAR_8 = VAR_8->next;

            if (VAR_8 == ((void*)0)) {
                VAR_13 -= VAR_12;
                VAR_12 = 0;
                break;
            }

            VAR_10 = FUNC_2(VAR_8->buf);
        }

        if (VAR_12) {
            VAR_14 = FUNC_7(VAR_18, VAR_8->buf, VAR_11, VAR_12);
            if (VAR_14 == ((void*)0)) {
                return VAR_0;
            }

            VAR_14->buf->flush = 0;
            VAR_14->buf->last_buf = 0;

            *VAR_16 = VAR_14;

            VAR_11 += VAR_12;
            VAR_10 -= VAR_12;
        }

        if (VAR_14->buf->last_buf) {
            VAR_21 = FUNC_5(VAR_17);
            if (VAR_21 == ((void*)0)) {
                return VAR_0;
            }

            if (VAR_21 != VAR_4) {
                VAR_14->buf->last_buf = 0;
            }
        }

        if (VAR_13 || VAR_14->buf->last_buf) {
            VAR_20 = FUNC_6(VAR_18, VAR_13,
                                                      VAR_15, VAR_14);
            if (VAR_20 == ((void*)0)) {
                return VAR_0;
            }

            FUNC_10(VAR_22, VAR_20);

            VAR_22->send_window -= VAR_13;

            VAR_18->send_window -= VAR_13;
            VAR_18->queued++;
        }

        if (VAR_8 == ((void*)0)) {

            if (VAR_21 != VAR_4) {
                FUNC_10(VAR_22, VAR_21);
                VAR_18->queued++;
            }

            break;
        }

        VAR_9 -= VAR_13;

        if (VAR_9 == 0) {
            break;
        }
    }

    if (VAR_11) {
        VAR_14 = FUNC_7(VAR_18, VAR_8->buf, VAR_11, VAR_10);
        if (VAR_14 == ((void*)0)) {
            return VAR_0;
        }

        VAR_8->buf = VAR_14->buf;
        FUNC_3(VAR_17->pool, VAR_14);
    }

    if (FUNC_8(VAR_7, VAR_18) == VAR_2) {
        return VAR_0;
    }

    if (VAR_8 && FUNC_9(VAR_22, VAR_18) == VAR_1) {
        VAR_7->write->active = 1;
        VAR_7->write->ready = 0;
    }

    return VAR_8;
}
