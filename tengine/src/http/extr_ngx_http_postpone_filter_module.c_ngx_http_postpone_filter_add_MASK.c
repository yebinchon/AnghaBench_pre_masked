
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {int pool; TYPE_2__* postponed; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_6__ {int * out; struct TYPE_6__* next; int * request; } ;
typedef TYPE_2__ ngx_http_postponed_request_t ;
typedef int ngx_chain_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int **,int *) ;
 TYPE_2__* FUNC_1 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2, ngx_chain_t *VAR_3)
{
    ngx_http_postponed_request_t *VAR_4, **VAR_5;

    if (VAR_2->postponed) {
        for (VAR_4 = VAR_2->postponed; VAR_4->next; VAR_4 = VAR_4->next) { }

        if (VAR_4->request == ((void*)0)) {
            goto found;
        }

        VAR_5 = &VAR_4->next;

    } else {
        VAR_5 = &VAR_2->postponed;
    }

    VAR_4 = FUNC_1(VAR_2->pool, sizeof(ngx_http_postponed_request_t));
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_5 = VAR_4;

    VAR_4->request = ((void*)0);
    VAR_4->out = ((void*)0);
    VAR_4->next = ((void*)0);

found:

    if (FUNC_0(VAR_2->pool, &VAR_4->out, VAR_3) == VAR_1) {
        return VAR_1;
    }

    return VAR_0;
}
