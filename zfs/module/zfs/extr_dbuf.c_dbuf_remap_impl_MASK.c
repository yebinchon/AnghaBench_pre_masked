
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int spa_t ;
typedef int krwlock_t ;
struct TYPE_13__ {TYPE_7__* ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_14__ {scalar_t__ dn_objset; } ;
typedef TYPE_2__ dnode_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {scalar_t__ drica_os; scalar_t__ drica_blk_birth; int * drica_tx; } ;
typedef TYPE_3__ dbuf_remap_impl_callback_arg_t ;
struct TYPE_16__ {scalar_t__ blk_birth; } ;
typedef TYPE_4__ blkptr_t ;
struct TYPE_17__ {scalar_t__ dd_origin_txg; int dd_pending_allocs; int dd_pending_frees; int dd_livelist; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,TYPE_4__*,int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_14(dnode_t *VAR_3, blkptr_t *VAR_4, krwlock_t *VAR_5, dmu_tx_t *VAR_6)
{
 blkptr_t VAR_7 = *VAR_4;
 spa_t *VAR_8 = FUNC_4(VAR_3->dn_objset);
 dbuf_remap_impl_callback_arg_t VAR_9;

 FUNC_0(FUNC_7(FUNC_11(VAR_8)));

 VAR_9.drica_os = VAR_3->dn_objset;
 VAR_9.drica_blk_birth = VAR_4->blk_birth;
 VAR_9.drica_tx = VAR_6;
 if (FUNC_13(VAR_8, &VAR_7, VAR_2,
     &VAR_9)) {
  if (VAR_3->dn_objset != FUNC_12(VAR_8)) {
   dsl_dataset_t *VAR_10 = FUNC_3(VAR_3->dn_objset);
   if (FUNC_5(&VAR_10->ds_dir->dd_livelist) &&
       VAR_4->blk_birth > VAR_10->ds_dir->dd_origin_txg) {
    FUNC_0(!FUNC_1(VAR_4));
    FUNC_0(FUNC_6(VAR_10->ds_dir));
    FUNC_0(FUNC_10(VAR_8,
        VAR_1));
    FUNC_2(&VAR_10->ds_dir->dd_pending_frees,
        VAR_4);
    FUNC_2(&VAR_10->ds_dir->dd_pending_allocs,
        &VAR_7);
   }
  }







  if (VAR_5 != ((void*)0))
   FUNC_8(VAR_5, VAR_0);
  *VAR_4 = VAR_7;
  if (VAR_5 != ((void*)0))
   FUNC_9(VAR_5);
 }
}
