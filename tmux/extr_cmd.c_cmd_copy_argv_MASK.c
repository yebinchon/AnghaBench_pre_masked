
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int,int) ;
 char* FUNC_1 (char*) ;

char **
FUNC_2(int VAR_0, char **VAR_1)
{
 char **VAR_2;
 int VAR_3;

 if (VAR_0 == 0)
  return (((void*)0));
 VAR_2 = FUNC_0(VAR_0 + 1, sizeof *VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3] != ((void*)0))
   VAR_2[VAR_3] = FUNC_1(VAR_1[VAR_3]);
 }
 return (VAR_2);
}
