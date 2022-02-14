
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_5__ {int display_lock; int * display; int dummy; } ;
typedef TYPE_2__ vout_thread_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int,unsigned int) ;

void FUNC_4(vout_thread_t *VAR_0,
                            unsigned VAR_1, unsigned VAR_2)
{
    vout_thread_sys_t *VAR_3 = VAR_0->p;

    FUNC_0(!VAR_3->dummy);


    FUNC_1(&VAR_3->display_lock);
    if (VAR_3->display != ((void*)0))
        FUNC_3(VAR_3->display, VAR_1, VAR_2);
    FUNC_2(&VAR_3->display_lock);
}
