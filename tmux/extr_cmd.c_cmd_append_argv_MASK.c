
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (char**,int,int) ;
 char* FUNC_1 (char*) ;

void
FUNC_2(int *VAR_0, char ***VAR_1, char *VAR_2)
{
 *VAR_1 = FUNC_0(*VAR_1, (*VAR_0) + 1, sizeof **VAR_1);
 (*VAR_1)[(*VAR_0)++] = FUNC_1(VAR_2);
}
