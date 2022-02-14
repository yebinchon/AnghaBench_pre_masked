
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dl_tree; int dl_lock; } ;
typedef TYPE_1__ dsl_deadlist_t ;
typedef int dsl_deadlist_entry_t ;
typedef scalar_t__ (* deadlist_iter_t ) (void*,int *) ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(dsl_deadlist_t *VAR_0, deadlist_iter_t VAR_1, void *VAR_2)
{
 dsl_deadlist_entry_t *VAR_3;

 FUNC_0(FUNC_3(VAR_0));

 FUNC_5(&VAR_0->dl_lock);
 FUNC_4(VAR_0);
 FUNC_6(&VAR_0->dl_lock);
 for (VAR_3 = FUNC_2(&VAR_0->dl_tree); VAR_3 != ((void*)0);
     VAR_3 = FUNC_1(&VAR_0->dl_tree, VAR_3)) {
  if (VAR_1(VAR_2, VAR_3) != 0)
   break;
 }
}
