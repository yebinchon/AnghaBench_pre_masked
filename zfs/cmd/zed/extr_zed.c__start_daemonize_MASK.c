
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,struct sigaction*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(void)
{
 pid_t VAR_4;
 struct sigaction VAR_5;


 FUNC_9();


 VAR_4 = FUNC_1();
 if (VAR_4 < 0) {
  FUNC_6("Failed to create child process: %s",
      FUNC_5(VAR_3));
 } else if (VAR_4 > 0) {


  FUNC_8();


  FUNC_10();

  FUNC_7();
  FUNC_0(VAR_0);
 }


 FUNC_7();


 if (FUNC_2() < 0)
  FUNC_6("Failed to create new session: %s",
      FUNC_5(VAR_3));


 if (FUNC_4(&VAR_5.sa_mask) < 0)
  FUNC_6("Failed to initialize sigset");

 VAR_5.sa_flags = 0;
 VAR_5.sa_handler = VAR_2;

 if (FUNC_3(VAR_1, &VAR_5, ((void*)0)) < 0)
  FUNC_6("Failed to ignore SIGHUP");


 VAR_4 = FUNC_1();
 if (VAR_4 < 0) {
  FUNC_6("Failed to create grandchild process: %s",
      FUNC_5(VAR_3));
 } else if (VAR_4 > 0) {
  FUNC_0(VAR_0);
 }
}
