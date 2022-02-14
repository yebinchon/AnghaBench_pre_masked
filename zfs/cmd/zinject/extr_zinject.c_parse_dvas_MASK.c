
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_3, uint32_t *VAR_4)
{
 const char *VAR_5 = VAR_3;
 uint32_t VAR_6 = 0;
 boolean_t VAR_7 = VAR_0;


 if (FUNC_0(VAR_3) > 5 || FUNC_0(VAR_3) == 0)
  return (VAR_2);

 while (*VAR_5 != '\0') {
  switch (*VAR_5) {
  case '0':
  case '1':
  case '2':

   if (VAR_7)
    return (VAR_2);


   if (VAR_6 & (1 << ((*VAR_5) - '0')))
    return (VAR_2);

   VAR_6 |= (1 << ((*VAR_5) - '0'));
   VAR_7 = VAR_1;
   break;
  case ',':
   VAR_7 = VAR_0;
   break;
  default:

   return (VAR_2);
  }
  VAR_5++;
 }


 if (!VAR_7)
  return (VAR_2);

 *VAR_4 = VAR_6;
 return (0);
}
