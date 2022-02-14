
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* p_sys; int pf_destroy; int pf_update; int pf_validate; } ;
typedef TYPE_1__ subpicture_updater_t ;
struct TYPE_12__ {int b_absolute; int i_original_picture_height; int i_original_picture_width; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_13__ {int ref_cnt; int lock; TYPE_4__* p_overlay; } ;
typedef TYPE_3__ bluray_spu_updater_sys_t ;
struct TYPE_14__ {TYPE_3__* p_updater; int height; int width; } ;
typedef TYPE_4__ bluray_overlay_t ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static subpicture_t *FUNC_5(bluray_overlay_t *VAR_3)
{
    bluray_spu_updater_sys_t *VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (FUNC_3(VAR_4 == ((void*)0))) {
        return ((void*)0);
    }

    VAR_4->p_overlay = VAR_3;

    subpicture_updater_t VAR_5 = {
        .pf_validate = VAR_2,
        .pf_update = VAR_1,
        .pf_destroy = VAR_0,
        .p_sys = VAR_4,
    };

    subpicture_t *VAR_6 = FUNC_2(&VAR_5);
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_4);
        return ((void*)0);
    }

    VAR_6->i_original_picture_width = VAR_3->width;
    VAR_6->i_original_picture_height = VAR_3->height;
    VAR_6->b_absolute = 1;

    FUNC_4(&VAR_4->lock);
    VAR_4->ref_cnt = 2;

    VAR_3->p_updater = VAR_4;

    return VAR_6;
}
