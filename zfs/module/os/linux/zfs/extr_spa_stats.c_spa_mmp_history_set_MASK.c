
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_11__ {int pl_lock; int pl_list; } ;
struct TYPE_14__ {scalar_t__ size; TYPE_2__ procfs_list; } ;
struct TYPE_10__ {TYPE_5__ mmp_history; } ;
struct TYPE_12__ {TYPE_1__ spa_stats; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_13__ {scalar_t__ mmp_node_id; int io_error; int duration; } ;
typedef TYPE_4__ spa_mmp_history_t ;
typedef TYPE_5__ spa_history_list_t ;
typedef int hrtime_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;

int
FUNC_5(spa_t *VAR_2, uint64_t VAR_3, int VAR_4,
    hrtime_t VAR_5)
{
 spa_history_list_t *VAR_6 = &VAR_2->spa_stats.mmp_history;
 spa_mmp_history_t *VAR_7;
 int VAR_8 = VAR_0;

 if (VAR_1 == 0 && VAR_6->size == 0)
  return (0);

 FUNC_3(&VAR_6->procfs_list.pl_lock);
 for (VAR_7 = FUNC_2(&VAR_6->procfs_list.pl_list); VAR_7 != ((void*)0);
     VAR_7 = FUNC_1(&VAR_6->procfs_list.pl_list, VAR_7)) {
  if (VAR_7->mmp_node_id == VAR_3) {
   FUNC_0(VAR_7->io_error == 0);
   VAR_7->io_error = VAR_4;
   VAR_7->duration = VAR_5;
   VAR_8 = 0;
   break;
  }
 }
 FUNC_4(&VAR_6->procfs_list.pl_lock);

 return (VAR_8);
}
