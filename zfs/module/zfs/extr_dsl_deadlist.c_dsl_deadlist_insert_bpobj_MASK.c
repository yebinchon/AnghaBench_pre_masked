
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_12__ {int dl_tree; TYPE_1__* dl_phys; int dl_dbuf; int dl_os; int dl_lock; } ;
typedef TYPE_2__ dsl_deadlist_t ;
struct TYPE_13__ {scalar_t__ dle_mintxg; } ;
typedef TYPE_3__ dsl_deadlist_entry_t ;
typedef int dmu_tx_t ;
typedef int bpobj_t ;
typedef int avl_index_t ;
struct TYPE_11__ {int dl_uncomp; int dl_comp; int dl_used; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,scalar_t__,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(dsl_deadlist_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3,
    dmu_tx_t *VAR_4)
{
 dsl_deadlist_entry_t VAR_5;
 dsl_deadlist_entry_t *VAR_6;
 avl_index_t VAR_7;
 uint64_t VAR_8, VAR_9, VAR_10;
 bpobj_t VAR_11;

 FUNC_0(FUNC_1(&VAR_1->dl_lock));

 FUNC_2(FUNC_6(&VAR_11, VAR_1->dl_os, VAR_2));
 FUNC_2(FUNC_7(&VAR_11, &VAR_8, &VAR_9, &VAR_10));
 FUNC_5(&VAR_11);

 FUNC_10(VAR_1);

 FUNC_9(VAR_1->dl_dbuf, VAR_4);
 VAR_1->dl_phys->dl_used += VAR_8;
 VAR_1->dl_phys->dl_comp += VAR_9;
 VAR_1->dl_phys->dl_uncomp += VAR_10;

 VAR_5.dle_mintxg = VAR_3;
 VAR_6 = FUNC_3(&VAR_1->dl_tree, &VAR_5, &VAR_7);
 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_4(&VAR_1->dl_tree, VAR_7, VAR_0);
 FUNC_8(VAR_1, VAR_6, VAR_2, VAR_4);
}
