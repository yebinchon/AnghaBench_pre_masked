
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* pipe_fd; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,...) ;

void
FUNC_4(void)
{
 if ((VAR_0.pipe_fd[0] != -1) || (VAR_0.pipe_fd[1] != -1))
  FUNC_3("Invalid use of zed_log_pipe_open in PID %d",
      (int)FUNC_0());

 if (FUNC_1(VAR_0.pipe_fd) < 0)
  FUNC_3("Failed to create daemonize pipe in PID %d: %s",
      (int)FUNC_0(), FUNC_2(VAR_1));
}
