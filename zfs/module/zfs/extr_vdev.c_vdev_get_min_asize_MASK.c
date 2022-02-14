
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_asize; unsigned long long vdev_ms_shift; int vdev_min_asize; int vdev_children; int * vdev_ops; struct TYPE_3__* vdev_top; struct TYPE_3__* vdev_parent; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;


 int FUNC_0 (int,unsigned long long) ;
 int VAR_0 ;

uint64_t
FUNC_1(vdev_t *VAR_1)
{
 vdev_t *VAR_2 = VAR_1->vdev_parent;





 if (VAR_2 == ((void*)0))
  return (VAR_1->vdev_asize);





 if (VAR_1 == VAR_1->vdev_top)
  return (FUNC_0(VAR_1->vdev_asize, 1ULL << VAR_1->vdev_ms_shift));





 if (VAR_2->vdev_ops == &VAR_0)
  return ((VAR_2->vdev_min_asize + VAR_2->vdev_children - 1) /
      VAR_2->vdev_children);

 return (VAR_2->vdev_min_asize);
}
