
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_7__* ds; TYPE_4__* spa; } ;
typedef TYPE_3__ try_condense_arg_t ;
struct TYPE_14__ {void* cancelled; void* syncing; TYPE_6__* next; TYPE_6__* first; TYPE_7__* ds; } ;
struct TYPE_16__ {int * spa_livelist_condense_zthr; TYPE_2__ spa_to_condense; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_17__ {int dl_tree; } ;
typedef TYPE_5__ dsl_deadlist_t ;
struct TYPE_18__ {int dle_node; } ;
typedef TYPE_6__ dsl_deadlist_entry_t ;
struct TYPE_19__ {int ds_dbuf; TYPE_1__* ds_dir; } ;
typedef TYPE_7__ dsl_dataset_t ;
struct TYPE_13__ {TYPE_5__ dd_livelist; } ;


 TYPE_6__* FUNC_0 (int *,int *) ;
 void* VAR_0 ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, dsl_deadlist_entry_t *VAR_2)
{
 try_condense_arg_t *VAR_3 = VAR_1;
 spa_t *VAR_4 = VAR_3->spa;
 dsl_dataset_t *VAR_5 = VAR_3->ds;
 dsl_deadlist_t *VAR_6 = &VAR_5->ds_dir->dd_livelist;
 dsl_deadlist_entry_t *VAR_7;


 if (VAR_4->spa_livelist_condense_zthr == ((void*)0))
  return (1);


 if (VAR_4->spa_to_condense.ds != ((void*)0))
  return (1);

 VAR_7 = FUNC_0(&VAR_6->dl_tree, &VAR_2->dle_node);

 if (VAR_7 == ((void*)0))
  return (1);


 if (FUNC_0(&VAR_6->dl_tree, &VAR_7->dle_node) == ((void*)0))
  return (1);


 if (!FUNC_2(VAR_2, VAR_7))
  return (0);






 FUNC_1(VAR_5->ds_dbuf, VAR_4);

 VAR_4->spa_to_condense.ds = VAR_5;
 VAR_4->spa_to_condense.first = VAR_2;
 VAR_4->spa_to_condense.next = VAR_7;
 VAR_4->spa_to_condense.syncing = VAR_0;
 VAR_4->spa_to_condense.cancelled = VAR_0;

 FUNC_3(VAR_4->spa_livelist_condense_zthr);
 return (1);
}
