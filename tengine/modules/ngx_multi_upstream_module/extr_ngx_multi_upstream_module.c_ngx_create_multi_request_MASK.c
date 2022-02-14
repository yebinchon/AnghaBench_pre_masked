
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_pool_t ;
struct TYPE_6__ {int * pool; void* data; } ;
typedef TYPE_1__ ngx_multi_request_t ;
struct TYPE_7__ {int log; } ;
typedef TYPE_2__ ngx_connection_t ;


 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;

ngx_multi_request_t*
FUNC_3(ngx_connection_t *VAR_0, void *VAR_1)
{
    ngx_multi_request_t *VAR_2;
    ngx_pool_t *VAR_3;

    VAR_3 = FUNC_0(4096, VAR_0->log);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2 = FUNC_2(VAR_3, sizeof(ngx_multi_request_t));
    if (VAR_2 == ((void*)0)) {
        FUNC_1(VAR_3);
        return ((void*)0);
    }

    VAR_2->data = VAR_1;
    VAR_2->pool = VAR_3;

    return VAR_2;
}
