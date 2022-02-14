
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int zfs_bookmark_phys_t ;
typedef int uint64_t ;
struct TYPE_16__ {int dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_17__ {int ds_bookmarks; int ds_bookmarks_obj; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_19__ {scalar_t__ zbm_creation_txg; int zbm_flags; } ;
struct TYPE_18__ {scalar_t__ dbn_dirty; TYPE_4__ dbn_phys; int dbn_name; } ;
typedef TYPE_3__ dsl_bookmark_node_t ;
typedef int dmu_tx_t ;
struct TYPE_20__ {scalar_t__ ds_prev_snap_txg; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 TYPE_3__* FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_5__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int ,int ,int,int,TYPE_4__*,int *) ;

void
FUNC_10(dsl_dataset_t *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_pool_t *VAR_4 = FUNC_6(VAR_3);

 if (FUNC_7(VAR_2))
  return;







 for (dsl_bookmark_node_t *VAR_5 = FUNC_5(&VAR_2->ds_bookmarks);
     VAR_5 != ((void*)0) && VAR_5->dbn_phys.zbm_creation_txg >=
     FUNC_8(VAR_2)->ds_prev_snap_txg;
     VAR_5 = FUNC_2(&VAR_2->ds_bookmarks, VAR_5)) {
  if (VAR_5->dbn_dirty) {




   FUNC_0(VAR_5->dbn_phys.zbm_flags & VAR_1);
   FUNC_3(FUNC_9(VAR_4->dp_meta_objset,
       VAR_2->ds_bookmarks_obj,
       VAR_5->dbn_name, sizeof (uint64_t),
       sizeof (zfs_bookmark_phys_t) / sizeof (uint64_t),
       &VAR_5->dbn_phys, VAR_3));
   VAR_5->dbn_dirty = VAR_0;
  }
 }






}
