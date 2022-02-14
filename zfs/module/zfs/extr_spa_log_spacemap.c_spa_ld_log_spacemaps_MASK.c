
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vdev_t ;
typedef size_t uint64_t ;
struct TYPE_10__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_9__ {size_t vdev_children; int ** vdev_child; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

int
FUNC_6(spa_t *VAR_3)
{
 int VAR_4;

 FUNC_5(VAR_3);

 for (uint64_t VAR_5 = 0; VAR_5 < VAR_3->spa_root_vdev->vdev_children; VAR_5++) {
  vdev_t *VAR_6 = VAR_3->spa_root_vdev->vdev_child[VAR_5];
  VAR_4 = FUNC_4(VAR_6);
  if (VAR_4 != 0)
   return (VAR_4);
 }

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);






 FUNC_0(VAR_3, VAR_2, VAR_0, VAR_1);
 VAR_4 = FUNC_2(VAR_3);
 FUNC_1(VAR_3, VAR_2, VAR_0);

 return (VAR_4);
}
