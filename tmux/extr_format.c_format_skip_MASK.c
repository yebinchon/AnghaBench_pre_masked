
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char const) ;

const char *
FUNC_1(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;

 for (; *VAR_0 != '\0'; VAR_0++) {
  if (*VAR_0 == '#' && VAR_0[1] == '{')
   VAR_2++;
  if (*VAR_0 == '#' && FUNC_0(",#{}", VAR_0[1]) != ((void*)0)) {
   VAR_0++;
   continue;
  }
  if (*VAR_0 == '}')
   VAR_2--;
  if (FUNC_0(VAR_1, *VAR_0) != ((void*)0) && VAR_2 == 0)
   break;
 }
 if (*VAR_0 == '\0')
  return (((void*)0));
 return (VAR_0);
}
