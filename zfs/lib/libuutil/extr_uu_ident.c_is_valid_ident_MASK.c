
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 char VAR_3;

 if (VAR_0 >= VAR_1)
  return (0);

 VAR_3 = *VAR_0++;
 if (!FUNC_0(VAR_3))
  return (0);

 while (VAR_0 < VAR_1 && (VAR_3 = *VAR_0++) != 0) {
  if (FUNC_0(VAR_3) || FUNC_1(VAR_3) || VAR_3 == '-' || VAR_3 == '_' ||
      (VAR_2 && VAR_3 == '.'))
   continue;
  return (0);
 }
 return (1);
}
