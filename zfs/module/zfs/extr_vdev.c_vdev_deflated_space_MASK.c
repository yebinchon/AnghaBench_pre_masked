
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_deflate_ratio; scalar_t__ vdev_isl2cache; } ;
typedef TYPE_1__ vdev_t ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

int64_t
FUNC_1(vdev_t *VAR_2, int64_t VAR_3)
{
 FUNC_0((VAR_3 & (VAR_1-1)) == 0);
 FUNC_0(VAR_2->vdev_deflate_ratio != 0 || VAR_2->vdev_isl2cache);

 return ((VAR_3 >> VAR_0) * VAR_2->vdev_deflate_ratio);
}
