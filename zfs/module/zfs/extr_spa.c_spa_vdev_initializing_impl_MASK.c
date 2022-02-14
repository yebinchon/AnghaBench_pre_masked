
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vdev_initialize_state; int vdev_children; struct TYPE_5__** vdev_child; int vdev_initialize_lock; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_6__ {int spa_activities_lock; } ;
typedef TYPE_2__ spa_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int,int ) ;

__attribute__((used)) static boolean_t
FUNC_5(vdev_t *VAR_6)
{
 spa_t *VAR_7 = VAR_6->vdev_spa;
 boolean_t VAR_8;

 FUNC_0(FUNC_4(VAR_7, VAR_3 | VAR_4, VAR_2));
 FUNC_0(FUNC_1(&VAR_7->spa_activities_lock));

 FUNC_3(&VAR_7->spa_activities_lock);
 FUNC_2(&VAR_6->vdev_initialize_lock);
 FUNC_2(&VAR_7->spa_activities_lock);

 VAR_8 = (VAR_6->vdev_initialize_state == VAR_5);
 FUNC_3(&VAR_6->vdev_initialize_lock);

 if (VAR_8)
  return (VAR_1);

 for (int VAR_9 = 0; VAR_9 < VAR_6->vdev_children; VAR_9++) {
  if (FUNC_5(VAR_6->vdev_child[VAR_9]))
   return (VAR_1);
 }

 return (VAR_0);
}
