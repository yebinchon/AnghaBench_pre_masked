
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct sigaction {int sa_mask; int sa_handler; } ;
typedef int sigset_t ;
struct TYPE_3__ {int sigttou_action_ptr; int sigttin_action_ptr; int sigmask_ptr; } ;
typedef TYPE_1__ signal_configuration_t ;


 size_t FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct sigaction*,int ,int) ;
 scalar_t__ FUNC_3 (int,struct sigaction*,int ) ;
 scalar_t__ FUNC_4 (int * const,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int * const) ;
 scalar_t__ FUNC_7 (int ,int * const,int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(sigset_t* const VAR_12, const signal_configuration_t* const VAR_13) {

 if (FUNC_6(VAR_12)) {
  FUNC_1("sigfillset failed: '%s'", FUNC_8(VAR_11));
  return 1;
 }


 uint VAR_14;
 int VAR_15[] = {VAR_2, VAR_3, VAR_4, VAR_1, VAR_0, VAR_6, VAR_5, VAR_7, VAR_8};
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_15); VAR_14++) {
  if (FUNC_4(VAR_12, VAR_15[VAR_14])) {
   FUNC_1("sigdelset failed: '%i'", VAR_15[VAR_14]);
   return 1;
  }
 }

 if (FUNC_7(VAR_10, VAR_12, VAR_13->sigmask_ptr)) {
  FUNC_1("sigprocmask failed: '%s'", FUNC_8(VAR_11));
  return 1;
 }





 struct sigaction VAR_16;
 FUNC_2(&VAR_16, 0, sizeof VAR_16);

 VAR_16.sa_handler = VAR_9;
 FUNC_5(&VAR_16.sa_mask);

 if (FUNC_3(VAR_7, &VAR_16, VAR_13->sigttin_action_ptr)) {
  FUNC_1("Failed to ignore SIGTTIN");
  return 1;
 }

 if (FUNC_3(VAR_8, &VAR_16, VAR_13->sigttou_action_ptr)) {
  FUNC_1("Failed to ignore SIGTTOU");
  return 1;
 }

 return 0;
}
