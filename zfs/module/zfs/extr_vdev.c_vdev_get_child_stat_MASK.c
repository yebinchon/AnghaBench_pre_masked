
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vdev_removing; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_7__ {int vs_scan_removing; scalar_t__* vs_bytes; scalar_t__* vs_ops; } ;
typedef TYPE_2__ vdev_stat_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(vdev_t *VAR_1, vdev_stat_t *VAR_2, vdev_stat_t *VAR_3)
{
 for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->vs_ops[VAR_4] += VAR_3->vs_ops[VAR_4];
  VAR_2->vs_bytes[VAR_4] += VAR_3->vs_bytes[VAR_4];
 }

 VAR_3->vs_scan_removing = VAR_1->vdev_removing;
}
