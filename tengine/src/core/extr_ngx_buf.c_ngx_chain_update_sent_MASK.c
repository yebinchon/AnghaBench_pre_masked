
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_7__ {TYPE_4__* buf; struct TYPE_7__* next; } ;
typedef TYPE_1__ ngx_chain_t ;
struct TYPE_8__ {size_t pos; size_t last; int file_pos; scalar_t__ in_file; int file_last; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;

ngx_chain_t *
FUNC_3(ngx_chain_t *VAR_0, off_t VAR_1)
{
    off_t VAR_2;

    for ( ; VAR_0; VAR_0 = VAR_0->next) {

        if (FUNC_2(VAR_0->buf)) {
            continue;
        }

        if (VAR_1 == 0) {
            break;
        }

        VAR_2 = FUNC_1(VAR_0->buf);

        if (VAR_1 >= VAR_2) {
            VAR_1 -= VAR_2;

            if (FUNC_0(VAR_0->buf)) {
                VAR_0->buf->pos = VAR_0->buf->last;
            }

            if (VAR_0->buf->in_file) {
                VAR_0->buf->file_pos = VAR_0->buf->file_last;
            }

            continue;
        }

        if (FUNC_0(VAR_0->buf)) {
            VAR_0->buf->pos += (size_t) VAR_1;
        }

        if (VAR_0->buf->in_file) {
            VAR_0->buf->file_pos += VAR_1;
        }

        break;
    }

    return VAR_0;
}
