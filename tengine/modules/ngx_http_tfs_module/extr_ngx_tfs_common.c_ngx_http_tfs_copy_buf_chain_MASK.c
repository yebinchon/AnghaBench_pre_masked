
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {TYPE_2__* buf; struct TYPE_7__* next; } ;
typedef TYPE_1__ ngx_chain_t ;
struct TYPE_8__ {int pos; int last; } ;
typedef TYPE_2__ ngx_buf_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 TYPE_2__* FUNC_2 (int *,scalar_t__) ;

ngx_buf_t *
FUNC_3(ngx_pool_t *VAR_0, ngx_chain_t *VAR_1)
{
    ngx_int_t VAR_2;
    ngx_buf_t *VAR_3;
    ngx_chain_t *VAR_4;

    if (VAR_1->next == ((void*)0)) {
        return VAR_1->buf;
    }

    VAR_2 = 0;

    for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next) {
        VAR_2 += FUNC_0(VAR_4->buf);
    }

    VAR_3 = FUNC_2(VAR_0, VAR_2);

    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next) {
        VAR_3->last = FUNC_1(VAR_3->last, VAR_4->buf->pos, FUNC_0(VAR_4->buf));
    }
    return VAR_3;
}
