
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_5__ {int is_display_filled; } ;
struct TYPE_7__ {int display_lock; int * display; int window_lock; TYPE_1__ display_cfg; int dummy; } ;
typedef TYPE_3__ vout_thread_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

void FUNC_4(vout_thread_t *VAR_0, bool VAR_1)
{
    vout_thread_sys_t *VAR_2 = VAR_0->p;
    FUNC_0(!VAR_2->dummy);

    FUNC_1(&VAR_2->window_lock);
    VAR_2->display_cfg.is_display_filled = VAR_1;


    FUNC_1(&VAR_2->display_lock);
    FUNC_2(&VAR_2->window_lock);

    if (VAR_2->display != ((void*)0))
        FUNC_3(VAR_2->display, VAR_1);
    FUNC_2(&VAR_2->display_lock);
}
