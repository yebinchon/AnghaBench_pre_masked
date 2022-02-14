
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* anw; } ;
typedef TYPE_2__ vout_display_sys_t ;
struct TYPE_11__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_12__ {int b_locked; } ;
typedef TYPE_4__ picture_sys_t ;
struct TYPE_13__ {int p_surface; } ;
typedef TYPE_5__ android_window ;
struct TYPE_9__ {int (* unlockAndPost ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(vout_display_sys_t *VAR_0,
                                        android_window *VAR_1,
                                        picture_t *VAR_2)
{
    picture_sys_t *VAR_3 = VAR_2->p_sys;

    if (!VAR_3->b_locked)
        return;

    VAR_0->anw->unlockAndPost(VAR_1->p_surface);

    VAR_3->b_locked = 0;
}
