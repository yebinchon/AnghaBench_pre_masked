
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef char* u_longlong_t ;
typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_5__ {int pa_verbosity; scalar_t__ pa_parsable; scalar_t__ pa_estimate; int pa_fd; TYPE_1__* pa_zhp; } ;
typedef TYPE_2__ progress_arg_t ;
typedef int buf ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 struct tm* FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (scalar_t__,char*,int) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void *
FUNC_7(void *VAR_5)
{
 progress_arg_t *VAR_6 = VAR_5;
 zfs_handle_t *VAR_7 = VAR_6->pa_zhp;
 uint64_t VAR_8;
 uint64_t VAR_9;
 char VAR_10[16];
 time_t VAR_11;
 struct tm *VAR_12;
 boolean_t VAR_13 = VAR_1;




 for (;;) {
  int VAR_14;
  (void) FUNC_2(1);
  if ((VAR_14 = FUNC_6(VAR_7, VAR_6->pa_fd, &VAR_8,
      &VAR_9)) != 0) {
   if (VAR_14 == VAR_2 || VAR_14 == VAR_3)
    return ((void *)0);
   return ((void *)(uintptr_t)VAR_14);
  }

  if (VAR_13 && !VAR_6->pa_parsable) {
   (void) FUNC_0(VAR_4,
       "TIME       %s   %sSNAPSHOT %s\n",
       VAR_6->pa_estimate ? "BYTES" : " SENT",
       VAR_6->pa_verbosity >= 2 ? "   BLOCKS    " : "",
       VAR_7->zfs_name);
   VAR_13 = VAR_0;
  }

  (void) FUNC_3(&VAR_11);
  VAR_12 = FUNC_1(&VAR_11);

  if (VAR_6->pa_verbosity >= 2 && VAR_6->pa_parsable) {
   (void) FUNC_0(VAR_4,
       "%02d:%02d:%02d\t%s\t%s\t%s\n",
       VAR_12->tm_hour, VAR_12->tm_min, VAR_12->tm_sec,
       (u_longlong_t)VAR_8, (u_longlong_t)VAR_9,
       VAR_7->zfs_name);
  } else if (VAR_6->pa_verbosity >= 2) {
   FUNC_5(VAR_8, VAR_10, sizeof (VAR_10));
   (void) FUNC_0(VAR_4,
       "%02d:%02d:%02d   %5s    %8s    %s\n",
       VAR_12->tm_hour, VAR_12->tm_min, VAR_12->tm_sec,
       VAR_10, (u_longlong_t)VAR_9, VAR_7->zfs_name);
  } else if (VAR_6->pa_parsable) {
   (void) FUNC_0(VAR_4, "%02d:%02d:%02d\t%s\t%s\n",
       VAR_12->tm_hour, VAR_12->tm_min, VAR_12->tm_sec,
       (u_longlong_t)VAR_8, VAR_7->zfs_name);
  } else {
   FUNC_4(VAR_8, VAR_10, sizeof (VAR_10));
   (void) FUNC_0(VAR_4, "%02d:%02d:%02d   %5s   %s\n",
       VAR_12->tm_hour, VAR_12->tm_min, VAR_12->tm_sec,
       VAR_10, VAR_7->zfs_name);
  }
 }
}
