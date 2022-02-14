
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_13__ {scalar_t__ active_buffers; int eventq; int shm; int * viewporter; int * viewport; TYPE_3__* embed; } ;
typedef TYPE_5__ vout_display_sys_t ;
struct wl_surface {int dummy; } ;
struct wl_display {int dummy; } ;
struct TYPE_10__ {struct wl_surface* wl; } ;
struct TYPE_9__ {struct wl_display* wl; } ;
struct TYPE_11__ {TYPE_2__ handle; TYPE_1__ display; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*,char*,...) ;
 int FUNC_2 (struct wl_display*) ;
 int FUNC_3 (struct wl_display*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wl_surface*,int *,int ,int ) ;
 int FUNC_7 (struct wl_surface*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;
    struct wl_display *VAR_2 = VAR_1->embed->display.wl;
    struct wl_surface *VAR_3 = VAR_1->embed->handle.wl;

    FUNC_6(VAR_3, ((void*)0), 0, 0);
    FUNC_7(VAR_3);


    while (VAR_1->active_buffers > 0) {
        FUNC_1(VAR_0, "%zu buffer(s) still active", VAR_1->active_buffers);
        FUNC_3(VAR_2, VAR_1->eventq);
    }
    FUNC_1(VAR_0, "no active buffers left");

    if (VAR_1->viewport != ((void*)0))
        FUNC_8(VAR_1->viewport);
    if (VAR_1->viewporter != ((void*)0))
        FUNC_9(VAR_1->viewporter);
    FUNC_5(VAR_1->shm);
    FUNC_2(VAR_2);
    FUNC_4(VAR_1->eventq);
    FUNC_0(VAR_1);
}
