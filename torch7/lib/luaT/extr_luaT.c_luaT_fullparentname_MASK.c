
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;

int FUNC_2(const char *VAR_0, char *VAR_1)
{
  int VAR_2 = FUNC_0(VAR_0);
  int VAR_3;
  for(VAR_3 = VAR_2-1; VAR_3 > 0 ; VAR_3--)
    if(VAR_0[VAR_3] == '.' || VAR_0[VAR_3] == '\0') break;

  if (VAR_3 > 0) FUNC_1(VAR_1, VAR_0, VAR_3);
  VAR_1[VAR_3] = '\0';
  return VAR_0[VAR_3] == '.';
}
