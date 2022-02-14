
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_children; struct TYPE_3__** vdev_child; int vdev_path; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static boolean_t
FUNC_1(vdev_t *VAR_2)
{





 for (int VAR_3 = 0; VAR_3 < VAR_2->vdev_children; VAR_3++)
  if (FUNC_1(VAR_2->vdev_child[VAR_3]))
   return (VAR_1);

 return (VAR_0);
}
