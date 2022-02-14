
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 char VAR_2;

 if (VAR_1 == ((void*)0))
  return (0);

 if (VAR_0 == ((void*)0))
  VAR_0 = "";

 do {
  if ((VAR_2 = *VAR_1++) == '\0')
   return (*VAR_0 == '\0');

  if (VAR_2 == '*') {
   while (*VAR_1 == '*')
    VAR_1++;

   if (*VAR_1 == '\0')
    return (1);

   while (*VAR_0 != '\0') {
    if (FUNC_0(VAR_0++, VAR_1) != 0)
     return (1);
   }

   return (0);
  }
 } while (VAR_2 == *VAR_0++);

 return (0);
}
