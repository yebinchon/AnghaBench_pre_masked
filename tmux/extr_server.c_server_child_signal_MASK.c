
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int*,int) ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_5;
 pid_t VAR_6;

 for (;;) {
  switch (VAR_6 = FUNC_6(VAR_1, &VAR_5, VAR_2|VAR_3)) {
  case -1:
   if (VAR_4 == VAR_0)
    return;
   FUNC_3("waitpid failed");
  case 0:
   return;
  }
  if (FUNC_2(VAR_5))
   FUNC_5(VAR_6, VAR_5);
  else if (FUNC_0(VAR_5) || FUNC_1(VAR_5))
   FUNC_4(VAR_6, VAR_5);
 }
}
