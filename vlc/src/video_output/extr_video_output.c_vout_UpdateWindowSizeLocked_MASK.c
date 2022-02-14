
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_7__ {int window; } ;
struct TYPE_9__ {int display_lock; TYPE_1__ display_cfg; int original; int * display; int window_lock; } ;
typedef TYPE_3__ vout_thread_sys_t ;


 int FUNC_0 (TYPE_2__*,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *,unsigned int*,unsigned int*) ;
 int FUNC_5 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_6(vout_thread_t *VAR_0)
{
    vout_thread_sys_t *VAR_1 = VAR_0->p;
    unsigned VAR_2, VAR_3;

    FUNC_1(&VAR_1->window_lock);

    FUNC_2(&VAR_1->display_lock);
    if (VAR_1->display != ((void*)0)) {
        FUNC_4(VAR_0, &VAR_1->original, &VAR_2, &VAR_3);
        FUNC_3(&VAR_1->display_lock);

        FUNC_0(VAR_0, "requested window size: %ux%u", VAR_2, VAR_3);
        FUNC_5(VAR_1->display_cfg.window, VAR_2, VAR_3);
    } else
        FUNC_3(&VAR_1->display_lock);
}
