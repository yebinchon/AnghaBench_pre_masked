
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static bool
FUNC_2(const char **VAR_0, unsigned long *VAR_1, char VAR_2, bool VAR_3)
{
 const char *VAR_4 = *VAR_0;
 char *VAR_5;

 if (*VAR_4 != VAR_2)
  return VAR_3;

 VAR_4++;
 *VAR_1 = FUNC_1(VAR_4, &VAR_5, 10);
 if (VAR_5 == VAR_4)
  return 0;

 while (FUNC_0(*VAR_5))
  VAR_5++;
 *VAR_0 = VAR_5;
 return 1;
}
