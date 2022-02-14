
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2 (void) {
  FUNC_0 ();
  VAR_1 = 0;
  VAR_3 = 0;
  if (!*VAR_5) {
    VAR_2 = 0;
    VAR_1 = 1;
    return;
  }
  char VAR_6 = *VAR_5;
  char *VAR_7 = VAR_5;
  if (VAR_6 == '"' || VAR_6 == '\'') {
    VAR_3 = 1;
    VAR_5 ++;
    int VAR_8 = 0;
    while (*VAR_5 && (VAR_8 || *VAR_5 != VAR_6)) {
      if (*VAR_5 == '\\') {
        VAR_8 = 1 - VAR_8;
      } else {
        VAR_8 = 0;
      }
      VAR_5 ++;
    }
    if (!*VAR_5) {
      VAR_2 = -2;
    } else {
      FUNC_1 (VAR_7 + 1, VAR_5);
      VAR_5 ++;
    }
  } else {
    while (*VAR_5 && ((unsigned char)*VAR_5) > ' ') {
      VAR_5 ++;
    }
    VAR_0 = VAR_7;
    VAR_2 = VAR_5 - VAR_7;
    VAR_1 = (!VAR_4) && (*VAR_5 == 0);
  }
}
