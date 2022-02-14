
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zo_lock; int zo_actions; } ;
typedef TYPE_1__ zfs_onexit_t ;
struct TYPE_9__ {int za_data; int (* za_func ) (int ) ;} ;
typedef TYPE_2__ zfs_onexit_action_node_t ;
typedef int uint64_t ;
typedef int minor_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,TYPE_1__**) ;

int
FUNC_8(minor_t VAR_1, uint64_t VAR_2, boolean_t VAR_3)
{
 zfs_onexit_t *VAR_4;
 zfs_onexit_action_node_t *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_7(VAR_1, &VAR_4);
 if (VAR_6)
  return (VAR_6);

 FUNC_3(&VAR_4->zo_lock);
 VAR_5 = FUNC_6(VAR_4, VAR_2);
 if (VAR_5 != ((void*)0)) {
  FUNC_2(&VAR_4->zo_actions, VAR_5);
  FUNC_4(&VAR_4->zo_lock);
  if (VAR_3)
   VAR_5->za_func(VAR_5->za_data);
  FUNC_1(VAR_5, sizeof (zfs_onexit_action_node_t));
 } else {
  FUNC_4(&VAR_4->zo_lock);
  VAR_6 = FUNC_0(VAR_0);
 }

 return (VAR_6);
}
