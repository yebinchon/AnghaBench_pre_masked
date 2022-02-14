
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* p; } ;
typedef TYPE_4__ vout_thread_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_8__ {scalar_t__ last; scalar_t__ timestamp; } ;
struct TYPE_7__ {scalar_t__ timestamp; } ;
struct TYPE_9__ {int display; int control; TYPE_2__ step; TYPE_1__ displayed; int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(vout_thread_t *VAR_1, vlc_tick_t *VAR_2)
{
    FUNC_1(!VAR_1->p->dummy);
    FUNC_1(VAR_1->p->display);
    *VAR_2 = 0;

    FUNC_2(&VAR_1->p->control);
    if (VAR_1->p->step.last == VAR_0)
        VAR_1->p->step.last = VAR_1->p->displayed.timestamp;

    if (FUNC_0(VAR_1, ((void*)0)) == 0) {
        VAR_1->p->step.timestamp = VAR_1->p->displayed.timestamp;

        if (VAR_1->p->step.last != VAR_0 &&
            VAR_1->p->step.timestamp > VAR_1->p->step.last) {
            *VAR_2 = VAR_1->p->step.timestamp - VAR_1->p->step.last;
            VAR_1->p->step.last = VAR_1->p->step.timestamp;

        }
    }
    FUNC_3(&VAR_1->p->control);
}
