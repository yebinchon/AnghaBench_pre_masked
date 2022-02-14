
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dl_lock; scalar_t__ dl_havetree; int dl_tree; } ;
typedef TYPE_1__ dsl_deadlist_t ;
struct TYPE_7__ {int dle_bpobj; } ;
typedef TYPE_2__ dsl_deadlist_entry_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(dsl_deadlist_t *VAR_1)
{
 FUNC_4(&VAR_1->dl_lock);

 if (!VAR_1->dl_havetree) {
  FUNC_5(&VAR_1->dl_lock);
  return;
 }
 dsl_deadlist_entry_t *VAR_2;
 void *VAR_3 = ((void*)0);
 while ((VAR_2 = FUNC_1(&VAR_1->dl_tree, &VAR_3)) != ((void*)0)) {
  FUNC_2(&VAR_2->dle_bpobj);
  FUNC_3(VAR_2, sizeof (*VAR_2));
 }
 FUNC_0(&VAR_1->dl_tree);

 VAR_1->dl_havetree = VAR_0;
 FUNC_5(&VAR_1->dl_lock);
}
