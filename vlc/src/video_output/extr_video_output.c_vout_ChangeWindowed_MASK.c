
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_6__ {int window; } ;
struct TYPE_8__ {int window_lock; TYPE_1__ display_cfg; int dummy; } ;
typedef TYPE_3__ vout_thread_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(vout_thread_t *VAR_0)
{
    FUNC_0(!VAR_0->p->dummy);
    FUNC_1(&VAR_0->p->window_lock);
    vout_thread_sys_t *VAR_1 = VAR_0->p;
    FUNC_4(VAR_1->display_cfg.window);

    FUNC_3(VAR_0);
    FUNC_2(&VAR_0->p->window_lock);
}
