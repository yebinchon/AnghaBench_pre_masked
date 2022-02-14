
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*,size_t) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(int VAR_0, char **VAR_1)
{
 char *VAR_2;
 int VAR_3;
 size_t VAR_4;

 if (VAR_0 == 0)
  return (FUNC_3(""));

 VAR_4 = 0;
 VAR_2 = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 += FUNC_1(VAR_1[VAR_3]) + 1;
  VAR_2 = FUNC_2(VAR_2, VAR_4);

  if (VAR_3 == 0)
   *VAR_2 = '\0';
  else
   FUNC_0(VAR_2, " ", VAR_4);
  FUNC_0(VAR_2, VAR_1[VAR_3], VAR_4);
 }
 return (VAR_2);
}
