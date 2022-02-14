
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_3__ {int si_signo; } ;
typedef TYPE_1__ siginfo_t ;
typedef int pid_t ;




 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;

 int VAR_1 ;
 int FUNC_3 (int const,int) ;
 int VAR_2 ;
 int FUNC_4 (int const* const,TYPE_1__*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_3 ;

int FUNC_7(sigset_t const* const VAR_4, pid_t const VAR_5) {
 siginfo_t VAR_6;

 if (FUNC_4(VAR_4, &VAR_6, &VAR_3) == -1) {
  switch (VAR_1) {
   case 130:
    break;
   case 129:
    break;
   default:
    FUNC_1("Unexpected error in sigtimedwait: '%s'", FUNC_5(VAR_1));
    return 1;
  }
 } else {

  switch (VAR_6.si_signo) {
   case 128:



    FUNC_0("Received SIGCHLD");
    break;
   default:
    FUNC_0("Passing signal: '%s'", FUNC_6(VAR_6.si_signo));

    if (FUNC_3(VAR_2 ? -VAR_5 : VAR_5, VAR_6.si_signo)) {
     if (VAR_1 == VAR_0) {
      FUNC_2("Child was dead when forwarding signal");
     } else {
      FUNC_1("Unexpected error when forwarding signal: '%s'", FUNC_5(VAR_1));
      return 1;
     }
    }
    break;
  }
 }

 return 0;
}
