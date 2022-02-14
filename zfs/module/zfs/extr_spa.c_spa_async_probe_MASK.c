
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_children; struct TYPE_4__** vdev_child; scalar_t__ vdev_probe_wanted; } ;
typedef TYPE_1__ vdev_t ;
typedef int spa_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(spa_t *VAR_1, vdev_t *VAR_2)
{
 if (VAR_2->vdev_probe_wanted) {
  VAR_2->vdev_probe_wanted = VAR_0;
  FUNC_0(VAR_2);
 }

 for (int VAR_3 = 0; VAR_3 < VAR_2->vdev_children; VAR_3++)
  FUNC_1(VAR_1, VAR_2->vdev_child[VAR_3]);
}
