
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int * os_next_write_raw; scalar_t__ os_encrypted; int * os_synced_dnodes; } ;
typedef TYPE_1__ objset_t ;
struct TYPE_18__ {int ds_dbuf; TYPE_7__* ds_dir; int ds_deadlist; int ds_pending_deadlist; TYPE_1__* ds_objset; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_19__ {size_t tx_txg; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_20__ {int dd_livelist; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int *,int ,int *,TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_7__*,TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *) ;

void
FUNC_12(dsl_dataset_t *VAR_4, dmu_tx_t *VAR_5)
{
 objset_t *VAR_6 = VAR_4->ds_objset;

 FUNC_2(&VAR_4->ds_pending_deadlist,
     VAR_3, &VAR_4->ds_deadlist, VAR_5);

 if (FUNC_7(&VAR_4->ds_dir->dd_livelist)) {
  FUNC_9(VAR_4, VAR_5);
  if (FUNC_10(VAR_4)) {
   FUNC_8(VAR_4->ds_dir, VAR_5, VAR_1);
  }
 }

 FUNC_6(VAR_4, VAR_5);

 if (VAR_6->os_synced_dnodes != ((void*)0)) {
  FUNC_11(VAR_6->os_synced_dnodes);
  VAR_6->os_synced_dnodes = ((void*)0);
 }

 if (VAR_6->os_encrypted)
  VAR_6->os_next_write_raw[VAR_5->tx_txg & VAR_2] = VAR_0;
 else
  FUNC_1(VAR_6->os_next_write_raw[VAR_5->tx_txg & VAR_2]);

 FUNC_0(!FUNC_4(VAR_6, FUNC_5(VAR_5)));

 FUNC_3(VAR_4->ds_dbuf, VAR_4);
}
