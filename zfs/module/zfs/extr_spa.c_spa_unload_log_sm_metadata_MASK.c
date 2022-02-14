
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ sus_blocklimit; scalar_t__ sus_memused; scalar_t__ sus_nblocks; } ;
struct TYPE_11__ {TYPE_1__ spa_unflushed_stats; int spa_log_summary; int spa_sm_logs_by_txg; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_12__ {int lse_mscount; int sls_mscount; } ;
typedef TYPE_3__ spa_log_sm_t ;
typedef TYPE_3__ log_summary_entry_t ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *,void**) ;
 int FUNC_2 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(spa_t *VAR_0)
{
 void *VAR_1 = ((void*)0);
 spa_log_sm_t *VAR_2;
 while ((VAR_2 = FUNC_1(&VAR_0->spa_sm_logs_by_txg,
     &VAR_1)) != ((void*)0)) {
  FUNC_0(VAR_2->sls_mscount);
  FUNC_2(VAR_2, sizeof (spa_log_sm_t));
 }

 for (log_summary_entry_t *VAR_3 = FUNC_3(&VAR_0->spa_log_summary);
     VAR_3 != ((void*)0); VAR_3 = FUNC_3(&VAR_0->spa_log_summary)) {
  FUNC_0(VAR_3->lse_mscount);
  FUNC_4(&VAR_0->spa_log_summary, VAR_3);
  FUNC_2(VAR_3, sizeof (log_summary_entry_t));
 }

 VAR_0->spa_unflushed_stats.sus_nblocks = 0;
 VAR_0->spa_unflushed_stats.sus_memused = 0;
 VAR_0->spa_unflushed_stats.sus_blocklimit = 0;
}
