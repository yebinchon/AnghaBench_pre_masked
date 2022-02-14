
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_pool_t ;
struct TYPE_5__ {TYPE_1__* buf; struct TYPE_5__* next; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_4__ {int file_last; int file_pos; int last; int pos; } ;



void
FUNC_0(ngx_pool_t *VAR_0, ngx_chain_t *VAR_1)
{
    ngx_chain_t *VAR_2;

    for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next) {
        VAR_2->buf->pos = VAR_2->buf->last;
        VAR_2->buf->file_pos = VAR_2->buf->file_last;
    }
}
