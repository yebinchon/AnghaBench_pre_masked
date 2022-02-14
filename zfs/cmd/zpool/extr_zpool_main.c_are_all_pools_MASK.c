
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, char **VAR_1)
{
 if ((VAR_0 == 0) || !*VAR_1)
  return (0);

 while (--VAR_0 >= 0)
  if (!FUNC_0(VAR_1[VAR_0]))
   return (0);

 return (1);
}
