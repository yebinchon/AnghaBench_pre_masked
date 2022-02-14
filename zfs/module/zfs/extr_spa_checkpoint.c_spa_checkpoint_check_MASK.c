
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sr_state; } ;
struct TYPE_8__ {scalar_t__ spa_checkpoint_txg; TYPE_1__ spa_removing_phys; } ;
typedef TYPE_2__ spa_t ;
typedef int dmu_tx_t ;
struct TYPE_9__ {TYPE_2__* dp_spa; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_7, dmu_tx_t *VAR_8)
{
 spa_t *VAR_9 = FUNC_1(VAR_8)->dp_spa;

 if (!FUNC_3(VAR_9, VAR_2))
  return (FUNC_0(VAR_1));

 if (!FUNC_4(VAR_9))
  return (FUNC_0(VAR_6));

 if (VAR_9->spa_removing_phys.sr_state == VAR_0)
  return (FUNC_0(VAR_4));

 if (VAR_9->spa_checkpoint_txg != 0)
  return (FUNC_0(VAR_3));

 if (FUNC_2(VAR_9, VAR_2))
  return (FUNC_0(VAR_5));

 return (0);
}
