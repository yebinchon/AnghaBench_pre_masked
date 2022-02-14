
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_children; int * vdev_child; } ;
typedef TYPE_1__ vdev_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(vdev_t *VAR_0)
{
 for (int VAR_1 = 0; VAR_1 < VAR_0->vdev_children; VAR_1++)
  FUNC_0(VAR_0->vdev_child[VAR_1]);
}
