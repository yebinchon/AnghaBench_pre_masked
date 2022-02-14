
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_18__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_uint_t ;
struct TYPE_25__ {int pool; TYPE_8__* header_in; TYPE_7__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_30__ {scalar_t__ last; scalar_t__ pos; int temporary; int * end; int * start; } ;
struct TYPE_23__ {TYPE_7__* connection; } ;
struct TYPE_26__ {TYPE_2__* conf; TYPE_8__ from_client; TYPE_8__ buffer; TYPE_1__ peer; } ;
typedef TYPE_4__ ngx_http_proxy_connect_upstream_t ;
struct TYPE_27__ {int read_timeout; int send_timeout; TYPE_4__* u; } ;
typedef TYPE_5__ ngx_http_proxy_connect_ctx_t ;
struct TYPE_28__ {int client_body_timeout; int send_timeout; int send_lowat; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
struct TYPE_29__ {scalar_t__ (* send ) (TYPE_7__*,int *,size_t) ;scalar_t__ (* recv ) (TYPE_7__*,int *,size_t) ;TYPE_18__* read; TYPE_18__* write; int log; } ;
typedef TYPE_7__ ngx_connection_t ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_24__ {int buffer_size; int send_lowat; } ;
struct TYPE_22__ {int eof; scalar_t__ timer_set; scalar_t__ ready; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_18__*,int ) ;
 int FUNC_1 (TYPE_18__*) ;
 scalar_t__ FUNC_2 (TYPE_18__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_18__*,int ) ;
 int VAR_4 ;
 TYPE_5__* FUNC_4 (TYPE_3__*,int ) ;
 TYPE_6__* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,int,int) ;
 int * FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (TYPE_7__*,int *,size_t) ;
 scalar_t__ FUNC_11 (TYPE_7__*,int *,size_t) ;

__attribute__((used)) static void
FUNC_12(ngx_http_request_t *VAR_6,
    ngx_uint_t VAR_7, ngx_uint_t VAR_8)
{
    size_t VAR_9;
    ssize_t VAR_10;
    ngx_buf_t *VAR_11;
    ngx_connection_t *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
    ngx_http_core_loc_conf_t *VAR_17;
    ngx_http_proxy_connect_ctx_t *VAR_18;
    ngx_http_proxy_connect_upstream_t *VAR_19;

    VAR_18 = FUNC_4(VAR_6, VAR_5);

    VAR_12 = VAR_6->connection;
    VAR_19 = VAR_18->u;

    FUNC_8(VAR_2, VAR_12->log, 0,
                   "proxy_connect: tunnel fu:%ui write:%ui",
                   VAR_7, VAR_8);

    VAR_13 = VAR_12;
    VAR_14 = VAR_19->peer.connection;

    if (VAR_7) {
        VAR_16 = VAR_14;
        VAR_15 = VAR_13;
        VAR_11 = &VAR_19->buffer;

    } else {
        VAR_16 = VAR_13;
        VAR_15 = VAR_14;
        VAR_11 = &VAR_19->from_client;

        if (VAR_6->header_in->last > VAR_6->header_in->pos) {
            VAR_11 = VAR_6->header_in;
            VAR_11->end = VAR_11->last;
            VAR_8 = 1;
        }

        if (VAR_11->start == ((void*)0)) {
            VAR_11->start = FUNC_9(VAR_6->pool, VAR_19->conf->buffer_size);
            if (VAR_11->start == ((void*)0)) {
                FUNC_6(VAR_6, VAR_19, VAR_1);
                return;
            }

            VAR_11->pos = VAR_11->start;
            VAR_11->last = VAR_11->start;
            VAR_11->end = VAR_11->start + VAR_19->conf->buffer_size;
            VAR_11->temporary = 1;
        }
    }

    for ( ;; ) {

        if (VAR_8) {

            VAR_9 = VAR_11->last - VAR_11->pos;

            if (VAR_9 && VAR_15->write->ready) {

                VAR_10 = VAR_15->send(VAR_15, VAR_11->pos, VAR_9);

                if (VAR_10 == VAR_0) {
                    break;
                }

                if (VAR_10 == VAR_1) {
                    FUNC_6(VAR_6, VAR_19, VAR_1);
                    return;
                }

                if (VAR_10 > 0) {
                    VAR_11->pos += VAR_10;

                    if (VAR_11->pos == VAR_11->last) {
                        VAR_11->pos = VAR_11->start;
                        VAR_11->last = VAR_11->start;
                    }
                }
            }
        }

        VAR_9 = VAR_11->end - VAR_11->last;

        if (VAR_9 && VAR_16->read->ready) {

            VAR_10 = VAR_16->recv(VAR_16, VAR_11->last, VAR_9);

            if (VAR_10 == VAR_0 || VAR_10 == 0) {
                break;
            }

            if (VAR_10 > 0) {
                VAR_8 = 1;
                VAR_11->last += VAR_10;

                continue;
            }

            if (VAR_10 == VAR_1) {
                VAR_16->read->eof = 1;
            }
        }

        break;
    }

    if ((VAR_14->read->eof && VAR_19->buffer.pos == VAR_19->buffer.last)
        || (VAR_13->read->eof && VAR_19->from_client.pos == VAR_19->from_client.last)
        || (VAR_13->read->eof && VAR_14->read->eof))
    {
        FUNC_7(VAR_2, VAR_12->log, 0,
                       "proxy_connect: tunnel done");
        FUNC_6(VAR_6, VAR_19, 0);
        return;
    }

    VAR_17 = FUNC_5(VAR_6, VAR_4);

    if (FUNC_3(VAR_14->write, VAR_19->conf->send_lowat)
        != VAR_3)
    {
        FUNC_6(VAR_6, VAR_19, VAR_1);
        return;
    }

    if (VAR_14->write->active && !VAR_14->write->ready) {
        FUNC_0(VAR_14->write, VAR_18->send_timeout);

    } else if (VAR_14->write->timer_set) {
        FUNC_1(VAR_14->write);
    }

    if (FUNC_2(VAR_14->read, 0) != VAR_3) {
        FUNC_6(VAR_6, VAR_19, VAR_1);
        return;
    }

    if (VAR_14->read->active && !VAR_14->read->ready) {
        if (VAR_7) {
            FUNC_0(VAR_14->read, VAR_18->read_timeout);
        }

    } else if (VAR_14->read->timer_set) {
        FUNC_1(VAR_14->read);
    }

    if (FUNC_3(VAR_13->write, VAR_17->send_lowat)
        != VAR_3)
    {
        FUNC_6(VAR_6, VAR_19, VAR_1);
        return;
    }

    if (FUNC_2(VAR_13->read, 0) != VAR_3) {
        FUNC_6(VAR_6, VAR_19, VAR_1);
        return;
    }

    if (VAR_13->write->active && !VAR_13->write->ready) {
        FUNC_0(VAR_13->write, VAR_17->send_timeout);

    } else if (VAR_13->write->timer_set) {
        FUNC_1(VAR_13->write);
    }

    if (VAR_13->read->active && !VAR_13->read->ready) {
        if (!VAR_7) {
            FUNC_0(VAR_13->read, VAR_17->client_body_timeout);
        }

    } else if (VAR_13->read->timer_set) {
        FUNC_1(VAR_13->read);
    }
}
