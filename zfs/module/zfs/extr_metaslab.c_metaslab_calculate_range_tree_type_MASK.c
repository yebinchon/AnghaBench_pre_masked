
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdev_ms_shift; int vdev_ashift; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int range_seg_type_t ;
struct TYPE_6__ {int ms_start; } ;
typedef TYPE_2__ metaslab_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static range_seg_type_t
FUNC_0(vdev_t *VAR_3, metaslab_t *VAR_4,
    uint64_t *VAR_5, uint64_t *VAR_6)
{
 if (VAR_3->vdev_ms_shift - VAR_3->vdev_ashift < 32 &&
     !VAR_2) {
  *VAR_6 = VAR_3->vdev_ashift;
  *VAR_5 = VAR_4->ms_start;
  return (VAR_0);
 } else {
  *VAR_6 = 0;
  *VAR_5 = 0;
  return (VAR_1);
 }
}
