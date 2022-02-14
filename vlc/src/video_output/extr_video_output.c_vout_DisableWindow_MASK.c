
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_5__ {int window; } ;
struct TYPE_7__ {int window_enabled; int window_lock; TYPE_1__ display_cfg; int * dec_device; } ;
typedef TYPE_3__ vout_thread_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(vout_thread_t *VAR_0)
{
    vout_thread_sys_t *VAR_1 = VAR_0->p;
    FUNC_1(&VAR_1->window_lock);
    if (VAR_1->dec_device)
    {
        FUNC_0(VAR_1->dec_device);
        VAR_1->dec_device = ((void*)0);
    }
    if (VAR_1->window_enabled) {
        FUNC_3(VAR_1->display_cfg.window);
        VAR_1->window_enabled = 0;
    }
    FUNC_2(&VAR_1->window_lock);
}
