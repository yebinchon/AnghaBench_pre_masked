
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int dl_object; int dl_os; int dl_lock; } ;
typedef TYPE_1__ dsl_deadlist_t ;
struct TYPE_12__ {scalar_t__ bpo_object; } ;
struct TYPE_10__ {int dle_mintxg; TYPE_6__ dle_bpobj; } ;
typedef TYPE_2__ dsl_deadlist_entry_t ;
typedef int dmu_tx_t ;
struct TYPE_11__ {scalar_t__ dp_empty_bpobj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_6__*,int ,int *) ;
 int FUNC_6 (TYPE_6__*,int ,int ) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_9(dsl_deadlist_t *VAR_0, dsl_deadlist_entry_t *VAR_1,
    uint64_t VAR_2, dmu_tx_t *VAR_3)
{
 FUNC_0(FUNC_1(&VAR_0->dl_lock));
 if (VAR_1->dle_bpobj.bpo_object !=
     FUNC_7(VAR_0->dl_os)->dp_empty_bpobj) {
  FUNC_5(&VAR_1->dle_bpobj, VAR_2, VAR_3);
 } else {
  FUNC_3(&VAR_1->dle_bpobj);
  FUNC_4(VAR_0->dl_os, VAR_3);
  FUNC_2(FUNC_6(&VAR_1->dle_bpobj, VAR_0->dl_os, VAR_2));
  FUNC_2(FUNC_8(VAR_0->dl_os, VAR_0->dl_object,
      VAR_1->dle_mintxg, VAR_2, VAR_3));
 }
}
