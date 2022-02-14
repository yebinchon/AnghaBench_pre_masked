
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_9__ {int mouse; } ;
typedef TYPE_3__ vout_control_cmd_t ;
typedef int vlc_mouse_t ;
struct TYPE_7__ {int control; int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;

void FUNC_3(vout_thread_t *VAR_1, const vlc_mouse_t *VAR_2)
{
    FUNC_0(!VAR_1->p->dummy);
    FUNC_0(VAR_2);
    vout_control_cmd_t VAR_3;
    FUNC_2(&VAR_3, VAR_0);
    VAR_3.mouse = *VAR_2;

    FUNC_1(&VAR_1->p->control, &VAR_3);
}
