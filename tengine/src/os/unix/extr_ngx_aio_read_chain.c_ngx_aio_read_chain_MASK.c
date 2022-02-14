
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int off_t ;
struct TYPE_10__ {int log; TYPE_2__* read; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_11__ {struct TYPE_11__* next; TYPE_1__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_9__ {int pending_eof; int ready; scalar_t__ eof; } ;
struct TYPE_8__ {int * end; int * last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int *,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;

ssize_t
FUNC_2(ngx_connection_t *VAR_3, ngx_chain_t *VAR_4, off_t VAR_5)
{
    int VAR_6;
    u_char *VAR_7, *VAR_8;
    size_t VAR_9;
    ssize_t VAR_10;

    if (VAR_3->read->pending_eof) {
        VAR_3->read->ready = 0;
        return 0;
    }

    VAR_10 = 0;

    while (VAR_4) {



        if (!VAR_3->read->ready) {
            return VAR_10 ? VAR_10 : VAR_0;
        }

        VAR_7 = VAR_4->buf->last;
        VAR_8 = VAR_4->buf->last;
        VAR_9 = 0;



        while (VAR_4 && VAR_8 == VAR_4->buf->last) {
            VAR_9 += VAR_4->buf->end - VAR_4->buf->last;
            VAR_8 = VAR_4->buf->end;
            VAR_4 = VAR_4->next;
        }

        VAR_6 = FUNC_0(VAR_3, VAR_7, VAR_9);

        FUNC_1(VAR_2, VAR_3->log, 0, "aio_read: %d", VAR_6);

        if (VAR_6 == VAR_0) {
            return VAR_10 ? VAR_10 : VAR_0;
        }

        if (VAR_6 == VAR_1) {
            return VAR_1;
        }

        if (VAR_6 == 0) {
            VAR_3->read->pending_eof = 1;
            if (VAR_10) {
                VAR_3->read->eof = 0;
                VAR_3->read->ready = 1;
            }
            return VAR_10;
        }

        if (VAR_6 > 0) {
            VAR_10 += VAR_6;
        }

        FUNC_1(VAR_2, VAR_3->log, 0,
                       "aio_read total: %d", VAR_10);
    }

    return VAR_10 ? VAR_10 : VAR_0;
}
