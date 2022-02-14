
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char**,char*,int ,char*) ;
 int FUNC_2 (char*) ;

char *FUNC_3 (char *VAR_0) {
  if (*VAR_0 != '/') {
    char *VAR_1 = VAR_0;
    FUNC_1 (&VAR_0, "%s/%s", FUNC_0 (), VAR_0);
    FUNC_2 (VAR_1);
  }
  return VAR_0;
}
