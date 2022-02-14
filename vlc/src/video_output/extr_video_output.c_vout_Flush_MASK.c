
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_6__ {int display; int control; int dummy; } ;
typedef TYPE_2__ vout_thread_sys_t ;
typedef int vlc_tick_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(vout_thread_t *VAR_0, vlc_tick_t VAR_1)
{
    vout_thread_sys_t *VAR_2 = VAR_0->p;
    FUNC_0(!VAR_2->dummy);
    FUNC_0(VAR_2->display);

    FUNC_2(&VAR_2->control);
    FUNC_1(VAR_0, 0, VAR_1);
    FUNC_3(&VAR_2->control);
}
