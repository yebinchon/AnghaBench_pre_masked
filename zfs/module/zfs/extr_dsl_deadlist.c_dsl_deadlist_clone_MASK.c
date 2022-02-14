
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int dl_lock; int dl_os; int dl_tree; scalar_t__ dl_oldfmt; } ;
typedef TYPE_1__ dsl_deadlist_t ;
struct TYPE_9__ {scalar_t__ dle_mintxg; } ;
typedef TYPE_2__ dsl_deadlist_entry_t ;
typedef int dmu_tx_t ;


 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,scalar_t__,int *) ;

uint64_t
FUNC_10(dsl_deadlist_t *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, dmu_tx_t *VAR_4)
{
 dsl_deadlist_entry_t *VAR_5;
 uint64_t VAR_6;

 VAR_6 = FUNC_4(VAR_1->dl_os, VAR_4);

 if (VAR_1->dl_oldfmt) {
  FUNC_6(VAR_1->dl_os, VAR_6, VAR_3, VAR_4);
  return (VAR_6);
 }

 FUNC_7(&VAR_1->dl_lock);
 FUNC_5(VAR_1);

 for (VAR_5 = FUNC_2(&VAR_1->dl_tree); VAR_5;
     VAR_5 = FUNC_0(&VAR_1->dl_tree, VAR_5)) {
  uint64_t VAR_7;

  if (VAR_5->dle_mintxg >= VAR_2)
   break;

  VAR_7 = FUNC_3(VAR_1->dl_os, VAR_0, VAR_4);
  FUNC_1(FUNC_9(VAR_1->dl_os, VAR_6,
      VAR_5->dle_mintxg, VAR_7, VAR_4));
 }
 FUNC_8(&VAR_1->dl_lock);
 return (VAR_6);
}
