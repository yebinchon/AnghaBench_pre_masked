
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int dl_lock; int dl_object; int dl_os; int dl_tree; scalar_t__ dl_oldfmt; } ;
typedef TYPE_1__ dsl_deadlist_t ;
struct TYPE_8__ {int dle_bpobj; int dle_mintxg; } ;
typedef TYPE_2__ dsl_deadlist_entry_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ,int ,int *) ;

void
FUNC_9(dsl_deadlist_t *VAR_2, uint64_t VAR_3, dmu_tx_t *VAR_4)
{
 uint64_t VAR_5;
 dsl_deadlist_entry_t *VAR_6;

 if (VAR_2->dl_oldfmt)
  return;

 VAR_6 = FUNC_5(sizeof (*VAR_6), VAR_0);
 VAR_6->dle_mintxg = VAR_3;

 FUNC_6(&VAR_2->dl_lock);
 FUNC_4(VAR_2);

 VAR_5 = FUNC_2(VAR_2->dl_os, VAR_1, VAR_4);
 FUNC_0(FUNC_3(&VAR_6->dle_bpobj, VAR_2->dl_os, VAR_5));
 FUNC_1(&VAR_2->dl_tree, VAR_6);

 FUNC_0(FUNC_8(VAR_2->dl_os, VAR_2->dl_object,
     VAR_3, VAR_5, VAR_4));
 FUNC_7(&VAR_2->dl_lock);
}
