
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vlc_timer_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_3__ {int lock; int reschedule; scalar_t__ interval; scalar_t__ value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4 (vlc_timer_t VAR_1, bool VAR_2,
                         vlc_tick_t VAR_3, vlc_tick_t VAR_4)
{
    if (VAR_3 == VAR_0)
        VAR_4 = 0;
    else
    if (!VAR_2)
        VAR_3 += FUNC_3();

    FUNC_1 (&VAR_1->lock);
    VAR_1->value = VAR_3;
    VAR_1->interval = VAR_4;
    FUNC_0 (&VAR_1->reschedule);
    FUNC_2 (&VAR_1->lock);
}
