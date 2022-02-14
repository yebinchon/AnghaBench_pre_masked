
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct killarg {int * tx; int * ds; } ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_2__ {scalar_t__ ds_unique_bytes; int ds_prev_snap_txg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int,int ,struct killarg*) ;

__attribute__((used)) static void
FUNC_5(dsl_dataset_t *VAR_3, dmu_tx_t *VAR_4)
{
 struct killarg VAR_5;
 VAR_5.ds = VAR_3;
 VAR_5.tx = VAR_4;
 FUNC_2(FUNC_4(VAR_3,
     FUNC_3(VAR_3)->ds_prev_snap_txg, VAR_1 |
     VAR_0, VAR_2, &VAR_5));
 FUNC_0(!FUNC_1(VAR_3) ||
     FUNC_3(VAR_3)->ds_unique_bytes == 0);
}
