
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {int downstream_error; scalar_t__ (* output_filter ) (int ,TYPE_6__*) ;int downstream_done; int busy_size; TYPE_1__* temp_file; int cyclic_temp_file; scalar_t__ cacheable; TYPE_6__* free; int tag; TYPE_6__* busy; int pool; int output_ctx; int log; TYPE_6__* in; scalar_t__ writing; TYPE_6__* out; scalar_t__ upstream_done; scalar_t__ upstream_error; scalar_t__ upstream_eof; TYPE_5__* downstream; } ;
typedef TYPE_4__ ngx_event_pipe_t ;
struct TYPE_22__ {TYPE_2__* write; int data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_23__ {TYPE_3__* buf; struct TYPE_23__* next; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_20__ {int last_shadow; scalar_t__ file_last; int * shadow; scalar_t__ temp_file; int * start; int * end; scalar_t__ recycled; scalar_t__ pos; scalar_t__ last; } ;
struct TYPE_19__ {size_t ready; scalar_t__ delayed; } ;
struct TYPE_18__ {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,TYPE_6__**,TYPE_6__**,TYPE_6__**,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,size_t) ;
 int FUNC_6 (int ,int ,int ,char*,TYPE_6__*,int) ;
 int FUNC_7 (int ,int ,int ,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_9 (int ,TYPE_6__*) ;
 scalar_t__ FUNC_10 (int ,TYPE_6__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_6__*) ;

__attribute__((used)) static ngx_int_t
FUNC_12(ngx_event_pipe_t *VAR_6)
{
    u_char *VAR_7;
    size_t VAR_8;
    ngx_int_t VAR_9;
    ngx_uint_t VAR_10, VAR_11, VAR_12;
    ngx_chain_t *VAR_13, **VAR_14, *VAR_15;
    ngx_connection_t *VAR_16;

    VAR_16 = VAR_6->downstream;

    FUNC_5(VAR_4, VAR_6->log, 0,
                   "pipe write downstream: %d", VAR_16->write->ready);
    VAR_11 = 0;

    for ( ;; ) {
        if (VAR_6->downstream_error) {
            return FUNC_2(VAR_6);
        }

        if (VAR_6->upstream_eof || VAR_6->upstream_error || VAR_6->upstream_done) {



            for (VAR_15 = VAR_6->busy; VAR_15; VAR_15 = VAR_15->next) {
                VAR_15->buf->recycled = 0;
            }

            if (VAR_6->out) {
                FUNC_4(VAR_4, VAR_6->log, 0,
                               "pipe write downstream flush out");

                for (VAR_15 = VAR_6->out; VAR_15; VAR_15 = VAR_15->next) {
                    VAR_15->buf->recycled = 0;
                }

                VAR_9 = VAR_6->output_filter(VAR_6->output_ctx, VAR_6->out);

                if (VAR_9 == VAR_2) {
                    VAR_6->downstream_error = 1;
                    return FUNC_2(VAR_6);
                }

                VAR_6->out = ((void*)0);
            }

            if (VAR_6->writing) {
                break;
            }

            if (VAR_6->in) {
                FUNC_4(VAR_4, VAR_6->log, 0,
                               "pipe write downstream flush in");

                for (VAR_15 = VAR_6->in; VAR_15; VAR_15 = VAR_15->next) {
                    VAR_15->buf->recycled = 0;
                }

                VAR_9 = VAR_6->output_filter(VAR_6->output_ctx, VAR_6->in);

                if (VAR_9 == VAR_2) {
                    VAR_6->downstream_error = 1;
                    return FUNC_2(VAR_6);
                }

                VAR_6->in = ((void*)0);
            }

            FUNC_4(VAR_4, VAR_6->log, 0,
                           "pipe write downstream done");



            VAR_6->downstream_done = 1;
            break;
        }

        if (VAR_16->data != VAR_6->output_ctx
            || !VAR_16->write->ready
            || VAR_16->write->delayed)
        {
            break;
        }



        VAR_7 = ((void*)0);
        VAR_8 = 0;

        for (VAR_15 = VAR_6->busy; VAR_15; VAR_15 = VAR_15->next) {

            if (VAR_15->buf->recycled) {
                if (VAR_7 == VAR_15->buf->start) {
                    continue;
                }

                VAR_8 += VAR_15->buf->end - VAR_15->buf->start;
                VAR_7 = VAR_15->buf->start;
            }
        }

        FUNC_5(VAR_4, VAR_6->log, 0,
                       "pipe write busy: %uz", VAR_8);

        VAR_13 = ((void*)0);

        if (VAR_8 >= (size_t) VAR_6->busy_size) {
            VAR_10 = 1;
            goto flush;
        }

        VAR_10 = 0;
        VAR_14 = ((void*)0);
        VAR_12 = 1;

        for ( ;; ) {
            if (VAR_6->out) {
                VAR_15 = VAR_6->out;

                if (VAR_15->buf->recycled) {
                    FUNC_8(VAR_3, VAR_6->log, 0,
                                  "recycled buffer in pipe out chain");
                }

                VAR_6->out = VAR_6->out->next;

            } else if (!VAR_6->cacheable && !VAR_6->writing && VAR_6->in) {
                VAR_15 = VAR_6->in;

                FUNC_7(VAR_4, VAR_6->log, 0,
                               "pipe write buf ls:%d %p %z",
                               VAR_15->buf->last_shadow,
                               VAR_15->buf->pos,
                               VAR_15->buf->last - VAR_15->buf->pos);

                if (VAR_15->buf->recycled && VAR_12) {
                    if (VAR_8 + VAR_15->buf->end - VAR_15->buf->start > VAR_6->busy_size) {
                        VAR_10 = 1;
                        break;
                    }

                    VAR_8 += VAR_15->buf->end - VAR_15->buf->start;
                }

                VAR_12 = VAR_15->buf->last_shadow;

                VAR_6->in = VAR_6->in->next;

            } else {
                break;
            }

            VAR_15->next = ((void*)0);

            if (VAR_13) {
                *VAR_14 = VAR_15;
            } else {
                VAR_13 = VAR_15;
            }
            VAR_14 = &VAR_15->next;
        }

    flush:

        FUNC_6(VAR_4, VAR_6->log, 0,
                       "pipe write: out:%p, f:%ui", VAR_13, VAR_10);

        if (VAR_13 == ((void*)0)) {

            if (!VAR_10) {
                break;
            }


            if (VAR_11++ > 10) {
                return VAR_1;
            }
        }

        VAR_9 = VAR_6->output_filter(VAR_6->output_ctx, VAR_13);

        FUNC_0(VAR_6->pool, &VAR_6->free, &VAR_6->busy, &VAR_13, VAR_6->tag);

        if (VAR_9 == VAR_2) {
            VAR_6->downstream_error = 1;
            return FUNC_2(VAR_6);
        }

        for (VAR_15 = VAR_6->free; VAR_15; VAR_15 = VAR_15->next) {

            if (VAR_15->buf->temp_file) {
                if (VAR_6->cacheable || !VAR_6->cyclic_temp_file) {
                    continue;
                }



                if (VAR_15->buf->file_last == VAR_6->temp_file->offset) {
                    VAR_6->temp_file->offset = 0;
                }
            }





            if (VAR_15->buf->last_shadow) {
                if (FUNC_1(VAR_6, VAR_15->buf->shadow) != VAR_5) {
                    return VAR_0;
                }

                VAR_15->buf->last_shadow = 0;
            }

            VAR_15->buf->shadow = ((void*)0);
        }
    }

    return VAR_5;
}
