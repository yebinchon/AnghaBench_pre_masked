
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_thread_pool_t ;
struct TYPE_5__ {size_t nelts; int ** elts; } ;
struct TYPE_6__ {TYPE_1__ pools; } ;
typedef TYPE_2__ ngx_thread_pool_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {int pool; int log; int conf_ctx; } ;
typedef TYPE_3__ ngx_cycle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_cycle_t *VAR_7)
{
    ngx_uint_t VAR_8;
    ngx_thread_pool_t **VAR_9;
    ngx_thread_pool_conf_t *VAR_10;

    if (VAR_4 != VAR_3
        && VAR_4 != VAR_2)
    {
        return VAR_1;
    }

    VAR_10 = (ngx_thread_pool_conf_t *) FUNC_0(VAR_7->conf_ctx,
                                                  VAR_6);

    if (VAR_10 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_2(&VAR_5);

    VAR_9 = VAR_10->pools.elts;

    for (VAR_8 = 0; VAR_8 < VAR_10->pools.nelts; VAR_8++) {
        if (FUNC_1(VAR_9[VAR_8], VAR_7->log, VAR_7->pool) != VAR_1) {
            return VAR_0;
        }
    }

    return VAR_1;
}
