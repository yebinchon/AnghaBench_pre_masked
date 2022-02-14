
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_7__ {int * display; int dummy; } ;
typedef TYPE_2__ vout_thread_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(vout_thread_t *VAR_0)
{
    vout_thread_sys_t *VAR_1 = VAR_0->p;
    FUNC_0(!VAR_1->dummy);

    if (VAR_1->display != ((void*)0))
        FUNC_2(VAR_0);

    FUNC_1(VAR_0);
}
