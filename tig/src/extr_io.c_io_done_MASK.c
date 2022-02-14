
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {scalar_t__ pid; int pipe; int status; scalar_t__ error; int buf; } ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct io*) ;
 scalar_t__ FUNC_6 (scalar_t__,int*,int ) ;

bool
FUNC_7(struct io *VAR_2)
{
 pid_t VAR_3 = VAR_2->pid;

 if (VAR_2->pipe != -1)
  FUNC_3(VAR_2->pipe);
 FUNC_4(VAR_2->buf);
 FUNC_5(VAR_2);

 while (VAR_3 > 0) {
  int VAR_4 = 0;
  pid_t VAR_5 = FUNC_6(VAR_3, &VAR_4, 0);

  if (VAR_5 < 0) {
   if (VAR_1 == VAR_0)
    continue;
   VAR_2->error = VAR_1;
   return 0;
  }

  VAR_2->status = FUNC_1(VAR_4) ? FUNC_0(VAR_4) : 0;

  return VAR_5 == VAR_3 &&
         !FUNC_2(VAR_4) &&
         !VAR_2->status;
 }

 return 1;
}
