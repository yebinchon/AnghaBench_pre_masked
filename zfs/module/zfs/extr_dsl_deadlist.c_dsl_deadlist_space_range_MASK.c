
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int dl_lock; int dl_tree; int dl_cache; int dl_bpobj; scalar_t__ dl_oldfmt; } ;
typedef TYPE_1__ dsl_deadlist_t ;
struct TYPE_11__ {scalar_t__ dlce_mintxg; scalar_t__ dlce_bytes; scalar_t__ dlce_comp; scalar_t__ dlce_uncomp; } ;
typedef TYPE_2__ dsl_deadlist_cache_entry_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(dsl_deadlist_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3,
    uint64_t *VAR_4, uint64_t *VAR_5, uint64_t *VAR_6)
{
 dsl_deadlist_cache_entry_t *VAR_7;
 dsl_deadlist_cache_entry_t VAR_8;
 avl_index_t VAR_9;

 if (VAR_1->dl_oldfmt) {
  FUNC_1(FUNC_4(&VAR_1->dl_bpobj,
      VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));
  return;
 }

 *VAR_4 = *VAR_5 = *VAR_6 = 0;

 FUNC_6(&VAR_1->dl_lock);
 FUNC_5(VAR_1);
 VAR_8.dlce_mintxg = VAR_2;
 VAR_7 = FUNC_2(&VAR_1->dl_cache, &VAR_8, &VAR_9);






 if (VAR_7 == ((void*)0))
  VAR_7 = FUNC_3(&VAR_1->dl_cache, VAR_9, VAR_0);

 for (; VAR_7 && VAR_7->dlce_mintxg < VAR_3;
     VAR_7 = FUNC_0(&VAR_1->dl_tree, VAR_7)) {
  *VAR_4 += VAR_7->dlce_bytes;
  *VAR_5 += VAR_7->dlce_comp;
  *VAR_6 += VAR_7->dlce_uncomp;
 }

 FUNC_7(&VAR_1->dl_lock);
}
