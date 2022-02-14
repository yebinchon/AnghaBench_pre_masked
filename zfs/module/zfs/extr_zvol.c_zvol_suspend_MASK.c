
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zv_open_count; int zv_state_lock; int zv_suspend_ref; int zv_suspend_lock; } ;
typedef TYPE_1__ zvol_state_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (char const*,int ) ;
 int FUNC_6 (TYPE_1__*) ;

zvol_state_t *
FUNC_7(const char *VAR_1)
{
 zvol_state_t *VAR_2;

 VAR_2 = FUNC_5(VAR_1, VAR_0);

 if (VAR_2 == ((void*)0))
  return (((void*)0));


 FUNC_0(FUNC_1(&VAR_2->zv_state_lock));
 FUNC_0(FUNC_2(&VAR_2->zv_suspend_lock));

 FUNC_3(&VAR_2->zv_suspend_ref);

 if (VAR_2->zv_open_count > 0)
  FUNC_6(VAR_2);





 FUNC_4(&VAR_2->zv_state_lock);


 return (VAR_2);
}
