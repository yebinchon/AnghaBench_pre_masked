
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_12__ {int dl_lock; int dl_object; TYPE_1__* dl_phys; int dl_dbuf; int * dl_os; } ;
typedef TYPE_2__ dsl_deadlist_t ;
struct TYPE_15__ {scalar_t__ bpo_object; } ;
struct TYPE_13__ {TYPE_7__ dle_bpobj; int dle_mintxg; } ;
typedef TYPE_3__ dsl_deadlist_entry_t ;
typedef int dmu_tx_t ;
struct TYPE_14__ {scalar_t__ dp_empty_bpobj; } ;
struct TYPE_11__ {int dl_uncomp; int dl_comp; int dl_used; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,scalar_t__,int *) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,int *,scalar_t__) ;
 int FUNC_8 (TYPE_7__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_9 (int ,int *) ;
 TYPE_6__* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ,scalar_t__,int *) ;
 int FUNC_14 (int *,int ,int ,int *) ;

void
FUNC_15(dsl_deadlist_entry_t *VAR_1, dsl_deadlist_t *VAR_2,
    dmu_tx_t *VAR_3)
{
 uint64_t VAR_4, VAR_5, VAR_6, VAR_7;
 objset_t *VAR_8 = VAR_2->dl_os;

 FUNC_11(&VAR_2->dl_lock);
 FUNC_1(FUNC_14(VAR_8, VAR_2->dl_object, VAR_1->dle_mintxg, VAR_3));
 FUNC_1(FUNC_8(&VAR_1->dle_bpobj, &VAR_5, &VAR_6, &VAR_7));
 FUNC_9(VAR_2->dl_dbuf, VAR_3);
 VAR_2->dl_phys->dl_used -= VAR_5;
 VAR_2->dl_phys->dl_comp -= VAR_6;
 VAR_2->dl_phys->dl_uncomp -= VAR_7;
 if (VAR_1->dle_bpobj.bpo_object == FUNC_10(VAR_8)->dp_empty_bpobj)
  FUNC_4(VAR_8, VAR_3);
 else
  FUNC_5(VAR_8, VAR_1->dle_bpobj.bpo_object, VAR_3);
 FUNC_3(&VAR_1->dle_bpobj);
 VAR_4 = FUNC_2(VAR_8, VAR_0, VAR_3);
 FUNC_1(FUNC_7(&VAR_1->dle_bpobj, VAR_8, VAR_4));
 FUNC_1(FUNC_13(VAR_8, VAR_2->dl_object, VAR_1->dle_mintxg,
     VAR_4, VAR_3));
 FUNC_0(FUNC_6(&VAR_1->dle_bpobj));
 FUNC_12(&VAR_2->dl_lock);
}
