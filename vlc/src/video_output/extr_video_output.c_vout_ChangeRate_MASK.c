
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_5__ {int display; float rate; int control; int dummy; } ;
typedef TYPE_2__ vout_thread_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(vout_thread_t *VAR_0, float VAR_1)
{
    vout_thread_sys_t *VAR_2 = VAR_0->p;
    FUNC_0(!VAR_2->dummy);
    FUNC_0(VAR_2->display);

    FUNC_1(&VAR_2->control);
    VAR_2->rate = VAR_1;
    FUNC_2(&VAR_2->control);
}
