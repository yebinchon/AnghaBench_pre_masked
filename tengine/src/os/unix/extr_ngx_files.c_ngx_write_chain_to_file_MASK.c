
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct iovec {size_t iov_len; scalar_t__ iov_base; } ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;
typedef int ngx_pool_t ;
struct TYPE_10__ {int nalloc; int count; struct iovec* iovs; } ;
typedef TYPE_2__ ngx_iovec_t ;
typedef int ngx_file_t ;
struct TYPE_11__ {TYPE_1__* buf; int * next; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_9__ {int * pos; int * last; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,int *,size_t,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*,int ) ;

ssize_t
FUNC_3(ngx_file_t *VAR_2, ngx_chain_t *VAR_3, off_t VAR_4,
    ngx_pool_t *VAR_5)
{
    ssize_t VAR_6, VAR_7;
    ngx_iovec_t VAR_8;
    struct iovec VAR_9[VAR_1];



    if (VAR_3->next == ((void*)0)) {
        return FUNC_1(VAR_2, VAR_3->buf->pos,
                              (size_t) (VAR_3->buf->last - VAR_3->buf->pos),
                              VAR_4);
    }

    VAR_6 = 0;

    VAR_8.iovs = VAR_9;
    VAR_8.nalloc = VAR_1;

    do {

        VAR_3 = FUNC_0(&VAR_8, VAR_3);



        if (VAR_8.count == 1) {
            VAR_7 = FUNC_1(VAR_2, (u_char *) VAR_9[0].iov_base,
                               VAR_9[0].iov_len, VAR_4);

            if (VAR_7 == VAR_0) {
                return VAR_7;
            }

            return VAR_6 + VAR_7;
        }

        VAR_7 = FUNC_2(VAR_2, &VAR_8, VAR_4);

        if (VAR_7 == VAR_0) {
            return VAR_7;
        }

        VAR_4 += VAR_7;
        VAR_6 += VAR_7;

    } while (VAR_3);

    return VAR_6;
}
