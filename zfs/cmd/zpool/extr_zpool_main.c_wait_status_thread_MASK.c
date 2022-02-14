
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_3__ {long wd_interval; int wd_sem; int wd_poolname; } ;
typedef TYPE_1__ wait_data_t ;
struct timespec {long tv_sec; long tv_nsec; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int ,struct timespec*) ;
 scalar_t__ VAR_3 ;
 long FUNC_1 (long) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_4 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_5 (int *,struct timespec*) ;
 int VAR_5 ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,scalar_t__*) ;

void *
FUNC_11(void *VAR_6)
{
 wait_data_t *VAR_7 = (wait_data_t *)VAR_6;
 zpool_handle_t *VAR_8;

 if ((VAR_8 = FUNC_8(VAR_4, VAR_7->wd_poolname)) == ((void*)0))
  return (void *)(1);

 for (int VAR_9 = 0; ; VAR_9++) {
  boolean_t VAR_10;
  struct timespec VAR_11;
  (void) FUNC_0(VAR_0, &VAR_11);

  if (FUNC_10(VAR_8, &VAR_10) != 0 || VAR_10 ||
      FUNC_9(VAR_8) != 0) {
   FUNC_7(VAR_8);
   return (void *)(uintptr_t)(VAR_10 ? 0 : 1);
  }

  FUNC_4(VAR_7, VAR_8, VAR_9);

  VAR_11.tv_sec += FUNC_1(VAR_7->wd_interval);
  long VAR_12 = VAR_11.tv_nsec +
      (VAR_7->wd_interval - FUNC_1(VAR_7->wd_interval)) * VAR_2;
  if (VAR_12 >= VAR_2) {
   VAR_11.tv_sec++;
   VAR_11.tv_nsec = VAR_12 - VAR_2;
  } else {
   VAR_11.tv_nsec = VAR_12;
  }

  if (FUNC_5(&VAR_7->wd_sem, &VAR_11) == 0) {
   break;
  } else if (VAR_3 != VAR_1) {
   (void) FUNC_2(VAR_5, FUNC_3("sem_timedwait failed: "
       "%s\n"), FUNC_6(VAR_3));
   FUNC_7(VAR_8);
   return (void *)(uintptr_t)(1);
  }
 }

 FUNC_7(VAR_8);
 return (void *)(0);
}
