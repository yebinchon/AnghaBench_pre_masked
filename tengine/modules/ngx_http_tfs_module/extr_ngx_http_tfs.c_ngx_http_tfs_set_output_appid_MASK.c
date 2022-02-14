
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {int * json_output; TYPE_2__* out_bufs; int pool; int log; } ;
typedef TYPE_1__ ngx_http_tfs_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ ngx_chain_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ,int ) ;

ngx_int_t
FUNC_2(ngx_http_tfs_t *VAR_2, uint64_t VAR_3)
{
    ngx_chain_t *VAR_4, **VAR_5;

    VAR_2->json_output = FUNC_1(VAR_2->log, VAR_2->pool);
    if (VAR_2->json_output == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_4 = VAR_2->out_bufs, VAR_5 = &VAR_2->out_bufs; VAR_4; VAR_4 = VAR_4->next) {
        VAR_5 = &VAR_4->next;
    }

    VAR_4 = FUNC_0(VAR_2->json_output, VAR_3);
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_5 = VAR_4;
    return VAR_1;
}
