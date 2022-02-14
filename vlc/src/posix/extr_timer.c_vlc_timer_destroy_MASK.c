
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vlc_timer_t ;
struct TYPE_4__ {int lock; int reschedule; int thread; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5 (vlc_timer_t VAR_0)
{
    FUNC_1 (VAR_0->thread);
    FUNC_3 (VAR_0->thread, ((void*)0));
    FUNC_2 (&VAR_0->reschedule);
    FUNC_4 (&VAR_0->lock);
    FUNC_0 (VAR_0);
}
