
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_children; struct TYPE_4__** vdev_child; int * vdev_ops; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

boolean_t
FUNC_3(vdev_t *VAR_7)
{
 FUNC_0(FUNC_1(VAR_7->vdev_spa, VAR_4, VAR_3) != 0);

 if (VAR_7->vdev_ops == &VAR_5)
  return (VAR_1);






 if (VAR_7->vdev_ops == &VAR_6 && (VAR_7->vdev_children > 2 ||
     !FUNC_2(VAR_7->vdev_child[1], VAR_2)))
  return (VAR_1);

 for (int VAR_8 = 0; VAR_8 < VAR_7->vdev_children; VAR_8++) {
  if (FUNC_3(VAR_7->vdev_child[VAR_8]))
   return (VAR_1);
 }

 return (VAR_0);
}
