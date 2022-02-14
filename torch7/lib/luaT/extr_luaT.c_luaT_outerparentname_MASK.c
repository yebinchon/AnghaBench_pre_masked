
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*,size_t) ;

int FUNC_2(const char *VAR_0, char *VAR_1)
{
  char VAR_2[] = {'.', '\0'};
  size_t VAR_3;
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  FUNC_1(VAR_1, VAR_0, VAR_3);
  VAR_1[VAR_3] = '\0';
  return VAR_0[VAR_3] == '.';
}
