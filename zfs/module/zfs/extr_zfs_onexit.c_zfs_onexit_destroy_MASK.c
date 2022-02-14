
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zo_lock; int zo_actions; int za_data; int (* za_func ) (int ) ;} ;
typedef TYPE_1__ zfs_onexit_t ;
typedef TYPE_1__ zfs_onexit_action_node_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void
FUNC_8(zfs_onexit_t *VAR_0)
{
 zfs_onexit_action_node_t *VAR_1;

 FUNC_5(&VAR_0->zo_lock);
 while ((VAR_1 = FUNC_2(&VAR_0->zo_actions)) != ((void*)0)) {
  FUNC_3(&VAR_0->zo_actions, VAR_1);
  FUNC_6(&VAR_0->zo_lock);
  VAR_1->za_func(VAR_1->za_data);
  FUNC_0(VAR_1, sizeof (zfs_onexit_action_node_t));
  FUNC_5(&VAR_0->zo_lock);
 }
 FUNC_6(&VAR_0->zo_lock);

 FUNC_1(&VAR_0->zo_actions);
 FUNC_4(&VAR_0->zo_lock);
 FUNC_0(VAR_0, sizeof (zfs_onexit_t));
}
