
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 long long FUNC_0 (char*,char**,int ) ;

long long FUNC_1 (void) {
  if (VAR_2 <= 0) {
    return VAR_0;
  } else {
    char VAR_3 = VAR_1[VAR_2];
    VAR_1[VAR_2] = 0;
    char *VAR_4 = 0;
    long long VAR_5 = FUNC_0 (VAR_1, &VAR_4, 0);
    VAR_1[VAR_2] = VAR_3;
    if (VAR_4 != VAR_1 + VAR_2) {
      return VAR_0;
    } else {
      return VAR_5;
    }
  }
}
