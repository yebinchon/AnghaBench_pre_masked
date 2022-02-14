
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t max; } ;
typedef TYPE_1__ ngx_pool_t ;


 void* FUNC_0 (TYPE_1__*,size_t) ;
 void* FUNC_1 (TYPE_1__*,size_t,int) ;

void *
FUNC_2(ngx_pool_t *VAR_0, size_t VAR_1)
{

    if (VAR_1 <= VAR_0->max) {
        return FUNC_1(VAR_0, VAR_1, 1);
    }


    return FUNC_0(VAR_0, VAR_1);
}
