
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
struct TYPE_12__ {scalar_t__ txg; scalar_t__ ndirty; scalar_t__ writes; scalar_t__ reads; scalar_t__ nwritten; scalar_t__ nread; } ;
typedef TYPE_3__ spa_txg_history_t ;
struct TYPE_11__ {int pl_lock; int pl_list; } ;
struct TYPE_14__ {TYPE_2__ procfs_list; } ;
struct TYPE_10__ {TYPE_5__ txg_history; } ;
struct TYPE_13__ {TYPE_1__ spa_stats; } ;
typedef TYPE_4__ spa_t ;
typedef TYPE_5__ spa_history_list_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_4(spa_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    uint64_t VAR_5, uint64_t VAR_6, uint64_t VAR_7, uint64_t VAR_8)
{
 spa_history_list_t *VAR_9 = &VAR_2->spa_stats.txg_history;
 spa_txg_history_t *VAR_10;
 int VAR_11 = VAR_0;

 if (VAR_1 == 0)
  return (0);

 FUNC_2(&VAR_9->procfs_list.pl_lock);
 for (VAR_10 = FUNC_1(&VAR_9->procfs_list.pl_list); VAR_10 != ((void*)0);
     VAR_10 = FUNC_0(&VAR_9->procfs_list.pl_list, VAR_10)) {
  if (VAR_10->txg == VAR_3) {
   VAR_10->nread = VAR_4;
   VAR_10->nwritten = VAR_5;
   VAR_10->reads = VAR_6;
   VAR_10->writes = VAR_7;
   VAR_10->ndirty = VAR_8;
   VAR_11 = 0;
   break;
  }
 }
 FUNC_3(&VAR_9->procfs_list.pl_lock);

 return (VAR_11);
}
