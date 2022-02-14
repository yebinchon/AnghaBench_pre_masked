
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vdev_top_zap; size_t vdev_children; struct TYPE_3__** vdev_child; int vdev_spa; struct TYPE_3__* vdev_top; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(vdev_t *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->vdev_top == VAR_1 && VAR_1->vdev_top_zap != 0 &&
     FUNC_1(FUNC_0(VAR_1->vdev_spa),
     VAR_1->vdev_top_zap, VAR_0) == 0)
  VAR_2++;

 for (uint64_t VAR_3 = 0; VAR_3 < VAR_1->vdev_children; VAR_3++)
  VAR_2 += FUNC_2(VAR_1->vdev_child[VAR_3]);

 return (VAR_2);
}
