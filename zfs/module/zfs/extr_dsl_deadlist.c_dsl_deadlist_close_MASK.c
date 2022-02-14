
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dl_object; int * dl_os; int * dl_phys; int * dl_dbuf; int dl_cache; scalar_t__ dl_havecache; int dl_tree; scalar_t__ dl_havetree; int dl_bpobj; scalar_t__ dl_oldfmt; int dl_lock; } ;
typedef TYPE_1__ dsl_deadlist_t ;
struct TYPE_10__ {int dle_bpobj; } ;
typedef TYPE_2__ dsl_deadlist_entry_t ;
typedef TYPE_2__ dsl_deadlist_cache_entry_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *) ;

void
FUNC_8(dsl_deadlist_t *VAR_1)
{
 FUNC_0(FUNC_5(VAR_1));
 FUNC_7(&VAR_1->dl_lock);

 if (VAR_1->dl_oldfmt) {
  VAR_1->dl_oldfmt = VAR_0;
  FUNC_3(&VAR_1->dl_bpobj);
  VAR_1->dl_os = ((void*)0);
  VAR_1->dl_object = 0;
  return;
 }

 if (VAR_1->dl_havetree) {
  dsl_deadlist_entry_t *VAR_2;
  void *VAR_3 = ((void*)0);
  while ((VAR_2 = FUNC_2(&VAR_1->dl_tree, &VAR_3))
      != ((void*)0)) {
   FUNC_3(&VAR_2->dle_bpobj);
   FUNC_6(VAR_2, sizeof (*VAR_2));
  }
  FUNC_1(&VAR_1->dl_tree);
 }
 if (VAR_1->dl_havecache) {
  dsl_deadlist_cache_entry_t *VAR_4;
  void *VAR_5 = ((void*)0);
  while ((VAR_4 = FUNC_2(&VAR_1->dl_cache, &VAR_5))
      != ((void*)0)) {
   FUNC_6(VAR_4, sizeof (*VAR_4));
  }
  FUNC_1(&VAR_1->dl_cache);
 }
 FUNC_4(VAR_1->dl_dbuf, VAR_1);
 VAR_1->dl_dbuf = ((void*)0);
 VAR_1->dl_phys = ((void*)0);
 VAR_1->dl_os = ((void*)0);
 VAR_1->dl_object = 0;
}
