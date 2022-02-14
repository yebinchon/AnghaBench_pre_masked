
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const**,char*,size_t,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (char const*) ;

char *
FUNC_4(const char *VAR_0[], const char *VAR_1)
{
 size_t VAR_2, VAR_3 = 0;
 char *VAR_4;

 for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
  VAR_3 += FUNC_3(VAR_0[VAR_2]);

 VAR_4 = FUNC_2(VAR_3 + 1);
 if (VAR_4 && FUNC_0(VAR_0, VAR_4, VAR_3 + 1, VAR_1))
  return VAR_4;
 FUNC_1(VAR_4);
 return ((void*)0);
}
