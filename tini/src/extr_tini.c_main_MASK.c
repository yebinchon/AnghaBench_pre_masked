
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sigaction {int dummy; } ;
typedef int sigset_t ;
struct TYPE_4__ {struct sigaction* sigttou_action_ptr; struct sigaction* sigttin_action_ptr; int * sigmask_ptr; } ;
typedef TYPE_1__ signal_configuration_t ;
typedef int pid_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (char***) ;
 int FUNC_4 (struct sigaction*,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int,char**,char****,int*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (TYPE_1__*,char**,int *) ;
 scalar_t__ FUNC_12 (int *,int ) ;

int FUNC_13(int VAR_2, char *VAR_3[]) {
 pid_t VAR_4;


 int VAR_5 = -1;
 int VAR_6 = 1;


 char* (*VAR_7)[];
 int VAR_8 = FUNC_5(VAR_2, VAR_3, &VAR_7, &VAR_6);
 if (VAR_8) {
  return VAR_6;
 }


 if (FUNC_6()) {
  return 1;
 }


 sigset_t VAR_9, VAR_10;
 struct sigaction VAR_11, VAR_12;
 FUNC_4(&VAR_11, 0, sizeof VAR_11);
 FUNC_4(&VAR_12, 0, sizeof VAR_12);

 signal_configuration_t VAR_13 = {
  .sigmask_ptr = &VAR_10,
  .sigttin_action_ptr = &VAR_11,
  .sigttou_action_ptr = &VAR_12,
 };

 if (FUNC_2(&VAR_9, &VAR_13)) {
  return 1;
 }


 if (VAR_1 && FUNC_7(VAR_0, VAR_1)) {
  FUNC_0("Failed to set up parent death signal");
  return 1;
  }
 FUNC_9();


 int VAR_14 = FUNC_11(&VAR_13, *VAR_7, &VAR_4);
 if (VAR_14) {
  return VAR_14;
 }
 FUNC_3(VAR_7);

 while (1) {

  if (FUNC_12(&VAR_9, VAR_4)) {
   return 1;
  }


  if (FUNC_8(VAR_4, &VAR_5)) {
   return 1;
  }

  if (VAR_5 != -1) {
   FUNC_1("Exiting: child has exited");
   return VAR_5;
  }
 }
}
