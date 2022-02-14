
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_11__ {int eventq; TYPE_3__* embed; } ;
typedef TYPE_5__ vout_display_sys_t ;
struct wl_surface {int dummy; } ;
struct wl_display {int dummy; } ;
typedef int picture_t ;
struct TYPE_8__ {struct wl_surface* wl; } ;
struct TYPE_7__ {struct wl_display* wl; } ;
struct TYPE_9__ {TYPE_2__ handle; TYPE_1__ display; } ;


 int FUNC_0 (struct wl_display*,int ) ;
 int FUNC_1 (struct wl_surface*) ;

__attribute__((used)) static void FUNC_2(vout_display_t *VAR_0, picture_t *VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_0->sys;
    struct wl_display *VAR_3 = VAR_2->embed->display.wl;
    struct wl_surface *VAR_4 = VAR_2->embed->handle.wl;

    FUNC_1(VAR_4);
    FUNC_0(VAR_3, VAR_2->eventq);

    (void) VAR_1;
}
