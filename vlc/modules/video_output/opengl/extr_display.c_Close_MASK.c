
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_6__ {int vgl; int * gl; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int vlc_gl_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    vlc_gl_t *VAR_2 = VAR_1->gl;

    FUNC_1 (VAR_2);
    FUNC_4 (VAR_1->vgl);
    FUNC_3 (VAR_2);

    FUNC_2 (VAR_2);
    FUNC_0 (VAR_1);
}
