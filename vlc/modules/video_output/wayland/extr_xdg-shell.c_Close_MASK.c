
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int wl; } ;
struct TYPE_7__ {int * wl; } ;
struct TYPE_9__ {TYPE_2__ display; TYPE_1__ handle; TYPE_4__* sys; } ;
typedef TYPE_3__ vout_window_t ;
struct TYPE_10__ {int registry; int compositor; int * shm; int wm_base; int surface; int toplevel; int * cursor_theme; int * cursor_surface; int * deco_manager; int * deco; int outputs; int seats; int lock; int thread; } ;
typedef TYPE_4__ vout_window_sys_t ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(vout_window_t *VAR_0)
{
    vout_window_sys_t *VAR_1 = VAR_0->sys;

    FUNC_3(VAR_1->thread);
    FUNC_4(VAR_1->thread, ((void*)0));

    FUNC_5(&VAR_1->lock);
    FUNC_2(&VAR_1->seats);
    FUNC_1(VAR_1->outputs);






    if (VAR_1->cursor_surface != ((void*)0))
        FUNC_11(VAR_1->cursor_surface);
    if (VAR_1->cursor_theme != ((void*)0))
        FUNC_7(VAR_1->cursor_theme);
    FUNC_13(VAR_1->toplevel);
    FUNC_12(VAR_1->surface);
    FUNC_14(VAR_1->wm_base);
    FUNC_11(VAR_0->handle.wl);
    if (VAR_1->shm != ((void*)0))
        FUNC_10(VAR_1->shm);
    FUNC_6(VAR_1->compositor);
    FUNC_9(VAR_1->registry);
    FUNC_8(VAR_0->display.wl);
    FUNC_0(VAR_1);
}
