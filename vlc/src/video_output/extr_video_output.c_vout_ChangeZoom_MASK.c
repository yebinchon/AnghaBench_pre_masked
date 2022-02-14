
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* p; } ;
typedef TYPE_3__ vout_thread_t ;
struct TYPE_7__ {unsigned int num; unsigned int den; } ;
struct TYPE_8__ {TYPE_1__ zoom; } ;
struct TYPE_10__ {int display_lock; int * display; int window_lock; TYPE_2__ display_cfg; int dummy; } ;
typedef TYPE_4__ vout_thread_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int*,unsigned int*,unsigned int,unsigned int,int ) ;
 int FUNC_4 (int *,unsigned int,unsigned int) ;
 int FUNC_5 (TYPE_3__*) ;

void FUNC_6(vout_thread_t *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    vout_thread_sys_t *VAR_3 = VAR_0->p;
    FUNC_0(!VAR_3->dummy);

    if (VAR_1 != 0 && VAR_2 != 0) {
        FUNC_3(&VAR_1, &VAR_2, VAR_1, VAR_2, 0);
    } else {
        VAR_1 = 1;
        VAR_2 = 1;
    }

    if (VAR_1 * 10 < VAR_2) {
        VAR_1 = 1;
        VAR_2 = 10;
    } else if (VAR_1 > VAR_2 * 10) {
        VAR_1 = 10;
        VAR_2 = 1;
    }

    FUNC_1(&VAR_3->window_lock);
    VAR_3->display_cfg.zoom.num = VAR_1;
    VAR_3->display_cfg.zoom.den = VAR_2;

    FUNC_5(VAR_0);

    FUNC_1(&VAR_3->display_lock);
    FUNC_2(&VAR_3->window_lock);

    if (VAR_3->display != ((void*)0))
        FUNC_4(VAR_3->display, VAR_1, VAR_2);
    FUNC_2(&VAR_3->display_lock);
}
