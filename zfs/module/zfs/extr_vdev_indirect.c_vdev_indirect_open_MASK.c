
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vdev_ashift; scalar_t__ vdev_asize; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(vdev_t *VAR_2, uint64_t *VAR_3, uint64_t *VAR_4,
    uint64_t *VAR_5)
{
 *VAR_3 = *VAR_4 = VAR_2->vdev_asize +
     VAR_1 + VAR_0;
 *VAR_5 = VAR_2->vdev_ashift;
 return (0);
}
