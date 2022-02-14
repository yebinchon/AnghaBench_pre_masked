
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;
typedef struct TYPE_21__ TYPE_16__ ;


typedef scalar_t__ off_t ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {int limit_rate_set; int limit_rate; int limit_rate_after_set; scalar_t__ limit_rate_after; int start_sec; int * postponed; TYPE_4__* out; int pool; TYPE_3__* connection; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_24__ {scalar_t__ sendfile_max_chunk; int limit_rate_after; int limit_rate; scalar_t__ postpone_output; } ;
typedef TYPE_2__ ngx_http_core_loc_conf_t ;
struct TYPE_25__ {int error; int buffered; scalar_t__ sent; TYPE_19__* write; int log; TYPE_4__* (* send_chain ) (TYPE_3__*,TYPE_4__*,scalar_t__) ;scalar_t__ need_last_buf; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_26__ {struct TYPE_26__* next; TYPE_16__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_22__ {int delayed; scalar_t__ ready; } ;
struct TYPE_21__ {scalar_t__ last_buf; scalar_t__ sync; scalar_t__ recycled; scalar_t__ flush; scalar_t__ file_last; scalar_t__ file_pos; int file; scalar_t__ last; scalar_t__ pos; int start; int in_file; int temporary; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_19__*,int) ;
 TYPE_4__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_16__*) ;
 int FUNC_3 (TYPE_16__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_4__*) ;
 void* FUNC_6 (TYPE_1__*,int ,int ) ;
 int VAR_9 ;
 TYPE_2__* FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ,int ,char*,TYPE_4__*) ;
 int FUNC_10 (int ,int ,int ,char*,int,int,scalar_t__) ;
 int FUNC_11 (int ,int ,int ,char*,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,int ,int ,char*,...) ;
 int VAR_10 ;
 int FUNC_13 () ;
 TYPE_4__* FUNC_14 (TYPE_3__*,TYPE_4__*,scalar_t__) ;

ngx_int_t
FUNC_15(ngx_http_request_t *VAR_11, ngx_chain_t *VAR_12)
{
    off_t VAR_13, VAR_14, VAR_15, VAR_16;
    ngx_uint_t VAR_17, VAR_18, VAR_19;
    ngx_msec_t VAR_20;
    ngx_chain_t *VAR_21, *VAR_22, **VAR_23, *VAR_24;
    ngx_connection_t *VAR_25;
    ngx_http_core_loc_conf_t *VAR_26;

    VAR_25 = VAR_11->connection;

    if (VAR_25->error) {
        return VAR_2;
    }

    VAR_13 = 0;
    VAR_18 = 0;
    VAR_19 = 0;
    VAR_17 = 0;
    VAR_23 = &VAR_11->out;



    for (VAR_21 = VAR_11->out; VAR_21; VAR_21 = VAR_21->next) {
        VAR_23 = &VAR_21->next;

        FUNC_11(VAR_5, VAR_25->log, 0,
                       "write old buf t:%d f:%d %p, pos %p, size: %z "
                       "file: %O, size: %O",
                       VAR_21->buf->temporary, VAR_21->buf->in_file,
                       VAR_21->buf->start, VAR_21->buf->pos,
                       VAR_21->buf->last - VAR_21->buf->pos,
                       VAR_21->buf->file_pos,
                       VAR_21->buf->file_last - VAR_21->buf->file_pos);

        if (FUNC_2(VAR_21->buf) == 0 && !FUNC_3(VAR_21->buf)) {
            FUNC_12(VAR_4, VAR_25->log, 0,
                          "zero size buf in writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_21->buf->temporary,
                          VAR_21->buf->recycled,
                          VAR_21->buf->in_file,
                          VAR_21->buf->start,
                          VAR_21->buf->pos,
                          VAR_21->buf->last,
                          VAR_21->buf->file,
                          VAR_21->buf->file_pos,
                          VAR_21->buf->file_last);

            FUNC_4();
            return VAR_2;
        }

        if (FUNC_2(VAR_21->buf) < 0) {
            FUNC_12(VAR_4, VAR_25->log, 0,
                          "negative size buf in writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_21->buf->temporary,
                          VAR_21->buf->recycled,
                          VAR_21->buf->in_file,
                          VAR_21->buf->start,
                          VAR_21->buf->pos,
                          VAR_21->buf->last,
                          VAR_21->buf->file,
                          VAR_21->buf->file_pos,
                          VAR_21->buf->file_last);

            FUNC_4();
            return VAR_2;
        }

        VAR_13 += FUNC_2(VAR_21->buf);

        if (VAR_21->buf->flush || VAR_21->buf->recycled) {
            VAR_18 = 1;
        }

        if (VAR_21->buf->sync) {
            VAR_19 = 1;
        }

        if (VAR_21->buf->last_buf) {
            VAR_17 = 1;
        }
    }



    for (VAR_22 = VAR_12; VAR_22; VAR_22 = VAR_22->next) {
        VAR_21 = FUNC_1(VAR_11->pool);
        if (VAR_21 == ((void*)0)) {
            return VAR_2;
        }

        VAR_21->buf = VAR_22->buf;
        *VAR_23 = VAR_21;
        VAR_23 = &VAR_21->next;

        FUNC_11(VAR_5, VAR_25->log, 0,
                       "write new buf t:%d f:%d %p, pos %p, size: %z "
                       "file: %O, size: %O",
                       VAR_21->buf->temporary, VAR_21->buf->in_file,
                       VAR_21->buf->start, VAR_21->buf->pos,
                       VAR_21->buf->last - VAR_21->buf->pos,
                       VAR_21->buf->file_pos,
                       VAR_21->buf->file_last - VAR_21->buf->file_pos);

        if (FUNC_2(VAR_21->buf) == 0 && !FUNC_3(VAR_21->buf)) {
            FUNC_12(VAR_4, VAR_25->log, 0,
                          "zero size buf in writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_21->buf->temporary,
                          VAR_21->buf->recycled,
                          VAR_21->buf->in_file,
                          VAR_21->buf->start,
                          VAR_21->buf->pos,
                          VAR_21->buf->last,
                          VAR_21->buf->file,
                          VAR_21->buf->file_pos,
                          VAR_21->buf->file_last);

            FUNC_4();
            return VAR_2;
        }

        if (FUNC_2(VAR_21->buf) < 0) {
            FUNC_12(VAR_4, VAR_25->log, 0,
                          "negative size buf in writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_21->buf->temporary,
                          VAR_21->buf->recycled,
                          VAR_21->buf->in_file,
                          VAR_21->buf->start,
                          VAR_21->buf->pos,
                          VAR_21->buf->last,
                          VAR_21->buf->file,
                          VAR_21->buf->file_pos,
                          VAR_21->buf->file_last);

            FUNC_4();
            return VAR_2;
        }

        VAR_13 += FUNC_2(VAR_21->buf);

        if (VAR_21->buf->flush || VAR_21->buf->recycled) {
            VAR_18 = 1;
        }

        if (VAR_21->buf->sync) {
            VAR_19 = 1;
        }

        if (VAR_21->buf->last_buf) {
            VAR_17 = 1;
        }
    }

    *VAR_23 = ((void*)0);

    FUNC_10(VAR_6, VAR_25->log, 0,
                   "http write filter: l:%ui f:%ui s:%O", VAR_17, VAR_18, VAR_13);

    VAR_26 = FUNC_7(VAR_11, VAR_9);







    if (!VAR_17 && !VAR_18 && VAR_12 && VAR_13 < (off_t) VAR_26->postpone_output) {
        return VAR_8;
    }

    if (VAR_25->write->delayed) {
        VAR_25->buffered |= VAR_3;
        return VAR_0;
    }

    if (VAR_13 == 0
        && !(VAR_25->buffered & VAR_7)
        && !(VAR_17 && VAR_25->need_last_buf))
    {
        if (VAR_17 || VAR_18 || VAR_19) {
            for (VAR_21 = VAR_11->out; VAR_21; ) {
                VAR_22 = VAR_21;
                VAR_21 = VAR_21->next;
                FUNC_5(VAR_11->pool, VAR_22);
            }

            VAR_11->out = ((void*)0);
            VAR_25->buffered &= ~VAR_3;

            return VAR_8;
        }

        FUNC_12(VAR_4, VAR_25->log, 0,
                      "the http output chain is empty");

        FUNC_4();

        return VAR_2;
    }

    if (!VAR_11->limit_rate_set) {
        VAR_11->limit_rate = FUNC_6(VAR_11, VAR_26->limit_rate, 0);
        VAR_11->limit_rate_set = 1;
    }

    if (VAR_11->limit_rate) {

        if (!VAR_11->limit_rate_after_set) {
            VAR_11->limit_rate_after = FUNC_6(VAR_11,
                                                    VAR_26->limit_rate_after, 0);
            VAR_11->limit_rate_after_set = 1;
        }

        VAR_16 = (off_t) VAR_11->limit_rate * (FUNC_13() - VAR_11->start_sec + 1)
                - (VAR_25->sent - VAR_11->limit_rate_after);

        if (VAR_16 <= 0) {
            VAR_25->write->delayed = 1;
            VAR_20 = (ngx_msec_t) (- VAR_16 * 1000 / VAR_11->limit_rate + 1);
            FUNC_0(VAR_25->write, VAR_20);

            VAR_25->buffered |= VAR_3;

            return VAR_0;
        }

        if (VAR_26->sendfile_max_chunk
            && (off_t) VAR_26->sendfile_max_chunk < VAR_16)
        {
            VAR_16 = VAR_26->sendfile_max_chunk;
        }

    } else {
        VAR_16 = VAR_26->sendfile_max_chunk;
    }

    VAR_14 = VAR_25->sent;

    FUNC_9(VAR_6, VAR_25->log, 0,
                   "http write filter limit %O", VAR_16);

    VAR_24 = VAR_25->send_chain(VAR_25, VAR_11->out, VAR_16);
    FUNC_9(VAR_6, VAR_25->log, 0,
                   "http write filter %p", VAR_24);

    if (VAR_24 == VAR_1) {
        VAR_25->error = 1;
        return VAR_2;
    }

    if (VAR_11->limit_rate) {

        VAR_15 = VAR_25->sent;

        if (VAR_11->limit_rate_after) {

            VAR_14 -= VAR_11->limit_rate_after;
            if (VAR_14 < 0) {
                VAR_14 = 0;
            }

            VAR_15 -= VAR_11->limit_rate_after;
            if (VAR_15 < 0) {
                VAR_15 = 0;
            }
        }

        VAR_20 = (ngx_msec_t) ((VAR_15 - VAR_14) * 1000 / VAR_11->limit_rate);

        if (VAR_20 > 0) {
            VAR_16 = 0;
            VAR_25->write->delayed = 1;
            FUNC_0(VAR_25->write, VAR_20);
        }
    }

    if (VAR_16
        && VAR_25->write->ready
        && VAR_25->sent - VAR_14 >= VAR_16 - (off_t) (2 * VAR_10))
    {
        VAR_25->write->delayed = 1;
        FUNC_0(VAR_25->write, 1);
    }

    for (VAR_21 = VAR_11->out; VAR_21 && VAR_21 != VAR_24; ) {
        VAR_22 = VAR_21;
        VAR_21 = VAR_21->next;
        FUNC_5(VAR_11->pool, VAR_22);
    }

    VAR_11->out = VAR_24;

    if (VAR_24) {
        VAR_25->buffered |= VAR_3;
        return VAR_0;
    }

    VAR_25->buffered &= ~VAR_3;

    if ((VAR_25->buffered & VAR_7) && VAR_11->postponed == ((void*)0)) {
        return VAR_0;
    }

    return VAR_8;
}
