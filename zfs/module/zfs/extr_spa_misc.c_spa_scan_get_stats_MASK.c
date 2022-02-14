
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ spa_scan_pass_issued; int spa_scan_pass_scrub_spent_paused; int spa_scan_pass_scrub_pause; int spa_scan_pass_start; int spa_scan_pass_exam; TYPE_1__* spa_dsl_pool; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_12__ {scalar_t__ pss_func; scalar_t__ pss_issued; scalar_t__ pss_pass_issued; int pss_pass_scrub_spent_paused; int pss_pass_scrub_pause; int pss_pass_start; int pss_pass_exam; int pss_errors; int pss_processed; int pss_to_process; int pss_examined; int pss_to_examine; int pss_end_time; int pss_start_time; int pss_state; } ;
typedef TYPE_4__ pool_scan_stat_t ;
struct TYPE_10__ {scalar_t__ scn_func; int scn_errors; int scn_processed; int scn_to_process; int scn_examined; int scn_to_examine; int scn_end_time; int scn_start_time; int scn_state; } ;
struct TYPE_13__ {scalar_t__ scn_issued_before_pass; TYPE_2__ scn_phys; } ;
typedef TYPE_5__ dsl_scan_t ;
struct TYPE_9__ {TYPE_5__* dp_scan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int) ;

int
FUNC_2(spa_t *VAR_2, pool_scan_stat_t *VAR_3)
{
 dsl_scan_t *VAR_4 = VAR_2->spa_dsl_pool ? VAR_2->spa_dsl_pool->dp_scan : ((void*)0);

 if (VAR_4 == ((void*)0) || VAR_4->scn_phys.scn_func == VAR_1)
  return (FUNC_0(VAR_0));
 FUNC_1(VAR_3, sizeof (pool_scan_stat_t));


 VAR_3->pss_func = VAR_4->scn_phys.scn_func;
 VAR_3->pss_state = VAR_4->scn_phys.scn_state;
 VAR_3->pss_start_time = VAR_4->scn_phys.scn_start_time;
 VAR_3->pss_end_time = VAR_4->scn_phys.scn_end_time;
 VAR_3->pss_to_examine = VAR_4->scn_phys.scn_to_examine;
 VAR_3->pss_examined = VAR_4->scn_phys.scn_examined;
 VAR_3->pss_to_process = VAR_4->scn_phys.scn_to_process;
 VAR_3->pss_processed = VAR_4->scn_phys.scn_processed;
 VAR_3->pss_errors = VAR_4->scn_phys.scn_errors;


 VAR_3->pss_pass_exam = VAR_2->spa_scan_pass_exam;
 VAR_3->pss_pass_start = VAR_2->spa_scan_pass_start;
 VAR_3->pss_pass_scrub_pause = VAR_2->spa_scan_pass_scrub_pause;
 VAR_3->pss_pass_scrub_spent_paused = VAR_2->spa_scan_pass_scrub_spent_paused;
 VAR_3->pss_pass_issued = VAR_2->spa_scan_pass_issued;
 VAR_3->pss_issued =
     VAR_4->scn_issued_before_pass + VAR_2->spa_scan_pass_issued;

 return (0);
}
