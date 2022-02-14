
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cond; int mutex; int p_events; int * pp_last_event; } ;
typedef TYPE_1__ OmxEventQueue ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(OmxEventQueue *VAR_0)
{
    VAR_0->pp_last_event = &VAR_0->p_events;
    FUNC_1(&VAR_0->mutex);
    FUNC_0(&VAR_0->cond);
}
