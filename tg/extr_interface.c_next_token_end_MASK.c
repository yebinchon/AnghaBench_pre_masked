
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3 (void) {
  FUNC_2 ();

  if (*VAR_5 && *VAR_5 != '"' && *VAR_5 != '\'') {
    VAR_3 = 0;
    VAR_0 = VAR_5;
    while (*VAR_5) { VAR_5 ++; }
    VAR_2 = VAR_5 - VAR_0;
    while (((unsigned char)VAR_0[VAR_2 - 1]) <= ' ' && VAR_2 >= 0) {
      VAR_2 --;
    }
    FUNC_0 (VAR_2 > 0);
    VAR_1 = !VAR_4;
    return;
  } else {
    if (*VAR_5) {
      FUNC_1 ();
      FUNC_2 ();
      if (*VAR_5) {
        VAR_2 = -1;
      }
    } else {
      FUNC_1 ();
    }
  }
}
