
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vdev_children; int vdev_nparity; TYPE_1__* vdev_top; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_4__ {int vdev_ashift; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static uint64_t
FUNC_1(vdev_t *VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2;
 uint64_t VAR_3 = VAR_0->vdev_top->vdev_ashift;
 uint64_t VAR_4 = VAR_0->vdev_children;
 uint64_t VAR_5 = VAR_0->vdev_nparity;

 VAR_2 = ((VAR_1 - 1) >> VAR_3) + 1;
 VAR_2 += VAR_5 * ((VAR_2 + VAR_4 - VAR_5 - 1) / (VAR_4 - VAR_5));
 VAR_2 = FUNC_0(VAR_2, VAR_5 + 1) << VAR_3;

 return (VAR_2);
}
