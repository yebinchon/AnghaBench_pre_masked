
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_6__ {int * pool; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int picture_pool_t ;


 int * FUNC_0 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static picture_pool_t *FUNC_1(vout_display_t *VAR_0, unsigned VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_0->sys;

    if (VAR_2->pool == ((void*)0))
        VAR_2->pool = FUNC_0(VAR_0, VAR_1);
    return VAR_2->pool;
}
