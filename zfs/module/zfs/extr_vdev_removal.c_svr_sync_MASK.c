
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* svr_bytes_done; } ;
typedef TYPE_2__ spa_vdev_removal_t ;
struct TYPE_6__ {int sr_copied; } ;
struct TYPE_8__ {TYPE_1__ spa_removing_phys; TYPE_2__* spa_vdev_removal; } ;
typedef TYPE_3__ spa_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;

void
FUNC_2(spa_t *VAR_1, dmu_tx_t *VAR_2)
{
 spa_vdev_removal_t *VAR_3 = VAR_1->spa_vdev_removal;
 int VAR_4 = FUNC_0(VAR_2) & VAR_0;

 if (VAR_3 == ((void*)0))
  return;







 if (VAR_3->svr_bytes_done[VAR_4] == 0)
  return;




 VAR_1->spa_removing_phys.sr_copied += VAR_3->svr_bytes_done[VAR_4];
 VAR_3->svr_bytes_done[VAR_4] = 0;

 FUNC_1(VAR_1, VAR_2);
}
