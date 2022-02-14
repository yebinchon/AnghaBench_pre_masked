
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * zv_objset; int zv_name; int zv_state_lock; int zv_suspend_lock; } ;
typedef TYPE_1__ zvol_state_t ;
typedef int objset_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,TYPE_1__*) ;
 int FUNC_5 (int ,int ,int,int ,TYPE_1__*,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int * FUNC_9 (int ,char) ;
 int FUNC_10 (TYPE_1__*) ;

int
FUNC_11(zvol_state_t *VAR_4, boolean_t VAR_5)
{
 objset_t *VAR_6;
 int VAR_7, VAR_8 = 0;
 boolean_t VAR_9;

 FUNC_0(FUNC_2(&VAR_4->zv_suspend_lock));
 FUNC_0(FUNC_1(&VAR_4->zv_state_lock));
 if (!FUNC_7(&VAR_3)) {
  VAR_8 = FUNC_8(&VAR_3);
  if (!VAR_8)
   return (FUNC_3(VAR_2));
 }

 VAR_9 = (VAR_5 || (FUNC_9(VAR_4->zv_name, '@') != ((void*)0)));
 VAR_7 = FUNC_5(VAR_4->zv_name, VAR_1, VAR_9, VAR_0, VAR_4, &VAR_6);
 if (VAR_7)
  goto out_mutex;

 VAR_4->zv_objset = VAR_6;

 VAR_7 = FUNC_10(VAR_4);

 if (VAR_7) {
  FUNC_4(VAR_6, 1, VAR_4);
  VAR_4->zv_objset = ((void*)0);
 }

out_mutex:
 if (VAR_8)
  FUNC_6(&VAR_3);
 return (FUNC_3(VAR_7));
}
