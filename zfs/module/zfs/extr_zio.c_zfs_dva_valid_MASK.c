
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t vdev_asize; int * vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_8__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef int dva_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
struct TYPE_6__ {size_t vdev_children; TYPE_2__** vdev_child; } ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int const*) ;
 size_t FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_4 (TYPE_2__*,int ) ;

boolean_t
FUNC_5(spa_t *VAR_5, const dva_t *VAR_6, const blkptr_t *VAR_7)
{
 uint64_t VAR_8 = FUNC_3(VAR_6);

 if (VAR_8 >= VAR_5->spa_root_vdev->vdev_children)
  return (VAR_0);

 vdev_t *VAR_9 = VAR_5->spa_root_vdev->vdev_child[VAR_8];
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 if (VAR_9->vdev_ops == &VAR_3)
  return (VAR_0);

 if (VAR_9->vdev_ops == &VAR_4) {
  return (VAR_0);
 }

 uint64_t VAR_10 = FUNC_2(VAR_6);
 uint64_t VAR_11 = FUNC_1(VAR_6);

 if (FUNC_0(VAR_7))
  VAR_11 = FUNC_4(VAR_9, VAR_2);
 if (VAR_10 + VAR_11 > VAR_9->vdev_asize)
  return (VAR_0);

 return (VAR_1);
}
