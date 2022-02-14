
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* p; } ;
typedef TYPE_5__ vout_thread_t ;
typedef int vlc_tick_t ;
struct TYPE_10__ {int window; } ;
struct TYPE_9__ {int is_on; int date; } ;
struct TYPE_8__ {void* last; void* timestamp; } ;
struct TYPE_11__ {int display; int window_lock; TYPE_3__ display_cfg; int control; TYPE_2__ pause; TYPE_1__ step; int dummy; } ;


 int FUNC_0 (TYPE_5__*,int) ;
 void* VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(vout_thread_t *VAR_1, bool VAR_2, vlc_tick_t VAR_3)
{
    FUNC_1(!VAR_1->p->dummy);
    FUNC_1(VAR_1->p->display);

    FUNC_4(&VAR_1->p->control);
    FUNC_1(!VAR_1->p->pause.is_on || !VAR_2);

    if (VAR_1->p->pause.is_on)
        FUNC_0(VAR_1, 0);
    else {
        VAR_1->p->step.timestamp = VAR_0;
        VAR_1->p->step.last = VAR_0;
    }
    VAR_1->p->pause.is_on = VAR_2;
    VAR_1->p->pause.date = VAR_3;
    FUNC_5(&VAR_1->p->control);

    FUNC_2(&VAR_1->p->window_lock);
    FUNC_6(VAR_1->p->display_cfg.window, !VAR_2);
    FUNC_3(&VAR_1->p->window_lock);
}
