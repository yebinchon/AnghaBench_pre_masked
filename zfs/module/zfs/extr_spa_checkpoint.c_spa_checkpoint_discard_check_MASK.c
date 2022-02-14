
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ spa_checkpoint_txg; } ;
typedef TYPE_1__ spa_t ;
typedef int dmu_tx_t ;
struct TYPE_6__ {TYPE_1__* dp_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_5, dmu_tx_t *VAR_6)
{
 spa_t *VAR_7 = FUNC_2(VAR_6)->dp_spa;

 if (!FUNC_3(VAR_7, VAR_2))
  return (FUNC_0(VAR_4));

 if (VAR_7->spa_checkpoint_txg == 0)
  return (FUNC_0(VAR_3));

 FUNC_1(FUNC_5(FUNC_4(VAR_7),
     VAR_0, VAR_1));

 return (0);
}
