
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_34__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_18__ ;
typedef struct TYPE_38__ TYPE_15__ ;
typedef struct TYPE_37__ TYPE_14__ ;


typedef int ngx_uint_t ;
struct TYPE_43__ {int len; TYPE_9__* data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_44__ {int value; } ;
typedef TYPE_4__ ngx_http_sub_match_t ;
struct TYPE_45__ {scalar_t__ once; } ;
typedef TYPE_5__ ngx_http_sub_loc_conf_t ;
struct TYPE_38__ {int len; TYPE_9__* data; } ;
struct TYPE_39__ {int len; TYPE_14__* data; } ;
struct TYPE_46__ {int once; scalar_t__ pos; size_t index; int applied; int * busy; int * out; TYPE_14__* buf; TYPE_8__** last_out; int free; TYPE_15__ looked; TYPE_2__* matches; TYPE_3__* sub; TYPE_9__* copy_end; TYPE_9__* copy_start; TYPE_18__ saved; TYPE_34__* in; } ;
typedef TYPE_6__ ngx_http_sub_ctx_t ;
struct TYPE_47__ {int pool; TYPE_1__* connection; TYPE_18__ uri; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_48__ {struct TYPE_48__* next; TYPE_9__* buf; } ;
typedef TYPE_8__ ngx_chain_t ;
struct TYPE_49__ {int memory; int file_last; int file_pos; int sync; scalar_t__ recycled; TYPE_14__* shadow; scalar_t__ flush; scalar_t__ last_in_chain; scalar_t__ last_buf; struct TYPE_49__* pos; struct TYPE_49__* last; scalar_t__ in_file; } ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_42__ {struct TYPE_42__* next; TYPE_14__* buf; } ;
struct TYPE_41__ {int nelts; TYPE_4__* elts; } ;
struct TYPE_40__ {int log; } ;
struct TYPE_37__ {scalar_t__ pos; scalar_t__ last; scalar_t__ recycled; scalar_t__ flush; scalar_t__ last_in_chain; scalar_t__ last_buf; scalar_t__ sync; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_14__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_34__**,TYPE_8__*) ;
 TYPE_8__* FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int ,TYPE_3__*) ;
 TYPE_6__* FUNC_4 (TYPE_7__*,int ) ;
 TYPE_5__* FUNC_5 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_7__*,TYPE_8__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (TYPE_7__*,TYPE_6__*) ;
 scalar_t__ FUNC_8 (TYPE_7__*,TYPE_6__*,int) ;
 int FUNC_9 (int ,int ,int ,char*,TYPE_18__*) ;
 int FUNC_10 (int ,int ,int ,char*,scalar_t__,TYPE_15__*,TYPE_9__*,TYPE_9__*) ;
 int FUNC_11 (TYPE_9__*,TYPE_14__*,int) ;
 int FUNC_12 (TYPE_9__*,int) ;
 TYPE_3__* FUNC_13 (int ,int) ;
 TYPE_9__* FUNC_14 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_15(ngx_http_request_t *VAR_5, ngx_chain_t *VAR_6)
{
    ngx_int_t VAR_7;
    ngx_buf_t *VAR_8;
    ngx_str_t *VAR_9;
    ngx_uint_t VAR_10, VAR_11;
    ngx_chain_t *VAR_12;
    ngx_http_sub_ctx_t *VAR_13;
    ngx_http_sub_match_t *VAR_14;
    ngx_http_sub_loc_conf_t *VAR_15;

    VAR_13 = FUNC_4(VAR_5, VAR_4);

    if (VAR_13 == ((void*)0)) {
        return FUNC_6(VAR_5, VAR_6);
    }

    if ((VAR_6 == ((void*)0)
         && VAR_13->buf == ((void*)0)
         && VAR_13->in == ((void*)0)
         && VAR_13->busy == ((void*)0)))
    {
        return FUNC_6(VAR_5, VAR_6);
    }

    if (VAR_13->once && (VAR_13->buf == ((void*)0) || VAR_13->in == ((void*)0))) {

        if (VAR_13->busy) {
            if (FUNC_7(VAR_5, VAR_13) == VAR_1) {
                return VAR_1;
            }
        }

        return FUNC_6(VAR_5, VAR_6);
    }



    if (VAR_6) {
        if (FUNC_1(VAR_5->pool, &VAR_13->in, VAR_6) != VAR_3) {
            return VAR_1;
        }
    }

    FUNC_9(VAR_2, VAR_5->connection->log, 0,
                   "http sub filter \"%V\"", &VAR_5->uri);

    VAR_10 = 0;
    VAR_11 = 0;

    while (VAR_13->in || VAR_13->buf) {

        if (VAR_13->buf == ((void*)0)) {
            VAR_13->buf = VAR_13->in->buf;
            VAR_13->in = VAR_13->in->next;
            VAR_13->pos = VAR_13->buf->pos;
        }

        if (VAR_13->buf->flush || VAR_13->buf->recycled) {
            VAR_10 = 1;
        }

        if (VAR_13->in == ((void*)0)) {
            VAR_11 = VAR_10;
        }

        VAR_8 = ((void*)0);

        while (VAR_13->pos < VAR_13->buf->last) {

            VAR_7 = FUNC_8(VAR_5, VAR_13, VAR_11);

            FUNC_10(VAR_2, VAR_5->connection->log, 0,
                           "parse: %i, looked: \"%V\" %p-%p",
                           VAR_7, &VAR_13->looked, VAR_13->copy_start, VAR_13->copy_end);

            if (VAR_7 == VAR_1) {
                return VAR_7;
            }

            if (VAR_13->saved.len) {

                FUNC_9(VAR_2, VAR_5->connection->log, 0,
                               "saved: \"%V\"", &VAR_13->saved);

                VAR_12 = FUNC_2(VAR_5->pool, &VAR_13->free);
                if (VAR_12 == ((void*)0)) {
                    return VAR_1;
                }

                VAR_8 = VAR_12->buf;

                FUNC_12(VAR_8, sizeof(ngx_buf_t));

                VAR_8->pos = FUNC_14(VAR_5->pool, VAR_13->saved.len);
                if (VAR_8->pos == ((void*)0)) {
                    return VAR_1;
                }

                FUNC_11(VAR_8->pos, VAR_13->saved.data, VAR_13->saved.len);
                VAR_8->last = VAR_8->pos + VAR_13->saved.len;
                VAR_8->memory = 1;

                *VAR_13->last_out = VAR_12;
                VAR_13->last_out = &VAR_12->next;

                VAR_13->saved.len = 0;
            }

            if (VAR_13->copy_start != VAR_13->copy_end) {

                VAR_12 = FUNC_2(VAR_5->pool, &VAR_13->free);
                if (VAR_12 == ((void*)0)) {
                    return VAR_1;
                }

                VAR_8 = VAR_12->buf;

                FUNC_11(VAR_8, VAR_13->buf, sizeof(ngx_buf_t));

                VAR_8->pos = VAR_13->copy_start;
                VAR_8->last = VAR_13->copy_end;
                VAR_8->shadow = ((void*)0);
                VAR_8->last_buf = 0;
                VAR_8->last_in_chain = 0;
                VAR_8->recycled = 0;

                if (VAR_8->in_file) {
                    VAR_8->file_last = VAR_8->file_pos + (VAR_8->last - VAR_13->buf->pos);
                    VAR_8->file_pos += VAR_8->pos - VAR_13->buf->pos;
                }

                *VAR_13->last_out = VAR_12;
                VAR_13->last_out = &VAR_12->next;
            }

            if (VAR_7 == VAR_0) {
                continue;
            }




            VAR_12 = FUNC_2(VAR_5->pool, &VAR_13->free);
            if (VAR_12 == ((void*)0)) {
                return VAR_1;
            }

            VAR_8 = VAR_12->buf;

            FUNC_12(VAR_8, sizeof(ngx_buf_t));

            VAR_15 = FUNC_5(VAR_5, VAR_4);

            if (VAR_13->sub == ((void*)0)) {
                VAR_13->sub = FUNC_13(VAR_5->pool, sizeof(ngx_str_t)
                                                * VAR_13->matches->nelts);
                if (VAR_13->sub == ((void*)0)) {
                    return VAR_1;
                }
            }

            VAR_9 = &VAR_13->sub[VAR_13->index];

            if (VAR_9->data == ((void*)0)) {
                VAR_14 = VAR_13->matches->elts;

                if (FUNC_3(VAR_5, VAR_14[VAR_13->index].value, VAR_9)
                    != VAR_3)
                {
                    return VAR_1;
                }
            }

            if (VAR_9->len) {
                VAR_8->memory = 1;
                VAR_8->pos = VAR_9->data;
                VAR_8->last = VAR_9->data + VAR_9->len;

            } else {
                VAR_8->sync = 1;
            }

            *VAR_13->last_out = VAR_12;
            VAR_13->last_out = &VAR_12->next;

            VAR_13->index = 0;
            VAR_13->once = VAR_15->once && (++VAR_13->applied == VAR_13->matches->nelts);

            continue;
        }

        if (VAR_13->looked.len
            && (VAR_13->buf->last_buf || VAR_13->buf->last_in_chain))
        {
            VAR_12 = FUNC_2(VAR_5->pool, &VAR_13->free);
            if (VAR_12 == ((void*)0)) {
                return VAR_1;
            }

            VAR_8 = VAR_12->buf;

            FUNC_12(VAR_8, sizeof(ngx_buf_t));

            VAR_8->pos = VAR_13->looked.data;
            VAR_8->last = VAR_8->pos + VAR_13->looked.len;
            VAR_8->memory = 1;

            *VAR_13->last_out = VAR_12;
            VAR_13->last_out = &VAR_12->next;

            VAR_13->looked.len = 0;
        }

        if (VAR_13->buf->last_buf || VAR_13->buf->flush || VAR_13->buf->sync
            || FUNC_0(VAR_13->buf))
        {
            if (VAR_8 == ((void*)0)) {
                VAR_12 = FUNC_2(VAR_5->pool, &VAR_13->free);
                if (VAR_12 == ((void*)0)) {
                    return VAR_1;
                }

                VAR_8 = VAR_12->buf;

                FUNC_12(VAR_8, sizeof(ngx_buf_t));

                VAR_8->sync = 1;

                *VAR_13->last_out = VAR_12;
                VAR_13->last_out = &VAR_12->next;
            }

            VAR_8->last_buf = VAR_13->buf->last_buf;
            VAR_8->last_in_chain = VAR_13->buf->last_in_chain;
            VAR_8->flush = VAR_13->buf->flush;
            VAR_8->shadow = VAR_13->buf;

            VAR_8->recycled = VAR_13->buf->recycled;
        }

        VAR_13->buf = ((void*)0);
    }

    if (VAR_13->out == ((void*)0) && VAR_13->busy == ((void*)0)) {
        return VAR_3;
    }

    return FUNC_7(VAR_5, VAR_13);
}
