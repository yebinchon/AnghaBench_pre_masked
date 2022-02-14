
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sigttou_action_ptr; int sigttin_action_ptr; int sigmask_ptr; } ;
typedef TYPE_1__ signal_configuration_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(const signal_configuration_t* const VAR_4) {
 if (FUNC_2(VAR_2, VAR_4->sigmask_ptr, ((void*)0))) {
  FUNC_0("Restoring child signal mask failed: '%s'", FUNC_3(VAR_3));
  return 1;
 }

 if (FUNC_1(VAR_0, VAR_4->sigttin_action_ptr, ((void*)0))) {
  FUNC_0("Restoring SIGTTIN handler failed: '%s'", FUNC_3((VAR_3)));
  return 1;
 }

 if (FUNC_1(VAR_1, VAR_4->sigttou_action_ptr, ((void*)0))) {
  FUNC_0("Restoring SIGTTOU handler failed: '%s'", FUNC_3((VAR_3)));
  return 1;
 }

 return 0;
}
