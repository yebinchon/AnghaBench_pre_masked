
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vdev_children; int * vdev_child; TYPE_1__* vdev_top; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_4__ {unsigned long long vdev_ashift; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned long long) ;
 int FUNC_2 (int ,int ) ;

uint64_t
FUNC_3(vdev_t *VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2 = FUNC_1(VAR_1, 1ULL << VAR_0->vdev_top->vdev_ashift);
 uint64_t VAR_3;

 for (int VAR_4 = 0; VAR_4 < VAR_0->vdev_children; VAR_4++) {
  VAR_3 = FUNC_2(VAR_0->vdev_child[VAR_4], VAR_1);
  VAR_2 = FUNC_0(VAR_2, VAR_3);
 }

 return (VAR_2);
}
