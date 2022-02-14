
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;

int FUNC_6() {

 if (FUNC_3(0, 0) < 0) {
  FUNC_1("setpgid failed: %s", FUNC_4(VAR_3));
  return 1;
 }
 if (FUNC_5(VAR_2, FUNC_2())) {
  if (VAR_3 == VAR_0) {
   FUNC_0("tcsetpgrp failed: no tty (ok to proceed)");
  } else if (VAR_3 == VAR_1) {

   FUNC_0("tcsetpgrp failed: no such device (ok to proceed)");
  } else {
   FUNC_1("tcsetpgrp failed: %s", FUNC_4(VAR_3));
   return 1;
  }
 }

 return 0;
}
