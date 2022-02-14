
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_uint_t ;
struct TYPE_31__ {scalar_t__ last; scalar_t__ pos; int temporary; int * end; int * start; int tag; } ;
struct TYPE_26__ {int tag; } ;
struct TYPE_24__ {TYPE_8__* connection; } ;
struct TYPE_27__ {TYPE_3__* conf; TYPE_9__ from_client; TYPE_9__ buffer; TYPE_1__* state; TYPE_4__ output; TYPE_2__ peer; } ;
typedef TYPE_5__ ngx_http_upstream_t ;
struct TYPE_28__ {int pool; TYPE_9__* header_in; TYPE_5__* upstream; TYPE_8__* connection; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_29__ {int send_timeout; int send_lowat; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
struct TYPE_30__ {int timedout; scalar_t__ (* send ) (TYPE_8__*,int *,size_t) ;scalar_t__ (* recv ) (TYPE_8__*,int *,size_t) ;TYPE_17__* write; TYPE_17__* read; int log; } ;
typedef TYPE_8__ ngx_connection_t ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_25__ {int buffer_size; int read_timeout; int send_timeout; int send_lowat; } ;
struct TYPE_23__ {int bytes_received; } ;
struct TYPE_22__ {int eof; scalar_t__ timer_set; scalar_t__ ready; scalar_t__ active; scalar_t__ error; scalar_t__ timedout; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_17__*,int ) ;
 int FUNC_1 (TYPE_8__*,int ,char*) ;
 int FUNC_2 (TYPE_17__*) ;
 scalar_t__ FUNC_3 (TYPE_17__*,int) ;
 scalar_t__ FUNC_4 (TYPE_17__*,int ) ;
 int VAR_8 ;
 TYPE_7__* FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,TYPE_5__*,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,int) ;
 int * FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (TYPE_8__*,int *,size_t) ;
 scalar_t__ FUNC_11 (TYPE_8__*,int *,size_t) ;

__attribute__((used)) static void
FUNC_12(ngx_http_request_t *VAR_9,
    ngx_uint_t VAR_10, ngx_uint_t VAR_11)
{
    size_t VAR_12;
    ssize_t VAR_13;
    ngx_buf_t *VAR_14;
    ngx_uint_t VAR_15;
    ngx_connection_t *VAR_16, *VAR_17, *VAR_18, *VAR_19, *VAR_20;
    ngx_http_upstream_t *VAR_21;
    ngx_http_core_loc_conf_t *VAR_22;

    VAR_16 = VAR_9->connection;
    VAR_21 = VAR_9->upstream;

    FUNC_8(VAR_6, VAR_16->log, 0,
                   "http upstream process upgraded, fu:%ui", VAR_10);

    VAR_17 = VAR_16;
    VAR_18 = VAR_21->peer.connection;

    if (VAR_17->write->timedout) {
        VAR_16->timedout = 1;
        FUNC_1(VAR_16, VAR_3, "client timed out");
        FUNC_6(VAR_9, VAR_21, VAR_5);
        return;
    }

    if (VAR_18->read->timedout || VAR_18->write->timedout) {
        FUNC_1(VAR_16, VAR_3, "upstream timed out");
        FUNC_6(VAR_9, VAR_21, VAR_4);
        return;
    }

    if (VAR_10) {
        VAR_20 = VAR_18;
        VAR_19 = VAR_17;
        VAR_14 = &VAR_21->buffer;

    } else {
        VAR_20 = VAR_17;
        VAR_19 = VAR_18;
        VAR_14 = &VAR_21->from_client;

        if (VAR_9->header_in->last > VAR_9->header_in->pos) {
            VAR_14 = VAR_9->header_in;
            VAR_14->end = VAR_14->last;
            VAR_11 = 1;
        }

        if (VAR_14->start == ((void*)0)) {
            VAR_14->start = FUNC_9(VAR_9->pool, VAR_21->conf->buffer_size);
            if (VAR_14->start == ((void*)0)) {
                FUNC_6(VAR_9, VAR_21, VAR_2);
                return;
            }

            VAR_14->pos = VAR_14->start;
            VAR_14->last = VAR_14->start;
            VAR_14->end = VAR_14->start + VAR_21->conf->buffer_size;
            VAR_14->temporary = 1;
            VAR_14->tag = VAR_21->output.tag;
        }
    }

    for ( ;; ) {

        if (VAR_11) {

            VAR_12 = VAR_14->last - VAR_14->pos;

            if (VAR_12 && VAR_19->write->ready) {

                VAR_13 = VAR_19->send(VAR_19, VAR_14->pos, VAR_12);

                if (VAR_13 == VAR_2) {
                    FUNC_6(VAR_9, VAR_21, VAR_2);
                    return;
                }

                if (VAR_13 > 0) {
                    VAR_14->pos += VAR_13;

                    if (VAR_14->pos == VAR_14->last) {
                        VAR_14->pos = VAR_14->start;
                        VAR_14->last = VAR_14->start;
                    }
                }
            }
        }

        VAR_12 = VAR_14->end - VAR_14->last;

        if (VAR_12 && VAR_20->read->ready) {

            VAR_13 = VAR_20->recv(VAR_20, VAR_14->last, VAR_12);

            if (VAR_13 == VAR_0 || VAR_13 == 0) {
                break;
            }

            if (VAR_13 > 0) {
                VAR_11 = 1;
                VAR_14->last += VAR_13;

                if (VAR_10) {
                    VAR_21->state->bytes_received += VAR_13;
                }

                continue;
            }

            if (VAR_13 == VAR_2) {
                VAR_20->read->eof = 1;
            }
        }

        break;
    }

    if ((VAR_18->read->eof && VAR_21->buffer.pos == VAR_21->buffer.last)
        || (VAR_17->read->eof && VAR_21->from_client.pos == VAR_21->from_client.last)
        || (VAR_17->read->eof && VAR_18->read->eof))
    {
        FUNC_7(VAR_6, VAR_16->log, 0,
                       "http upstream upgraded done");
        FUNC_6(VAR_9, VAR_21, 0);
        return;
    }

    VAR_22 = FUNC_5(VAR_9, VAR_8);

    if (FUNC_4(VAR_18->write, VAR_21->conf->send_lowat)
        != VAR_7)
    {
        FUNC_6(VAR_9, VAR_21, VAR_2);
        return;
    }

    if (VAR_18->write->active && !VAR_18->write->ready) {
        FUNC_0(VAR_18->write, VAR_21->conf->send_timeout);

    } else if (VAR_18->write->timer_set) {
        FUNC_2(VAR_18->write);
    }

    if (VAR_18->read->eof || VAR_18->read->error) {
        VAR_15 = VAR_1;

    } else {
        VAR_15 = 0;
    }

    if (FUNC_3(VAR_18->read, VAR_15) != VAR_7) {
        FUNC_6(VAR_9, VAR_21, VAR_2);
        return;
    }

    if (VAR_18->read->active && !VAR_18->read->ready) {
        FUNC_0(VAR_18->read, VAR_21->conf->read_timeout);

    } else if (VAR_18->read->timer_set) {
        FUNC_2(VAR_18->read);
    }

    if (FUNC_4(VAR_17->write, VAR_22->send_lowat)
        != VAR_7)
    {
        FUNC_6(VAR_9, VAR_21, VAR_2);
        return;
    }

    if (VAR_17->read->eof || VAR_17->read->error) {
        VAR_15 = VAR_1;

    } else {
        VAR_15 = 0;
    }

    if (FUNC_3(VAR_17->read, VAR_15) != VAR_7) {
        FUNC_6(VAR_9, VAR_21, VAR_2);
        return;
    }

    if (VAR_17->write->active && !VAR_17->write->ready) {
        FUNC_0(VAR_17->write, VAR_22->send_timeout);

    } else if (VAR_17->write->timer_set) {
        FUNC_2(VAR_17->write);
    }
}
