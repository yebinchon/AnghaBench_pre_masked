
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zs_thread_stop; scalar_t__ zs_thread_start; scalar_t__ zs_proc_stop; scalar_t__ zs_proc_start; } ;
typedef TYPE_1__ ztest_shared_t ;
struct TYPE_6__ {int * spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef scalar_t__ hrtime_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static void
FUNC_8(void *VAR_6)
{
 ztest_shared_t *VAR_7 = VAR_6;
 spa_t *VAR_8 = VAR_5;
 hrtime_t VAR_9, VAR_10, VAR_11 = FUNC_2();

 VAR_9 = (VAR_7->zs_thread_stop - VAR_7->zs_thread_start) +
     FUNC_0(VAR_3);

 while (!VAR_4) {




  if (FUNC_2() < VAR_11 + VAR_9) {
   (void) FUNC_3(((void*)0), 0, 1000);
   continue;
  }







  if (FUNC_5(VAR_8) || VAR_8->spa_root_vdev == ((void*)0)) {
   FUNC_1(0, "aborting test after %llu seconds because "
       "pool has transitioned to a suspended state.",
       VAR_3 / 1000);
  }
  FUNC_7(VAR_8->spa_root_vdev, VAR_0);






  VAR_10 = VAR_7->zs_proc_stop + FUNC_0(VAR_3);
  if (FUNC_2() > VAR_10) {
   FUNC_1(0, "aborting test after %llu seconds because "
       "the process is overdue for termination.",
       (FUNC_2() - VAR_7->zs_proc_start) / VAR_1);
  }

  (void) FUNC_4("ztest has been running for %lld seconds\n",
      (FUNC_2() - VAR_7->zs_proc_start) / VAR_1);

  VAR_11 = FUNC_2();
  VAR_9 = FUNC_0(VAR_2);
 }

 FUNC_6();
}
