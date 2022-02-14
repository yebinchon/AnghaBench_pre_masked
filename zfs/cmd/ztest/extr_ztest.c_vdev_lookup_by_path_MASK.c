
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_children; struct TYPE_4__** vdev_child; int * vdev_path; } ;
typedef TYPE_1__ vdev_t ;


 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static vdev_t *
FUNC_1(vdev_t *VAR_0, const char *VAR_1)
{
 vdev_t *VAR_2;
 int VAR_3;

 if (VAR_0->vdev_path != ((void*)0) && FUNC_0(VAR_1, VAR_0->vdev_path) == 0)
  return (VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_0->vdev_children; VAR_3++)
  if ((VAR_2 = FUNC_1(VAR_0->vdev_child[VAR_3], VAR_1)) !=
      ((void*)0))
   return (VAR_2);

 return (((void*)0));
}
