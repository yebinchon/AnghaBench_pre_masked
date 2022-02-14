
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef scalar_t__ off_t ;
struct TYPE_28__ {scalar_t__ num; } ;
struct TYPE_29__ {scalar_t__ (* output_filter ) (int ,TYPE_3__*) ;scalar_t__ allocated; int tag; int * busy; TYPE_3__* free; TYPE_12__* pool; int filter_ctx; TYPE_3__* in; TYPE_10__* buf; TYPE_1__ bufs; scalar_t__ aio; } ;
typedef TYPE_2__ ngx_output_chain_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_30__ {struct TYPE_30__* next; TYPE_10__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_27__ {int log; } ;
struct TYPE_26__ {scalar_t__ file_last; int file_pos; int file; int last; int pos; int start; scalar_t__ in_file; int recycled; int temporary; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__* FUNC_0 (TYPE_12__*) ;
 scalar_t__ FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_12__*,TYPE_3__**,int **,TYPE_3__**,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_12__*,TYPE_3__*) ;
 int FUNC_6 (int ,int ,int ,char*,int ,int ,scalar_t__,int ,int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_12__*,TYPE_3__**,TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_10__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_13 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_14 (int ,TYPE_3__*) ;

ngx_int_t
FUNC_15(ngx_output_chain_ctx_t *VAR_7, ngx_chain_t *VAR_8)
{
    off_t VAR_9;
    ngx_int_t VAR_10, VAR_11;
    ngx_chain_t *VAR_12, *VAR_13, **VAR_14;

    if (VAR_7->in == ((void*)0) && VAR_7->busy == ((void*)0)



       )
    {






        if (VAR_8 == ((void*)0)) {
            return VAR_7->output_filter(VAR_7->filter_ctx, VAR_8);
        }

        if (VAR_8->next == ((void*)0)



            && FUNC_9(VAR_7, VAR_8->buf))
        {
            return VAR_7->output_filter(VAR_7->filter_ctx, VAR_8);
        }
    }



    if (VAR_8) {
        if (FUNC_7(VAR_7->pool, &VAR_7->in, VAR_8) == VAR_2) {
            return VAR_2;
        }
    }

    VAR_13 = ((void*)0);
    VAR_14 = &VAR_13;
    VAR_11 = VAR_4;

    for ( ;; ) {







        while (VAR_7->in) {






            VAR_9 = FUNC_1(VAR_7->in->buf);

            if (VAR_9 == 0 && !FUNC_2(VAR_7->in->buf)) {

                FUNC_6(VAR_3, VAR_7->pool->log, 0,
                              "zero size buf in output "
                              "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                              VAR_7->in->buf->temporary,
                              VAR_7->in->buf->recycled,
                              VAR_7->in->buf->in_file,
                              VAR_7->in->buf->start,
                              VAR_7->in->buf->pos,
                              VAR_7->in->buf->last,
                              VAR_7->in->buf->file,
                              VAR_7->in->buf->file_pos,
                              VAR_7->in->buf->file_last);

                FUNC_4();

                VAR_7->in = VAR_7->in->next;

                continue;
            }

            if (VAR_9 < 0) {

                FUNC_6(VAR_3, VAR_7->pool->log, 0,
                              "negative size buf in output "
                              "t:%d r:%d f:%d %p %p-%p %p %O-%O",
                              VAR_7->in->buf->temporary,
                              VAR_7->in->buf->recycled,
                              VAR_7->in->buf->in_file,
                              VAR_7->in->buf->start,
                              VAR_7->in->buf->pos,
                              VAR_7->in->buf->last,
                              VAR_7->in->buf->file,
                              VAR_7->in->buf->file_pos,
                              VAR_7->in->buf->file_last);

                FUNC_4();

                return VAR_2;
            }

            if (FUNC_9(VAR_7, VAR_7->in->buf)) {



                VAR_12 = VAR_7->in;
                VAR_7->in = VAR_12->next;

                *VAR_14 = VAR_12;
                VAR_14 = &VAR_12->next;
                VAR_12->next = ((void*)0);

                continue;
            }

            if (VAR_7->buf == ((void*)0)) {

                VAR_10 = FUNC_8(VAR_7, VAR_9);

                if (VAR_10 == VAR_2) {
                    return VAR_2;
                }

                if (VAR_10 != VAR_5) {

                    if (VAR_7->free) {



                        VAR_12 = VAR_7->free;
                        VAR_7->buf = VAR_12->buf;
                        VAR_7->free = VAR_12->next;

                        FUNC_5(VAR_7->pool, VAR_12);

                    } else if (VAR_13 || VAR_7->allocated == VAR_7->bufs.num) {

                        break;

                    } else if (FUNC_11(VAR_7, VAR_9) != VAR_5) {
                        return VAR_2;
                    }
                }
            }

            VAR_10 = FUNC_10(VAR_7);

            if (VAR_10 == VAR_2) {
                return VAR_10;
            }

            if (VAR_10 == VAR_0) {
                if (VAR_13) {
                    break;
                }

                return VAR_10;
            }



            if (FUNC_1(VAR_7->in->buf) == 0) {
                VAR_7->in = VAR_7->in->next;
            }

            VAR_12 = FUNC_0(VAR_7->pool);
            if (VAR_12 == ((void*)0)) {
                return VAR_2;
            }

            VAR_12->buf = VAR_7->buf;
            VAR_12->next = ((void*)0);
            *VAR_14 = VAR_12;
            VAR_14 = &VAR_12->next;
            VAR_7->buf = ((void*)0);
        }

        if (VAR_13 == ((void*)0) && VAR_11 != VAR_4) {

            if (VAR_7->in) {
                return VAR_0;
            }

            return VAR_11;
        }

        VAR_11 = VAR_7->output_filter(VAR_7->filter_ctx, VAR_13);

        if (VAR_11 == VAR_2 || VAR_11 == VAR_1) {
            return VAR_11;
        }

        FUNC_3(VAR_7->pool, &VAR_7->free, &VAR_7->busy, &VAR_13,
                                VAR_7->tag);
        VAR_14 = &VAR_13;
    }
}
