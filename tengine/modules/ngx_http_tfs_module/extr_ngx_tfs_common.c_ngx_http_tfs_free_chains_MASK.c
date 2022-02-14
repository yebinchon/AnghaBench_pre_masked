
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__* buf; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_5__ {scalar_t__ file_pos; int start; int last; int pos; } ;



void
FUNC_0(ngx_chain_t **VAR_0, ngx_chain_t **VAR_1)
{
    ngx_chain_t *VAR_2;

    VAR_2 = *VAR_1;

    while(VAR_2) {
        VAR_2->buf->pos = VAR_2->buf->start;
        VAR_2->buf->last = VAR_2->buf->start;
        VAR_2->buf->file_pos = 0;

        VAR_2->next = *VAR_0;
        *VAR_0 = VAR_2;
    }
}
