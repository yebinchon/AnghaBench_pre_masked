
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ ub_version; } ;
struct TYPE_11__ {int spa_root_vdev; TYPE_1__ spa_uberblock; } ;
typedef TYPE_2__ spa_t ;
typedef int longlong_t ;
struct TYPE_12__ {scalar_t__ tx_txg; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_13__ {TYPE_2__* dp_spa; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_8__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,char*,TYPE_3__*,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, dmu_tx_t *VAR_2)
{
 uint64_t *VAR_3 = VAR_1;
 uint64_t VAR_4 = *VAR_3;
 spa_t *VAR_5 = FUNC_2(VAR_2)->dp_spa;




 FUNC_0(VAR_2->tx_txg != VAR_0);

 FUNC_0(FUNC_1(VAR_4));
 FUNC_0(VAR_4 >= FUNC_4(VAR_5));

 VAR_5->spa_uberblock.ub_version = VAR_4;
 FUNC_5(VAR_5->spa_root_vdev);
 FUNC_3(VAR_5, "set", VAR_2, "version=%lld",
     (longlong_t)VAR_4);
}
