
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_6__ {int * display_pool; scalar_t__ private_pool; } ;
typedef TYPE_2__ vout_thread_sys_t ;
typedef int vout_display_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(vout_thread_t *VAR_1, vout_display_t *VAR_2)
{
    vout_thread_sys_t *VAR_3 = VAR_1->p;

    FUNC_0(VAR_3->display_pool && VAR_3->private_pool);

    FUNC_1(VAR_3->private_pool);
    VAR_3->display_pool = ((void*)0);





    FUNC_3(VAR_2);
}
