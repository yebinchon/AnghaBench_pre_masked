
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_pool_t ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_4__* buf; } ;
typedef TYPE_1__ ngx_chain_t ;
struct TYPE_7__ {scalar_t__ start; scalar_t__ end; } ;


 TYPE_1__* FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (int *,size_t) ;

ngx_chain_t *
FUNC_2(ngx_pool_t *VAR_0,
    ngx_chain_t **VAR_1, size_t VAR_2)
{
    ngx_chain_t *VAR_3;

    if (*VAR_1) {
        VAR_3 = *VAR_1;
        if ((size_t) (VAR_3->buf->end - VAR_3->buf->start) >= VAR_2) {
            *VAR_1 = VAR_3->next;
            VAR_3->next = ((void*)0);
            return VAR_3;
        }
    }

    VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_3->buf = FUNC_1(VAR_0, VAR_2);
    if (VAR_3->buf == ((void*)0)) {
        return ((void*)0);
    }

    VAR_3->next = ((void*)0);

    return VAR_3;
}
