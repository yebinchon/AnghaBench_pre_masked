
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_9__ {scalar_t__ pool_guid; scalar_t__ mmp_sec_remaining; } ;
typedef TYPE_2__ spa_import_progress_t ;
struct TYPE_8__ {int pl_lock; int pl_list; } ;
struct TYPE_10__ {scalar_t__ size; TYPE_1__ procfs_list; } ;
typedef TYPE_3__ spa_history_list_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* VAR_1 ;

int
FUNC_4(uint64_t VAR_2,
    uint64_t VAR_3)
{
 spa_history_list_t *VAR_4 = VAR_1;
 spa_import_progress_t *VAR_5;
 int VAR_6 = VAR_0;

 if (VAR_4->size == 0)
  return (0);

 FUNC_2(&VAR_4->procfs_list.pl_lock);
 for (VAR_5 = FUNC_1(&VAR_4->procfs_list.pl_list); VAR_5 != ((void*)0);
     VAR_5 = FUNC_0(&VAR_4->procfs_list.pl_list, VAR_5)) {
  if (VAR_5->pool_guid == VAR_2) {
   VAR_5->mmp_sec_remaining = VAR_3;
   VAR_6 = 0;
   break;
  }
 }
 FUNC_3(&VAR_4->procfs_list.pl_lock);

 return (VAR_6);
}
