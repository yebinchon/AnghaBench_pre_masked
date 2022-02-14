
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ key_code ;


 int FUNC_0 (char const*,size_t,size_t*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2,
    size_t *VAR_3, key_code *VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 *VAR_4 = 0;

 if (VAR_2 == 0)
  return (0);

 VAR_5 = 0;
 do {
  if (*VAR_0 == '_') {
   VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5,
       VAR_4);
   if (VAR_6 != 0)
    return (VAR_6);
   continue;
  }
  if (VAR_1[VAR_5] != *VAR_0)
   return (-1);
  VAR_5++;
 } while (*++VAR_0 != '\0' && VAR_5 != VAR_2);

 if (*VAR_0 != '\0')
  return (1);

 *VAR_3 = VAR_5;
 return (0);
}
