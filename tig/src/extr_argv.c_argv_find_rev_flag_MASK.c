
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static inline bool
FUNC_2(const char *VAR_0[], size_t VAR_1, const char *VAR_2, size_t VAR_3,
     size_t *VAR_4, bool *VAR_5, bool *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  const char *VAR_8 = VAR_0[VAR_7];
  size_t VAR_9 = FUNC_0(VAR_8);

  if (VAR_9 > VAR_3 || FUNC_1(VAR_2, VAR_8, VAR_9))
   continue;

  if (VAR_4)
   *VAR_4 = VAR_9;
  else if (VAR_9 != VAR_3 && VAR_8[VAR_9 - 1] != '=')
   continue;

  if (VAR_5)
   *VAR_5 = 0;
  if (VAR_6)
   *VAR_6 = 1;

  return 1;
 }

 return 0;
}
