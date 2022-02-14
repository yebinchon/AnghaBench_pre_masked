
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int wl; } ;
struct TYPE_13__ {struct wl_display* wl; } ;
struct TYPE_14__ {TYPE_1__ handle; TYPE_3__ display; TYPE_5__* sys; } ;
typedef TYPE_4__ vout_window_t ;
struct TYPE_12__ {int configured; } ;
struct TYPE_15__ {TYPE_2__ wm; int toplevel; } ;
typedef TYPE_5__ vout_window_sys_t ;
struct TYPE_16__ {int height; int width; scalar_t__ is_decorated; scalar_t__ is_fullscreen; } ;
typedef TYPE_6__ vout_window_cfg_t ;
struct wl_display {int dummy; } ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (struct wl_display*) ;
 int FUNC_3 (struct wl_display*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(vout_window_t *VAR_2, const vout_window_cfg_t *restrict VAR_3)
{
    vout_window_sys_t *VAR_4 = VAR_2->sys;
    struct wl_display *VAR_5 = VAR_2->display.wl;

    if (VAR_3->is_fullscreen)
        FUNC_5(VAR_4->toplevel, ((void*)0));
    else
        FUNC_6(VAR_4->toplevel);




    if (VAR_3->is_decorated)
        return VAR_0;

    FUNC_1(VAR_2, VAR_3->width, VAR_3->height);
    FUNC_4(VAR_2->handle.wl);
    FUNC_3(VAR_5);






    return VAR_1;
}
