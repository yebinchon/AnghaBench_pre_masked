
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_11__ {scalar_t__ sent; int log; TYPE_1__* write; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_12__ {TYPE_4__* buf; struct TYPE_12__* next; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_13__ {int * pos; int * last; } ;
struct TYPE_10__ {int ready; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,size_t) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,char*,scalar_t__) ;
 scalar_t__ VAR_4 ;

ngx_chain_t *
FUNC_3(ngx_connection_t *VAR_5, ngx_chain_t *VAR_6, off_t VAR_7)
{
    u_char *VAR_8, *VAR_9;
    off_t VAR_10, VAR_11;
    size_t VAR_12;
    ssize_t VAR_13, VAR_14;
    ngx_chain_t *VAR_15;



    if (VAR_7 == 0 || VAR_7 > (off_t) (VAR_3 - VAR_4)) {
        VAR_7 = VAR_3 - VAR_4;
    }

    VAR_10 = 0;
    VAR_11 = 0;
    VAR_15 = VAR_6;

    while (VAR_15) {

        if (VAR_15->buf->pos == VAR_15->buf->last) {
            VAR_15 = VAR_15->next;
            continue;
        }



        if (!VAR_5->write->ready) {
            return VAR_15;
        }

        VAR_8 = VAR_15->buf->pos;
        VAR_9 = VAR_8;
        VAR_12 = 0;



        while (VAR_15 && VAR_9 == VAR_15->buf->pos && VAR_10 < VAR_7) {
            if (FUNC_1(VAR_15->buf)) {
                continue;
            }

            VAR_14 = VAR_15->buf->last - VAR_15->buf->pos;

            if (VAR_10 + VAR_14 > VAR_7) {
                VAR_14 = VAR_7 - VAR_10;
            }

            VAR_12 += VAR_14;
            VAR_9 = VAR_15->buf->pos + VAR_14;
            VAR_10 += VAR_14;
            VAR_15 = VAR_15->next;
        }

        VAR_13 = FUNC_0(VAR_5, VAR_8, VAR_12);

        FUNC_2(VAR_2, VAR_5->log, 0, "aio_write: %z", VAR_13);

        if (VAR_13 == VAR_1) {
            return VAR_0;
        }

        if (VAR_13 > 0) {
            VAR_11 += VAR_13;
            VAR_5->sent += VAR_13;
        }

        FUNC_2(VAR_2, VAR_5->log, 0,
                       "aio_write sent: %O", VAR_5->sent);

        for (VAR_15 = VAR_6; VAR_15; VAR_15 = VAR_15->next) {

            if (VAR_11 >= VAR_15->buf->last - VAR_15->buf->pos) {
                VAR_11 -= VAR_15->buf->last - VAR_15->buf->pos;
                VAR_15->buf->pos = VAR_15->buf->last;

                continue;
            }

            VAR_15->buf->pos += VAR_11;

            break;
        }
    }

    return VAR_15;
}
