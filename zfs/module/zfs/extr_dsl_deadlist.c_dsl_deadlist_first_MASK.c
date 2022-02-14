
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dl_lock; int dl_tree; } ;
typedef TYPE_1__ dsl_deadlist_t ;
typedef int dsl_deadlist_entry_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

dsl_deadlist_entry_t *
FUNC_4(dsl_deadlist_t *VAR_0)
{
 dsl_deadlist_entry_t *VAR_1;

 FUNC_2(&VAR_0->dl_lock);
 FUNC_1(VAR_0);
 VAR_1 = FUNC_0(&VAR_0->dl_tree);
 FUNC_3(&VAR_0->dl_lock);

 return (VAR_1);
}
