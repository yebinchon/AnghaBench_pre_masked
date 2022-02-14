
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
struct TYPE_10__ {TYPE_6__ dle_bpobj; int dle_mintxg; } ;
typedef TYPE_2__ dsl_deadlist_entry_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
struct TYPE_11__ {scalar_t__ dp_empty_bpobj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_6__*,int const*,int ,int *) ;
 int FUNC_7 (TYPE_6__*,int ,int ) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_10(dsl_deadlist_t *VAR_1, dsl_deadlist_entry_t *VAR_2,
    const blkptr_t *VAR_3, boolean_t VAR_4, dmu_tx_t *VAR_5)
{
 FUNC_0(FUNC_1(&VAR_1->dl_lock));
 if (VAR_2->dle_bpobj.bpo_object ==
     FUNC_8(VAR_1->dl_os)->dp_empty_bpobj) {
  uint64_t VAR_6 = FUNC_3(VAR_1->dl_os, VAR_0, VAR_5);
  FUNC_4(&VAR_2->dle_bpobj);
  FUNC_5(VAR_1->dl_os, VAR_5);
  FUNC_2(FUNC_7(&VAR_2->dle_bpobj, VAR_1->dl_os, VAR_6));
  FUNC_2(FUNC_9(VAR_1->dl_os, VAR_1->dl_object,
      VAR_2->dle_mintxg, VAR_6, VAR_5));
 }
 FUNC_6(&VAR_2->dle_bpobj, VAR_3, VAR_4, VAR_5);
}
