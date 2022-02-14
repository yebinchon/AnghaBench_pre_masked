
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_25__ {int spa_scrub_lock; int spa_scrub_io_cv; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_29__ {scalar_t__ blk_birth; } ;
struct TYPE_26__ {int spic_zb; TYPE_7__ spic_bp; TYPE_5__* spic_spc; } ;
typedef TYPE_4__ scan_prefetch_issue_ctx_t ;
struct TYPE_27__ {TYPE_6__* spc_scn; } ;
typedef TYPE_5__ scan_prefetch_ctx_t ;
struct TYPE_24__ {scalar_t__ scn_cur_min_txg; } ;
struct TYPE_28__ {int scn_prefetch_queue; TYPE_2__ scn_phys; TYPE_1__* scn_dp; } ;
typedef TYPE_6__ dsl_scan_t ;
typedef TYPE_7__ blkptr_t ;
typedef int avl_index_t ;
struct TYPE_23__ {TYPE_3__* dp_spa; } ;


 scalar_t__ FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_4 (int *,TYPE_4__*,int *) ;
 int FUNC_5 (int *,TYPE_4__*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int *) ;
 TYPE_4__* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_13 (TYPE_5__*,TYPE_6__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_14(scan_prefetch_ctx_t *VAR_4, blkptr_t *VAR_5, zbookmark_phys_t *VAR_6)
{
 avl_index_t VAR_7;
 dsl_scan_t *VAR_8 = VAR_4->spc_scn;
 spa_t *VAR_9 = VAR_8->scn_dp->dp_spa;
 scan_prefetch_issue_ctx_t *VAR_10;

 if (VAR_3 || FUNC_3(VAR_5))
  return;

 if (FUNC_2(VAR_5) || VAR_5->blk_birth <= VAR_8->scn_phys.scn_cur_min_txg ||
     (FUNC_0(VAR_5) == 0 && FUNC_1(VAR_5) != VAR_0 &&
     FUNC_1(VAR_5) != VAR_1))
  return;

 if (FUNC_7(VAR_4, VAR_6))
  return;

 FUNC_12(VAR_4, VAR_8);
 VAR_10 = FUNC_8(sizeof (scan_prefetch_issue_ctx_t), VAR_2);
 VAR_10->spic_spc = VAR_4;
 VAR_10->spic_bp = *VAR_5;
 VAR_10->spic_zb = *VAR_6;






 FUNC_10(&VAR_9->spa_scrub_lock);
 if (FUNC_4(&VAR_8->scn_prefetch_queue, VAR_10, &VAR_7) != ((void*)0)) {

  FUNC_9(VAR_10, sizeof (scan_prefetch_issue_ctx_t));
  FUNC_13(VAR_4, VAR_8);
  FUNC_11(&VAR_9->spa_scrub_lock);
  return;
 }

 FUNC_5(&VAR_8->scn_prefetch_queue, VAR_10, VAR_7);
 FUNC_6(&VAR_9->spa_scrub_io_cv);
 FUNC_11(&VAR_9->spa_scrub_lock);
}
