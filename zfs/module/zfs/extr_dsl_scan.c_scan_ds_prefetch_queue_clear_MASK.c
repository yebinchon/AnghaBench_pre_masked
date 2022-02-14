
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int spa_scrub_lock; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_11__ {int spic_spc; } ;
typedef TYPE_3__ scan_prefetch_issue_ctx_t ;
struct TYPE_12__ {int scn_prefetch_queue; TYPE_1__* scn_dp; } ;
typedef TYPE_4__ dsl_scan_t ;
struct TYPE_9__ {TYPE_2__* dp_spa; } ;


 TYPE_3__* FUNC_0 (int *,void**) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_5(dsl_scan_t *VAR_0)
{
 spa_t *VAR_1 = VAR_0->scn_dp->dp_spa;
 void *VAR_2 = ((void*)0);
 scan_prefetch_issue_ctx_t *VAR_3 = ((void*)0);

 FUNC_2(&VAR_1->spa_scrub_lock);
 while ((VAR_3 = FUNC_0(&VAR_0->scn_prefetch_queue,
     &VAR_2)) != ((void*)0)) {
  FUNC_4(VAR_3->spic_spc, VAR_0);
  FUNC_1(VAR_3, sizeof (scan_prefetch_issue_ctx_t));
 }
 FUNC_3(&VAR_1->spa_scrub_lock);
}
