
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t vdev_children; struct TYPE_6__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_7__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ) ;

vdev_t *
FUNC_2(spa_t *VAR_2, uint64_t VAR_3)
{
 vdev_t *VAR_4 = VAR_2->spa_root_vdev;

 FUNC_0(FUNC_1(VAR_2, VAR_1, VAR_0) != 0);

 if (VAR_3 < VAR_4->vdev_children) {
  FUNC_0(VAR_4->vdev_child[VAR_3] != ((void*)0));
  return (VAR_4->vdev_child[VAR_3]);
 }

 return (((void*)0));
}
