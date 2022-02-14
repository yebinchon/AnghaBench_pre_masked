
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {struct TYPE_5__* next; int * buf; } ;
typedef TYPE_1__ ngx_chain_t ;
typedef int ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;

ngx_int_t
FUNC_3(ngx_pool_t *VAR_2, ngx_chain_t **VAR_3, ngx_chain_t *VAR_4)
{
    ngx_buf_t *VAR_5;
    ngx_chain_t *VAR_6, **VAR_7;

    VAR_7 = VAR_3;
    for (VAR_6 = *VAR_3; VAR_6; VAR_6 = VAR_6->next) {
        VAR_7 = &VAR_6->next;
    }

    while (VAR_4) {
        VAR_5 = FUNC_0(VAR_2);
        if (VAR_5 == ((void*)0)) {
            return VAR_0;
        }
        FUNC_2(VAR_5, VAR_4->buf, sizeof(ngx_buf_t));
        VAR_6 = FUNC_1(VAR_2);
        if (VAR_6 == ((void*)0)) {
            return VAR_0;
        }
        VAR_6->buf = VAR_5;
        *VAR_7 = VAR_6;
        VAR_7 = &VAR_6->next;
        VAR_4 = VAR_4->next;
    }

    *VAR_7 = ((void*)0);

    return VAR_1;
}
