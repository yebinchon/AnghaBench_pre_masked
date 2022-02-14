
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {struct TYPE_5__* next; int buf; } ;
typedef TYPE_1__ ngx_chain_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;

ngx_int_t
FUNC_1(ngx_pool_t *VAR_2, ngx_chain_t **VAR_3, ngx_chain_t *VAR_4)
{
    ngx_chain_t *VAR_5, **VAR_6;

    VAR_6 = VAR_3;

    for (VAR_5 = *VAR_3; VAR_5; VAR_5 = VAR_5->next) {
        VAR_6 = &VAR_5->next;
    }

    while (VAR_4) {
        VAR_5 = FUNC_0(VAR_2);
        if (VAR_5 == ((void*)0)) {
            *VAR_6 = ((void*)0);
            return VAR_0;
        }

        VAR_5->buf = VAR_4->buf;
        *VAR_6 = VAR_5;
        VAR_6 = &VAR_5->next;
        VAR_4 = VAR_4->next;
    }

    *VAR_6 = ((void*)0);

    return VAR_1;
}
