
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
struct TYPE_7__ {int conf_ctx; } ;
typedef TYPE_3__ ngx_cycle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(ngx_cycle_t *VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_thread_pool_t **VAR_6;
    ngx_thread_pool_conf_t *VAR_7;

    if (VAR_2 != VAR_1
        && VAR_2 != VAR_0)
    {
        return;
    }

    VAR_7 = (ngx_thread_pool_conf_t *) FUNC_0(VAR_4->conf_ctx,
                                                  VAR_3);

    if (VAR_7 == ((void*)0)) {
        return;
    }

    VAR_6 = VAR_7->pools.elts;

    for (VAR_5 = 0; VAR_5 < VAR_7->pools.nelts; VAR_5++) {
        FUNC_1(VAR_6[VAR_5]);
    }
}
