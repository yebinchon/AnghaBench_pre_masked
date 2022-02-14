
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * zv_objset; int zv_state_lock; int zv_suspend_lock; } ;
typedef TYPE_1__ zvol_state_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(zvol_state_t *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->zv_suspend_lock));
 FUNC_0(FUNC_1(&VAR_0->zv_state_lock));

 FUNC_4(VAR_0);

 FUNC_3(VAR_0->zv_objset, 1, VAR_0);
 VAR_0->zv_objset = ((void*)0);
}
