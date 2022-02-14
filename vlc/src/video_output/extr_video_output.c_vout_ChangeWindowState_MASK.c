
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p; } ;
typedef TYPE_3__ vout_thread_t ;
struct TYPE_5__ {int window; } ;
struct TYPE_6__ {int window_lock; TYPE_1__ display_cfg; int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned int) ;

void FUNC_4(vout_thread_t *VAR_0, unsigned VAR_1)
{
    FUNC_0(!VAR_0->p->dummy);
    FUNC_1(&VAR_0->p->window_lock);
    FUNC_3(VAR_0->p->display_cfg.window, VAR_1);
    FUNC_2(&VAR_0->p->window_lock);
}
