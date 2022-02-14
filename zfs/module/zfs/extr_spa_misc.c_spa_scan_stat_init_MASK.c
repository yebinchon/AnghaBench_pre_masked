
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int spa_root_vdev; scalar_t__ spa_scan_pass_issued; scalar_t__ spa_scan_pass_exam; scalar_t__ spa_scan_pass_scrub_spent_paused; scalar_t__ spa_scan_pass_scrub_pause; scalar_t__ spa_scan_pass_start; TYPE_1__* spa_dsl_pool; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_4__ {int dp_scan; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;

void
FUNC_3(spa_t *VAR_0)
{

 VAR_0->spa_scan_pass_start = FUNC_1();
 if (FUNC_0(VAR_0->spa_dsl_pool->dp_scan))
  VAR_0->spa_scan_pass_scrub_pause = VAR_0->spa_scan_pass_start;
 else
  VAR_0->spa_scan_pass_scrub_pause = 0;
 VAR_0->spa_scan_pass_scrub_spent_paused = 0;
 VAR_0->spa_scan_pass_exam = 0;
 VAR_0->spa_scan_pass_issued = 0;
 FUNC_2(VAR_0->spa_root_vdev);
}
