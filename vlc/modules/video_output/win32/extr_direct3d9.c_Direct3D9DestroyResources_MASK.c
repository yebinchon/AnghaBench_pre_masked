
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_6__ {int * pool; int * dx_render; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_0)
{
    FUNC_0(VAR_0);
    if (VAR_0->sys->dx_render)
    {
        FUNC_2(VAR_0->sys->dx_render);
        VAR_0->sys->dx_render = ((void*)0);
    }
    if (VAR_0->sys->pool)
    {
        FUNC_3(VAR_0->sys->pool);
        VAR_0->sys->pool = ((void*)0);
    }
    FUNC_1(VAR_0);
}
