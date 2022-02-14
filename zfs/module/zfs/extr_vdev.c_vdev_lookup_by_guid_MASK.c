
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vdev_guid; int vdev_children; struct TYPE_4__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;



vdev_t *
FUNC_0(vdev_t *VAR_0, uint64_t VAR_1)
{
 vdev_t *VAR_2;

 if (VAR_0->vdev_guid == VAR_1)
  return (VAR_0);

 for (int VAR_3 = 0; VAR_3 < VAR_0->vdev_children; VAR_3++)
  if ((VAR_2 = FUNC_0(VAR_0->vdev_child[VAR_3], VAR_1)) !=
      ((void*)0))
   return (VAR_2);

 return (((void*)0));
}
