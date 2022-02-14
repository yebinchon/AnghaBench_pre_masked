
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_11__ {int type; int viewpoint; int mouse; int boolean; int * string; } ;
typedef TYPE_3__ vout_control_cmd_t ;
struct TYPE_9__ {int display_lock; int display; } ;


 int FUNC_0 (TYPE_2__*,int *,int *,int *,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;




 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(vout_thread_t *VAR_0, vout_control_cmd_t VAR_1)
{
    switch(VAR_1.type) {
    case 131:
        FUNC_0(VAR_0, ((void*)0), VAR_1.string, ((void*)0), 0);
        break;
    case 130:
        FUNC_0(VAR_0, ((void*)0), ((void*)0), &VAR_1.boolean, 0);
        break;
    case 129:
        FUNC_1(VAR_0, &VAR_1.mouse);
        break;
    case 128:
        FUNC_2(&VAR_0->p->display_lock);
        FUNC_4(VAR_0->p->display, &VAR_1.viewpoint);
        FUNC_3(&VAR_0->p->display_lock);
        break;
    default:
        break;
    }
    FUNC_5(&VAR_1);
}
