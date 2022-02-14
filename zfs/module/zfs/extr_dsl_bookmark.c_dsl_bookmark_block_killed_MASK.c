
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int ds_bookmarks; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_16__ {scalar_t__ zbm_creation_txg; int zbm_flags; int zbm_uncompressed_freed_before_next_snap; int zbm_compressed_freed_before_next_snap; int zbm_referenced_freed_before_next_snap; } ;
struct TYPE_18__ {int dbn_lock; int dbn_dirty; TYPE_1__ dbn_phys; } ;
typedef TYPE_3__ dsl_bookmark_node_t ;
typedef int dmu_tx_t ;
struct TYPE_19__ {scalar_t__ blk_birth; } ;
typedef TYPE_4__ blkptr_t ;
struct TYPE_20__ {scalar_t__ ds_prev_snap_txg; } ;


 TYPE_3__* FUNC_0 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_4__ const*) ;
 scalar_t__ FUNC_2 (TYPE_4__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_4__ const*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_5__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(dsl_dataset_t *VAR_2, const blkptr_t *VAR_3, dmu_tx_t *VAR_4)
{



 for (dsl_bookmark_node_t *VAR_5 = FUNC_3(&VAR_2->ds_bookmarks);
     VAR_5 != ((void*)0) && VAR_5->dbn_phys.zbm_creation_txg >=
     FUNC_6(VAR_2)->ds_prev_snap_txg;
     VAR_5 = FUNC_0(&VAR_2->ds_bookmarks, VAR_5)) {




  if (VAR_3->blk_birth <= VAR_5->dbn_phys.zbm_creation_txg &&
      (VAR_5->dbn_phys.zbm_flags & VAR_1)) {
   FUNC_7(&VAR_5->dbn_lock);
   VAR_5->dbn_phys.zbm_referenced_freed_before_next_snap +=
       FUNC_4(FUNC_5(VAR_2), VAR_3);
   VAR_5->dbn_phys.zbm_compressed_freed_before_next_snap +=
       FUNC_1(VAR_3);
   VAR_5->dbn_phys.zbm_uncompressed_freed_before_next_snap +=
       FUNC_2(VAR_3);
   VAR_5->dbn_dirty = VAR_0;
   FUNC_8(&VAR_5->dbn_lock);
  }
 }
}
