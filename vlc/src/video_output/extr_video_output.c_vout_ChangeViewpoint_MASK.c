
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_8__ {int viewpoint; } ;
struct TYPE_10__ {int control; int window_lock; TYPE_1__ display_cfg; int dummy; } ;
typedef TYPE_3__ vout_thread_sys_t ;
struct TYPE_11__ {int viewpoint; } ;
typedef TYPE_4__ vout_control_cmd_t ;
typedef int vlc_viewpoint_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;

void FUNC_5(vout_thread_t *VAR_1,
                          const vlc_viewpoint_t *VAR_2)
{
    vout_thread_sys_t *VAR_3 = VAR_1->p;
    FUNC_0(!VAR_3->dummy);
    vout_control_cmd_t VAR_4;

    FUNC_1(&VAR_3->window_lock);
    VAR_3->display_cfg.viewpoint = *VAR_2;

    FUNC_2(&VAR_3->window_lock);

    FUNC_4(&VAR_4, VAR_0);
    VAR_4.viewpoint = *VAR_2;
    FUNC_3(&VAR_3->control, &VAR_4);
}
