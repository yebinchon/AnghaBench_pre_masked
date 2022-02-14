
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,long) ;
 int FUNC_5 () ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(void)
{
 pid_t VAR_1;

 if ((VAR_1 = FUNC_3()) < 0) {
  FUNC_2("fork", 1);
 } else if (VAR_1 != 0) {
  (void) FUNC_4(VAR_0, "%ld\n", (long)VAR_1);
  FUNC_1(0);
 }

 (void) FUNC_5();
 (void) FUNC_0(0);
 (void) FUNC_0(1);
 (void) FUNC_0(2);
}
