
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_longlong_t ;
struct TYPE_12__ {int mmp_last_write; int mmp_delay; int mmp_thread; int * mmp_zio_root; int mmp_thread_lock; int mmp_thread_cv; int mmp_io_lock; int mmp_thread_exiting; } ;
struct TYPE_11__ {TYPE_2__ spa_mmp; } ;
typedef TYPE_1__ spa_t ;
typedef TYPE_2__ mmp_thread_t ;
typedef int hrtime_t ;
typedef int callb_cpr_t ;
typedef int boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 int FUNC_8 (int ,char*,int ,int ,int) ;
 int FUNC_9 (int *,int *,int,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,int *,int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (char*,int ,int,int,int,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_21 (TYPE_1__*,int *,int ) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static void
FUNC_23(void *VAR_7)
{
 spa_t *VAR_8 = (spa_t *)VAR_7;
 mmp_thread_t *VAR_9 = &VAR_8->spa_mmp;
 boolean_t VAR_10 = FUNC_18(VAR_8);
 boolean_t VAR_11 = FUNC_16(VAR_8);
 uint64_t VAR_12 = FUNC_5(FUNC_4(
     VAR_6));
 uint32_t VAR_13 = FUNC_3(
     VAR_5);
 hrtime_t VAR_14 = VAR_13 * VAR_12;
 boolean_t VAR_15 = VAR_10;
 boolean_t VAR_16 = VAR_11;
 uint64_t VAR_17 = VAR_12;
 uint32_t VAR_18 = VAR_13;
 hrtime_t VAR_19 = VAR_14;
 callb_cpr_t VAR_20;
 int VAR_21 = 0;

 FUNC_11(VAR_9, &VAR_20);

 while (!VAR_9->mmp_thread_exiting) {
  hrtime_t VAR_22 = FUNC_10() +
      FUNC_5(VAR_2);
  int VAR_23 = FUNC_2(FUNC_19(VAR_8), 1);



  VAR_15 = VAR_10;
  VAR_16 = VAR_11;
  VAR_10 = FUNC_18(VAR_8);
  VAR_11 = FUNC_16(VAR_8);

  VAR_17 = VAR_12;
  VAR_18 = VAR_13;
  VAR_19 = VAR_14;
  VAR_12 = FUNC_5(FUNC_4(
      VAR_6));
  VAR_13 = FUNC_3(
      VAR_5);


  if (VAR_13 * VAR_12 < VAR_14) {
   VAR_14 = (VAR_14 * 31 +
       VAR_13 * VAR_12) / 32;
  } else {
   VAR_14 = VAR_13 *
       VAR_12;
  }

  if (VAR_12 != VAR_17 ||
      VAR_13 != VAR_18) {




   VAR_21 += VAR_23;
  }

  if (VAR_11)
   VAR_22 = FUNC_10() + VAR_12 / VAR_23;

  if (VAR_14 != VAR_19) {
   FUNC_20("MMP interval change pool '%s' "
       "gethrtime %llu last_mmp_interval %llu "
       "mmp_interval %llu last_mmp_fail_intervals %u "
       "mmp_fail_intervals %u mmp_fail_ns %llu "
       "skip_wait %d leaves %d next_time %llu",
       FUNC_17(VAR_8), FUNC_10(), VAR_17,
       VAR_12, VAR_18,
       VAR_13, VAR_14, VAR_21, VAR_23,
       VAR_22);
  }






  if ((!VAR_16 && VAR_11) ||
      (VAR_15 && !VAR_10)) {
   FUNC_20("MMP state change pool '%s': gethrtime %llu "
       "last_spa_multihost %u multihost %u "
       "last_spa_suspended %u suspended %u",
       FUNC_17(VAR_8), VAR_16, VAR_11,
       VAR_15, VAR_10);
   FUNC_14(&VAR_9->mmp_io_lock);
   VAR_9->mmp_last_write = FUNC_10();
   VAR_9->mmp_delay = VAR_12;
   FUNC_15(&VAR_9->mmp_io_lock);
  }





  if (VAR_16 && !VAR_11) {
   FUNC_14(&VAR_9->mmp_io_lock);
   VAR_9->mmp_delay = 0;
   FUNC_15(&VAR_9->mmp_io_lock);
  }





  if (VAR_11 && !VAR_10 && VAR_13 &&
      (FUNC_10() - VAR_9->mmp_last_write) > VAR_14) {
   FUNC_20("MMP suspending pool '%s': gethrtime %llu "
       "mmp_last_write %llu mmp_interval %llu "
       "mmp_fail_intervals %llu mmp_fail_ns %llu",
       FUNC_17(VAR_8), (u_longlong_t)FUNC_10(),
       (u_longlong_t)VAR_9->mmp_last_write,
       (u_longlong_t)VAR_12,
       (u_longlong_t)VAR_13,
       (u_longlong_t)VAR_14);
   FUNC_8(VAR_1, "MMP writes to pool '%s' have not "
       "succeeded in over %llu ms; suspending pool. "
       "Hrtime %llu",
       FUNC_17(VAR_8),
       FUNC_6(FUNC_10() - VAR_9->mmp_last_write),
       FUNC_10());
   FUNC_21(VAR_8, ((void*)0), VAR_4);
  }

  if (VAR_11 && !VAR_10)
   FUNC_13(VAR_8);

  if (VAR_21 > 0) {
   VAR_22 = FUNC_10() + FUNC_5(VAR_3) /
       VAR_23;
   VAR_21--;
  }

  FUNC_0(&VAR_20);
  (void) FUNC_9(&VAR_9->mmp_thread_cv,
      &VAR_9->mmp_thread_lock, VAR_22, FUNC_7(100),
      VAR_0);
  FUNC_1(&VAR_20, &VAR_9->mmp_thread_lock);
 }


 if (VAR_9->mmp_zio_root)
  FUNC_22(VAR_9->mmp_zio_root);

 VAR_9->mmp_zio_root = ((void*)0);
 FUNC_12(VAR_9, &VAR_9->mmp_thread, &VAR_20);
}
