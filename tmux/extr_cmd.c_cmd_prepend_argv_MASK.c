
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 char** FUNC_1 (int *,int,int) ;
 char* FUNC_2 (char*) ;

void
FUNC_3(int *VAR_0, char ***VAR_1, char *VAR_2)
{
 char **VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(((void*)0), (*VAR_0) + 1, sizeof *VAR_3);
 VAR_3[0] = FUNC_2(VAR_2);
 for (VAR_4 = 0; VAR_4 < *VAR_0; VAR_4++)
  VAR_3[1 + VAR_4] = (*VAR_1)[VAR_4];

 FUNC_0(*VAR_1);
 *VAR_1 = VAR_3;
 (*VAR_0)++;
}
