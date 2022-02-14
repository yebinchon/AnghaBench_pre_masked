
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vout_window_t ;
struct TYPE_10__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_11__ {int sys; int p_sensors; scalar_t__ vgl; TYPE_3__* gl; } ;
typedef TYPE_2__ vout_display_sys_t ;
struct TYPE_12__ {int * surface; } ;
typedef TYPE_3__ vlc_gl_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    vlc_gl_t *VAR_2 = VAR_1->gl;

    if (VAR_2)
    {
        vout_window_t *VAR_3 = VAR_2->surface;
        if (VAR_1->vgl)
        {
            FUNC_4 (VAR_2);
            FUNC_8(VAR_1->vgl);
            FUNC_6 (VAR_2);
        }
        FUNC_5 (VAR_2);
        FUNC_7(VAR_3);
    }

    FUNC_1(VAR_1->p_sensors);
    FUNC_0(FUNC_2(VAR_0), &VAR_1->sys);

    FUNC_3(VAR_1);
}
