
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_19__ ;


typedef scalar_t__ off_t ;
typedef int ngx_uint_t ;
struct TYPE_26__ {TYPE_6__* from_downstream; TYPE_6__* from_upstream; } ;
typedef TYPE_3__ ngx_stream_write_filter_ctx_t ;
struct TYPE_27__ {TYPE_2__* upstream; TYPE_5__* connection; } ;
typedef TYPE_4__ ngx_stream_session_t ;
typedef int ngx_int_t ;
struct TYPE_28__ {int error; int buffered; int log; scalar_t__ shared; int pool; TYPE_6__* (* send_chain ) (TYPE_5__*,TYPE_6__*,int ) ;scalar_t__ need_last_buf; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_29__ {struct TYPE_29__* next; TYPE_19__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_24__ {TYPE_5__* connection; } ;
struct TYPE_25__ {TYPE_1__ peer; } ;
struct TYPE_23__ {scalar_t__ last_buf; scalar_t__ sync; scalar_t__ recycled; scalar_t__ flush; scalar_t__ file_last; scalar_t__ file_pos; int file; scalar_t__ last; scalar_t__ pos; int start; int in_file; int temporary; } ;


 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_19__*) ;
 int FUNC_2 (TYPE_19__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_6__*) ;
 int FUNC_5 (int ,int ,int ,char*,TYPE_6__*) ;
 int FUNC_6 (int ,int ,int ,char*,int,int,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,char*,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,char*,...) ;
 TYPE_3__* FUNC_9 (int ,int) ;
 TYPE_3__* FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*,TYPE_3__*,int ) ;
 int VAR_9 ;
 TYPE_6__* FUNC_12 (TYPE_5__*,TYPE_6__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_13(ngx_stream_session_t *VAR_10, ngx_chain_t *VAR_11,
    ngx_uint_t VAR_12)
{
    off_t VAR_13;
    ngx_uint_t VAR_14, VAR_15, VAR_16;
    ngx_chain_t *VAR_17, *VAR_18, **VAR_19, **VAR_20, *VAR_21;
    ngx_connection_t *VAR_22;
    ngx_stream_write_filter_ctx_t *VAR_23;

    VAR_23 = FUNC_10(VAR_10, VAR_9);

    if (VAR_23 == ((void*)0)) {
        VAR_23 = FUNC_9(VAR_10->connection->pool,
                          sizeof(ngx_stream_write_filter_ctx_t));
        if (VAR_23 == ((void*)0)) {
            return VAR_2;
        }

        FUNC_11(VAR_10, VAR_23, VAR_9);
    }

    if (VAR_12) {
        VAR_22 = VAR_10->connection;
        VAR_20 = &VAR_23->from_upstream;

    } else {
        VAR_22 = VAR_10->upstream->peer.connection;
        VAR_20 = &VAR_23->from_downstream;
    }

    if (VAR_22->error) {
        return VAR_2;
    }

    VAR_13 = 0;
    VAR_15 = 0;
    VAR_16 = 0;
    VAR_14 = 0;
    VAR_19 = VAR_20;



    for (VAR_17 = *VAR_20; VAR_17; VAR_17 = VAR_17->next) {
        VAR_19 = &VAR_17->next;

        FUNC_7(VAR_4, VAR_22->log, 0,
                       "write old buf t:%d f:%d %p, pos %p, size: %z "
                       "file: %O, size: %O",
                       VAR_17->buf->temporary, VAR_17->buf->in_file,
                       VAR_17->buf->start, VAR_17->buf->pos,
                       VAR_17->buf->last - VAR_17->buf->pos,
                       VAR_17->buf->file_pos,
                       VAR_17->buf->file_last - VAR_17->buf->file_pos);

        if (FUNC_1(VAR_17->buf) == 0 && !FUNC_2(VAR_17->buf)) {
            FUNC_8(VAR_3, VAR_22->log, 0,
                          "zero size buf in writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_17->buf->temporary,
                          VAR_17->buf->recycled,
                          VAR_17->buf->in_file,
                          VAR_17->buf->start,
                          VAR_17->buf->pos,
                          VAR_17->buf->last,
                          VAR_17->buf->file,
                          VAR_17->buf->file_pos,
                          VAR_17->buf->file_last);

            FUNC_3();
            return VAR_2;
        }

        if (FUNC_1(VAR_17->buf) < 0) {
            FUNC_8(VAR_3, VAR_22->log, 0,
                          "negative size buf in writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_17->buf->temporary,
                          VAR_17->buf->recycled,
                          VAR_17->buf->in_file,
                          VAR_17->buf->start,
                          VAR_17->buf->pos,
                          VAR_17->buf->last,
                          VAR_17->buf->file,
                          VAR_17->buf->file_pos,
                          VAR_17->buf->file_last);

            FUNC_3();
            return VAR_2;
        }

        VAR_13 += FUNC_1(VAR_17->buf);

        if (VAR_17->buf->flush || VAR_17->buf->recycled) {
            VAR_15 = 1;
        }

        if (VAR_17->buf->sync) {
            VAR_16 = 1;
        }

        if (VAR_17->buf->last_buf) {
            VAR_14 = 1;
        }
    }



    for (VAR_18 = VAR_11; VAR_18; VAR_18 = VAR_18->next) {
        VAR_17 = FUNC_0(VAR_22->pool);
        if (VAR_17 == ((void*)0)) {
            return VAR_2;
        }

        VAR_17->buf = VAR_18->buf;
        *VAR_19 = VAR_17;
        VAR_19 = &VAR_17->next;

        FUNC_7(VAR_4, VAR_22->log, 0,
                       "write new buf t:%d f:%d %p, pos %p, size: %z "
                       "file: %O, size: %O",
                       VAR_17->buf->temporary, VAR_17->buf->in_file,
                       VAR_17->buf->start, VAR_17->buf->pos,
                       VAR_17->buf->last - VAR_17->buf->pos,
                       VAR_17->buf->file_pos,
                       VAR_17->buf->file_last - VAR_17->buf->file_pos);

        if (FUNC_1(VAR_17->buf) == 0 && !FUNC_2(VAR_17->buf)) {
            FUNC_8(VAR_3, VAR_22->log, 0,
                          "zero size buf in writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_17->buf->temporary,
                          VAR_17->buf->recycled,
                          VAR_17->buf->in_file,
                          VAR_17->buf->start,
                          VAR_17->buf->pos,
                          VAR_17->buf->last,
                          VAR_17->buf->file,
                          VAR_17->buf->file_pos,
                          VAR_17->buf->file_last);

            FUNC_3();
            return VAR_2;
        }

        if (FUNC_1(VAR_17->buf) < 0) {
            FUNC_8(VAR_3, VAR_22->log, 0,
                          "negative size buf in writer "
                          "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                          VAR_17->buf->temporary,
                          VAR_17->buf->recycled,
                          VAR_17->buf->in_file,
                          VAR_17->buf->start,
                          VAR_17->buf->pos,
                          VAR_17->buf->last,
                          VAR_17->buf->file,
                          VAR_17->buf->file_pos,
                          VAR_17->buf->file_last);

            FUNC_3();
            return VAR_2;
        }

        VAR_13 += FUNC_1(VAR_17->buf);

        if (VAR_17->buf->flush || VAR_17->buf->recycled) {
            VAR_15 = 1;
        }

        if (VAR_17->buf->sync) {
            VAR_16 = 1;
        }

        if (VAR_17->buf->last_buf) {
            VAR_14 = 1;
        }
    }

    *VAR_19 = ((void*)0);

    FUNC_6(VAR_5, VAR_22->log, 0,
                   "stream write filter: l:%ui f:%ui s:%O", VAR_14, VAR_15, VAR_13);

    if (VAR_13 == 0
        && !(VAR_22->buffered & VAR_6)
        && !(VAR_14 && VAR_22->need_last_buf))
    {
        if (VAR_14 || VAR_15 || VAR_16) {
            for (VAR_17 = *VAR_20; VAR_17; ) {
                VAR_18 = VAR_17;
                VAR_17 = VAR_17->next;
                FUNC_4(VAR_22->pool, VAR_18);
            }

            *VAR_20 = ((void*)0);
            VAR_22->buffered &= ~VAR_8;

            return VAR_7;
        }

        FUNC_8(VAR_3, VAR_22->log, 0,
                      "the stream output chain is empty");

        FUNC_3();

        return VAR_2;
    }

    VAR_21 = VAR_22->send_chain(VAR_22, *VAR_20, 0);

    FUNC_5(VAR_5, VAR_22->log, 0,
                   "stream write filter %p", VAR_21);

    if (VAR_21 == VAR_1) {
        VAR_22->error = 1;
        return VAR_2;
    }

    for (VAR_17 = *VAR_20; VAR_17 && VAR_17 != VAR_21; ) {
        VAR_18 = VAR_17;
        VAR_17 = VAR_17->next;
        FUNC_4(VAR_22->pool, VAR_18);
    }

    *VAR_20 = VAR_21;

    if (VAR_21) {
        if (VAR_22->shared) {
            FUNC_8(VAR_3, VAR_22->log, 0,
                          "shared connection is busy");
            return VAR_2;
        }

        VAR_22->buffered |= VAR_8;
        return VAR_0;
    }

    VAR_22->buffered &= ~VAR_8;

    if (VAR_22->buffered & VAR_6) {
        return VAR_0;
    }

    return VAR_7;
}
