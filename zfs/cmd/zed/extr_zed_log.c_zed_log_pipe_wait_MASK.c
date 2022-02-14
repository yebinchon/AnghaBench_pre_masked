
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int c ;
struct TYPE_2__ {scalar_t__* pipe_fd; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int,...) ;

void
FUNC_4(void)
{
 ssize_t VAR_3;
 char VAR_4;

 if (VAR_1.pipe_fd[0] < 0)
  FUNC_3("Invalid use of zed_log_pipe_wait in PID %d",
      (int)FUNC_0());

 for (;;) {
  VAR_3 = FUNC_1(VAR_1.pipe_fd[0], &VAR_4, sizeof (VAR_4));
  if (VAR_3 < 0) {
   if (VAR_2 == VAR_0)
    continue;
   FUNC_3(
       "Failed to read from daemonize pipe in PID %d: %s",
       (int)FUNC_0(), FUNC_2(VAR_2));
  }
  if (VAR_3 == 0) {
   break;
  }
 }
}
