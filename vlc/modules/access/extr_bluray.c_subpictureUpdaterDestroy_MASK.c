
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * p_sys; } ;
struct TYPE_7__ {TYPE_1__ updater; } ;
typedef TYPE_2__ subpicture_t ;
typedef int bluray_spu_updater_sys_t ;
struct TYPE_8__ {int b_on_vout; int status; } ;
typedef TYPE_3__ bluray_overlay_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(subpicture_t *VAR_1)
{
    bluray_spu_updater_sys_t *VAR_2 = VAR_1->updater.p_sys;
    bluray_overlay_t *VAR_3 = FUNC_1(VAR_2);

    if (VAR_3) {

        VAR_3->status = VAR_0;
        VAR_3->b_on_vout = 0;
        FUNC_2(VAR_2);
    }

    FUNC_0(VAR_2);
}
