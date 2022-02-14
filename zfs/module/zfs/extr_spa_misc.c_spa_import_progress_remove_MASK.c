
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_11__ {scalar_t__ pool_guid; scalar_t__ pool_name; } ;
typedef TYPE_2__ spa_import_progress_t ;
struct TYPE_10__ {int pl_lock; int pl_list; } ;
struct TYPE_12__ {TYPE_1__ procfs_list; int size; } ;
typedef TYPE_3__ spa_history_list_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_3__* VAR_0 ;
 int FUNC_6 (scalar_t__) ;

void
FUNC_7(uint64_t VAR_1)
{
 spa_history_list_t *VAR_2 = VAR_0;
 spa_import_progress_t *VAR_3;

 FUNC_4(&VAR_2->procfs_list.pl_lock);
 for (VAR_3 = FUNC_3(&VAR_2->procfs_list.pl_list); VAR_3 != ((void*)0);
     VAR_3 = FUNC_1(&VAR_2->procfs_list.pl_list, VAR_3)) {
  if (VAR_3->pool_guid == VAR_1) {
   if (VAR_3->pool_name)
    FUNC_6(VAR_3->pool_name);
   FUNC_2(&VAR_2->procfs_list.pl_list, VAR_3);
   VAR_2->size--;
   FUNC_0(VAR_3, sizeof (spa_import_progress_t));
   break;
  }
 }
 FUNC_5(&VAR_2->procfs_list.pl_lock);
}
