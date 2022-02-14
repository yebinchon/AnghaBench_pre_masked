
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;

int FUNC_2(const char *VAR_0, char *VAR_1)
{
  int VAR_2 = FUNC_0(VAR_0);
  int VAR_3, VAR_4;
  for(VAR_3 = VAR_2-1; VAR_3 >= 0 ; VAR_3--)
    if(VAR_0[VAR_3] == '.') break;

  if (VAR_3 == 0) return 0;

  for(VAR_4 = VAR_3-1; VAR_4 >= 0; VAR_4--)
    if(VAR_0[VAR_4] == '.') break;

  VAR_4 += 1;
  VAR_3 -= VAR_4;
  FUNC_1(VAR_1, VAR_0+VAR_4, VAR_3);
  VAR_1[VAR_3] = '\0';
  return 1;
}
