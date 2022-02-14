
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 char** VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char*) ;

void FUNC_2 (void) {
  if (VAR_3) { return; }
  FUNC_0 (VAR_2 > 0);
  VAR_2 --;
  if (VAR_2 >= 1) {
    FUNC_1 ("%s", VAR_1[VAR_2 - 1]);
  } else {
    FUNC_1 ("%s", VAR_0);
  }
}
