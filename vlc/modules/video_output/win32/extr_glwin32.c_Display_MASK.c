
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int source; TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_5__ {int gl; int vgl; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int picture_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_1, picture_t *VAR_2)
{
    vout_display_sys_t *VAR_3 = VAR_1->sys;
    FUNC_0(VAR_2);

    if (FUNC_1 (VAR_3->gl) == VAR_0)
    {
        FUNC_3 (VAR_3->vgl, &VAR_1->source);
        FUNC_2 (VAR_3->gl);
    }
}
