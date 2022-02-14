
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {scalar_t__ temp_file_write_size; scalar_t__ max_temp_file_size; int pool; TYPE_3__* free; TYPE_3__* free_raw_bufs; TYPE_5__* temp_file; int tag; TYPE_3__* out; TYPE_4__* buf_to_file; int thread_task; TYPE_3__* writing; int thread_ctx; scalar_t__ thread_handler; TYPE_3__* in; TYPE_3__** last_in; int log; int cacheable; scalar_t__ aio; } ;
typedef TYPE_2__ ngx_event_pipe_t ;
struct TYPE_15__ {struct TYPE_15__* next; TYPE_4__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_16__ {scalar_t__ last; scalar_t__ pos; int last_shadow; scalar_t__ start; scalar_t__ file_last; scalar_t__ file_pos; int in_file; int temp_file; struct TYPE_16__* shadow; TYPE_1__* file; int tag; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_13__ {int thread_task; int thread_ctx; scalar_t__ thread_handler; } ;
struct TYPE_17__ {scalar_t__ offset; int thread_write; TYPE_1__ file; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,TYPE_3__**) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,char*,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,int) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_event_pipe_t *VAR_6)
{
    ssize_t VAR_7, VAR_8, VAR_9;
    ngx_buf_t *VAR_10;
    ngx_uint_t VAR_11;
    ngx_chain_t *VAR_12, *VAR_13, *VAR_14, *VAR_15, **VAR_16, **VAR_17, **VAR_18;
    if (VAR_6->buf_to_file) {
        VAR_15 = FUNC_0(VAR_6->pool);
        if (VAR_15 == ((void*)0)) {
            return VAR_0;
        }

        VAR_15->buf = VAR_6->buf_to_file;
        VAR_15->next = VAR_6->in;

    } else {
        VAR_15 = VAR_6->in;
    }

    if (!VAR_6->cacheable) {

        VAR_7 = 0;
        VAR_12 = VAR_15;
        VAR_16 = ((void*)0);
        VAR_11 = 1;

        FUNC_3(VAR_4, VAR_6->log, 0,
                       "pipe offset: %O", VAR_6->temp_file->offset);

        do {
            VAR_8 = VAR_12->buf->last - VAR_12->buf->pos;

            FUNC_4(VAR_4, VAR_6->log, 0,
                           "pipe buf ls:%d %p, pos %p, size: %z",
                           VAR_12->buf->last_shadow, VAR_12->buf->start,
                           VAR_12->buf->pos, VAR_8);

            if (VAR_11
                && ((VAR_7 + VAR_8 > VAR_6->temp_file_write_size)
                    || (VAR_6->temp_file->offset + VAR_7 + VAR_8
                        > VAR_6->max_temp_file_size)))
            {
                break;
            }

            VAR_11 = VAR_12->buf->last_shadow;

            VAR_7 += VAR_8;
            VAR_16 = &VAR_12->next;
            VAR_12 = VAR_12->next;

        } while (VAR_12);

        FUNC_3(VAR_4, VAR_6->log, 0, "size: %z", VAR_7);

        if (VAR_16 == ((void*)0)) {
            return VAR_2;
        }

        if (VAR_12) {
            VAR_6->in = VAR_12;
            *VAR_16 = ((void*)0);

        } else {
            VAR_6->in = ((void*)0);
            VAR_6->last_in = &VAR_6->in;
        }

    } else {
        VAR_6->in = ((void*)0);
        VAR_6->last_in = &VAR_6->in;
    }
    VAR_9 = FUNC_6(VAR_6->temp_file, VAR_15);

    if (VAR_9 == VAR_3) {
        return VAR_0;
    }
    if (VAR_6->buf_to_file) {
        VAR_6->temp_file->offset = VAR_6->buf_to_file->last - VAR_6->buf_to_file->pos;
        VAR_9 -= VAR_6->buf_to_file->last - VAR_6->buf_to_file->pos;
        VAR_6->buf_to_file = ((void*)0);
        VAR_15 = VAR_15->next;
    }

    if (VAR_9 > 0) {


        if (VAR_6->out) {
            for (VAR_12 = VAR_6->out; VAR_12->next; VAR_12 = VAR_12->next) { }

            VAR_10 = VAR_12->buf;

            if (VAR_10->file_last == VAR_6->temp_file->offset) {
                VAR_6->temp_file->offset += VAR_9;
                VAR_10->file_last = VAR_6->temp_file->offset;
                goto free;
            }

            VAR_17 = &VAR_12->next;

        } else {
            VAR_17 = &VAR_6->out;
        }

        VAR_12 = FUNC_1(VAR_6->pool, &VAR_6->free);
        if (VAR_12 == ((void*)0)) {
            return VAR_0;
        }

        VAR_10 = VAR_12->buf;

        FUNC_5(VAR_10, sizeof(ngx_buf_t));

        VAR_10->tag = VAR_6->tag;

        VAR_10->file = &VAR_6->temp_file->file;
        VAR_10->file_pos = VAR_6->temp_file->offset;
        VAR_6->temp_file->offset += VAR_9;
        VAR_10->file_last = VAR_6->temp_file->offset;

        VAR_10->in_file = 1;
        VAR_10->temp_file = 1;

        *VAR_17 = VAR_12;
    }

free:

    for (VAR_18 = &VAR_6->free_raw_bufs;
         *VAR_18 != ((void*)0);
         VAR_18 = &(*VAR_18)->next)
    {

    }

    for (VAR_12 = VAR_15; VAR_12; VAR_12 = VAR_14) {
        VAR_14 = VAR_12->next;

        VAR_12->next = VAR_6->free;
        VAR_6->free = VAR_12;

        VAR_10 = VAR_12->buf;

        if (VAR_10->last_shadow) {

            VAR_13 = FUNC_0(VAR_6->pool);
            if (VAR_13 == ((void*)0)) {
                return VAR_0;
            }

            VAR_13->buf = VAR_10->shadow;
            VAR_13->next = ((void*)0);

            *VAR_18 = VAR_13;
            VAR_18 = &VAR_13->next;

            VAR_10->shadow->pos = VAR_10->shadow->start;
            VAR_10->shadow->last = VAR_10->shadow->start;

            FUNC_2(VAR_10->shadow);
        }
    }

    return VAR_5;
}
