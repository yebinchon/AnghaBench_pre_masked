
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_env {int dummy; } ;


 scalar_t__ FUNC_0 (struct argv_env*,char const***,char const**,int,int) ;
 int FUNC_1 (char const**) ;

char *
FUNC_2(struct argv_env *VAR_0, const char *VAR_1)
{
 const char *VAR_2[] = { VAR_1, ((void*)0) };
 const char **VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);

 if (FUNC_0(VAR_0, &VAR_3, VAR_2, 0, 1))
  VAR_4 = (char *) VAR_3[0];

 FUNC_1(VAR_3);
 return VAR_4;
}
