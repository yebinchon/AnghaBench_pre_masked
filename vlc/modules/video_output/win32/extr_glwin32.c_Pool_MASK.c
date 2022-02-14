
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_5__ {int * pool; int gl; int vgl; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int picture_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static picture_pool_t *FUNC_3(vout_display_t *VAR_1, unsigned VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_1->sys;

    if (!VAR_3->pool && FUNC_0 (VAR_3->gl) == VAR_0)
    {
        VAR_3->pool = FUNC_2(VAR_3->vgl, VAR_2);
        FUNC_1 (VAR_3->gl);
    }
    return VAR_3->pool;
}
