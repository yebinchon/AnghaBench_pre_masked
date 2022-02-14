
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_2 (void) {
  if (VAR_4) {
    if (FUNC_1 (VAR_0, 0, &VAR_2) < 0) {
      FUNC_0 ("tcsetattr()");
    }
  }
  if (VAR_5) {
    if (FUNC_1 (VAR_1, 0, &VAR_3) < 0) {
      FUNC_0 ("tcsetattr()");
    }
  }
}
