
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_19__ ;
typedef struct TYPE_26__ TYPE_18__ ;


typedef scalar_t__ ssize_t ;
typedef int off_t ;
typedef int ngx_uint_t ;
struct TYPE_36__ {size_t pos; size_t start; size_t last; size_t end; } ;
struct TYPE_30__ {TYPE_7__* connection; } ;
struct TYPE_31__ {size_t download_rate; int received; int responses; size_t upload_rate; int requests; int start_sec; scalar_t__ start_time; int free; TYPE_1__* state; TYPE_8__* upstream_busy; TYPE_8__* upstream_out; TYPE_9__ downstream_buf; TYPE_8__* downstream_busy; TYPE_8__* downstream_out; TYPE_9__ upstream_buf; TYPE_3__ peer; scalar_t__ connected; } ;
typedef TYPE_4__ ngx_stream_upstream_t ;
struct TYPE_32__ {int received; TYPE_7__* connection; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_stream_session_t ;
struct TYPE_33__ {scalar_t__ timeout; } ;
typedef TYPE_6__ ngx_stream_proxy_srv_conf_t ;
typedef scalar_t__ ngx_msec_t ;
typedef int * ngx_log_handler_pt ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_34__ {scalar_t__ type; scalar_t__ (* recv ) (TYPE_7__*,size_t,size_t) ;TYPE_19__* write; TYPE_19__* read; TYPE_18__* log; int pool; scalar_t__ buffered; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_35__ {TYPE_2__* buf; struct TYPE_35__* next; } ;
typedef TYPE_8__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_29__ {size_t pos; size_t last; int temporary; int last_buf; int flush; scalar_t__ tag; } ;
struct TYPE_28__ {scalar_t__ first_byte_time; } ;
struct TYPE_27__ {int delayed; int eof; scalar_t__ timer_set; int error; scalar_t__ ready; } ;
struct TYPE_26__ {char* action; int * handler; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_19__*,scalar_t__) ;
 TYPE_8__* FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,TYPE_8__**,TYPE_8__**,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (TYPE_19__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (TYPE_19__*,int) ;
 scalar_t__ FUNC_5 (TYPE_19__*,int ) ;
 int FUNC_6 (int ,TYPE_18__*,int ,char*) ;
 TYPE_6__* FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (TYPE_5__*,int) ;
 scalar_t__ FUNC_10 (TYPE_5__*,TYPE_8__*,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (TYPE_7__*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_13(ngx_stream_session_t *VAR_13, ngx_uint_t VAR_14,
    ngx_uint_t VAR_15)
{
    char *VAR_16, *VAR_17;
    off_t *VAR_18, VAR_19;
    size_t VAR_20, VAR_21;
    ssize_t VAR_22;
    ngx_buf_t *VAR_23;
    ngx_int_t VAR_24;
    ngx_uint_t VAR_25, *VAR_26;
    ngx_msec_t VAR_27;
    ngx_chain_t *VAR_28, **VAR_29, **VAR_30, **VAR_31;
    ngx_connection_t *VAR_32, *VAR_33, *VAR_34, *VAR_35;
    ngx_log_handler_pt VAR_36;
    ngx_stream_upstream_t *VAR_37;
    ngx_stream_proxy_srv_conf_t *VAR_38;

    VAR_37 = VAR_13->upstream;

    VAR_32 = VAR_13->connection;
    VAR_33 = VAR_37->connected ? VAR_37->peer.connection : ((void*)0);

    if (VAR_32->type == VAR_7 && (VAR_12 || VAR_10)) {



        VAR_36 = VAR_32->log->handler;
        VAR_32->log->handler = ((void*)0);

        FUNC_6(VAR_3, VAR_32->log, 0, "disconnected on shutdown");

        VAR_32->log->handler = VAR_36;

        FUNC_8(VAR_13, VAR_6);
        return;
    }

    VAR_38 = FUNC_7(VAR_13, VAR_11);

    if (VAR_14) {
        VAR_34 = VAR_33;
        VAR_35 = VAR_32;
        VAR_23 = &VAR_37->upstream_buf;
        VAR_21 = VAR_37->download_rate;
        VAR_18 = &VAR_37->received;
        VAR_26 = &VAR_37->responses;
        VAR_30 = &VAR_37->downstream_out;
        VAR_31 = &VAR_37->downstream_busy;
        VAR_16 = "proxying and reading from upstream";
        VAR_17 = "proxying and sending to client";

    } else {
        VAR_34 = VAR_32;
        VAR_35 = VAR_33;
        VAR_23 = &VAR_37->downstream_buf;
        VAR_21 = VAR_37->upload_rate;
        VAR_18 = &VAR_13->received;
        VAR_26 = &VAR_37->requests;
        VAR_30 = &VAR_37->upstream_out;
        VAR_31 = &VAR_37->upstream_busy;
        VAR_16 = "proxying and reading from client";
        VAR_17 = "proxying and sending to upstream";
    }

    for ( ;; ) {

        if (VAR_15 && VAR_35) {

            if (*VAR_30 || *VAR_31 || VAR_35->buffered) {
                VAR_32->log->action = VAR_17;

                VAR_24 = FUNC_10(VAR_13, *VAR_30, VAR_14);

                if (VAR_24 == VAR_2) {
                    FUNC_8(VAR_13, VAR_6);
                    return;
                }

                FUNC_2(VAR_32->pool, &VAR_37->free, VAR_31, VAR_30,
                                      (ngx_buf_tag_t) &VAR_11);

                if (*VAR_31 == ((void*)0)) {
                    VAR_23->pos = VAR_23->start;
                    VAR_23->last = VAR_23->start;
                }
            }
        }

        VAR_20 = VAR_23->end - VAR_23->last;

        if (VAR_20 && VAR_34->read->ready && !VAR_34->read->delayed
            && !VAR_34->read->error)
        {
            if (VAR_21) {
                VAR_19 = (off_t) VAR_21 * (FUNC_11() - VAR_37->start_sec + 1)
                        - *VAR_18;

                if (VAR_19 <= 0) {
                    VAR_34->read->delayed = 1;
                    VAR_27 = (ngx_msec_t) (- VAR_19 * 1000 / VAR_21 + 1);
                    FUNC_0(VAR_34->read, VAR_27);
                    break;
                }

                if (VAR_32->type == VAR_8 && (off_t) VAR_20 > VAR_19) {
                    VAR_20 = (size_t) VAR_19;
                }
            }

            VAR_32->log->action = VAR_16;

            VAR_22 = VAR_34->recv(VAR_34, VAR_23->last, VAR_20);

            if (VAR_22 == VAR_0) {
                break;
            }

            if (VAR_22 == VAR_2) {
                VAR_34->read->eof = 1;
                VAR_22 = 0;
            }

            if (VAR_22 >= 0) {
                if (VAR_21) {
                    VAR_27 = (ngx_msec_t) (VAR_22 * 1000 / VAR_21);

                    if (VAR_27 > 0) {
                        VAR_34->read->delayed = 1;
                        FUNC_0(VAR_34->read, VAR_27);
                    }
                }

                if (VAR_14) {
                    if (VAR_37->state->first_byte_time == (ngx_msec_t) -1) {
                        VAR_37->state->first_byte_time = VAR_9
                                                    - VAR_37->start_time;
                    }
                }

                for (VAR_29 = VAR_30; *VAR_29; VAR_29 = &(*VAR_29)->next) { }

                VAR_28 = FUNC_1(VAR_32->pool, &VAR_37->free);
                if (VAR_28 == ((void*)0)) {
                    FUNC_8(VAR_13,
                                              VAR_5);
                    return;
                }

                *VAR_29 = VAR_28;

                VAR_28->buf->pos = VAR_23->last;
                VAR_28->buf->last = VAR_23->last + VAR_22;
                VAR_28->buf->tag = (ngx_buf_tag_t) &VAR_11;

                VAR_28->buf->temporary = (VAR_22 ? 1 : 0);
                VAR_28->buf->last_buf = VAR_34->read->eof;
                VAR_28->buf->flush = 1;

                (*VAR_26)++;
                *VAR_18 += VAR_22;
                VAR_23->last += VAR_22;
                VAR_15 = 1;

                continue;
            }
        }

        break;
    }

    VAR_32->log->action = "proxying connection";

    if (FUNC_9(VAR_13, VAR_14) == VAR_4) {
        return;
    }

    VAR_25 = VAR_34->read->eof ? VAR_1 : 0;

    if (FUNC_4(VAR_34->read, VAR_25) != VAR_4) {
        FUNC_8(VAR_13, VAR_5);
        return;
    }

    if (VAR_35) {
        if (FUNC_5(VAR_35->write, 0) != VAR_4) {
            FUNC_8(VAR_13, VAR_5);
            return;
        }

        if (!VAR_32->read->delayed && !VAR_33->read->delayed) {
            FUNC_0(VAR_32->write, VAR_38->timeout);

        } else if (VAR_32->write->timer_set) {
            FUNC_3(VAR_32->write);
        }
    }
}
