
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef scalar_t__ ngx_fd_t ;
struct TYPE_7__ {struct TYPE_7__* next; TYPE_2__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_6__ {scalar_t__ file_pos; scalar_t__ file_last; TYPE_1__* file; scalar_t__ in_file; } ;
struct TYPE_5__ {scalar_t__ fd; } ;


 scalar_t__ VAR_0 ;

off_t
FUNC_0(ngx_chain_t **VAR_1, off_t VAR_2)
{
    off_t VAR_3, VAR_4, VAR_5, VAR_6;
    ngx_fd_t VAR_7;
    ngx_chain_t *VAR_8;

    VAR_3 = 0;

    VAR_8 = *VAR_1;
    VAR_7 = VAR_8->buf->file->fd;

    do {
        VAR_4 = VAR_8->buf->file_last - VAR_8->buf->file_pos;

        if (VAR_4 > VAR_2 - VAR_3) {
            VAR_4 = VAR_2 - VAR_3;

            VAR_5 = (VAR_8->buf->file_pos + VAR_4 + VAR_0 - 1)
                       & ~((off_t) VAR_0 - 1);

            if (VAR_5 <= VAR_8->buf->file_last) {
                VAR_4 = VAR_5 - VAR_8->buf->file_pos;
            }

            VAR_3 += VAR_4;
            break;
        }

        VAR_3 += VAR_4;
        VAR_6 = VAR_8->buf->file_pos + VAR_4;
        VAR_8 = VAR_8->next;

    } while (VAR_8
             && VAR_8->buf->in_file
             && VAR_3 < VAR_2
             && VAR_7 == VAR_8->buf->file->fd
             && VAR_6 == VAR_8->buf->file_pos);

    *VAR_1 = VAR_8;

    return VAR_3;
}
