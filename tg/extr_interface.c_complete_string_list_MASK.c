
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;

int FUNC_3 (char **VAR_0, int VAR_1, const char *VAR_2, int VAR_3, char **VAR_4) {
  VAR_1 ++;
  while (VAR_0[VAR_1] && FUNC_2 (VAR_0[VAR_1], VAR_2, VAR_3)) {
    VAR_1 ++;
  }
  if (VAR_0[VAR_1]) {
    *VAR_4 = FUNC_1 (VAR_0[VAR_1]);
    FUNC_0 (*VAR_4);
    return VAR_1;
  } else {
    *VAR_4 = 0;
    return -1;
  }
}
