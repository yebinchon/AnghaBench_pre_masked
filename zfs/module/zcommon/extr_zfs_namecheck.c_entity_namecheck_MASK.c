
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namecheck_err_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;

int
FUNC_2(const char *VAR_11, namecheck_err_t *VAR_12, char *VAR_13)
{
 const char *VAR_14;




 if (FUNC_0(VAR_11) >= VAR_10) {
  if (VAR_12)
   *VAR_12 = VAR_8;
  return (-1);
 }


 if (VAR_11[0] == '/') {
  if (VAR_12)
   *VAR_12 = VAR_4;
  return (-1);
 }

 if (VAR_11[0] == '\0') {
  if (VAR_12)
   *VAR_12 = VAR_2;
  return (-1);
 }

 const char *VAR_15 = VAR_11;
 boolean_t VAR_16 = VAR_0;
 for (;;) {

  VAR_14 = VAR_15;
  while (*VAR_14 != '/' && *VAR_14 != '@' && *VAR_14 != '#' &&
      *VAR_14 != '\0')
   VAR_14++;

  if (*VAR_14 == '\0' && VAR_14[-1] == '/') {

   if (VAR_12)
    *VAR_12 = VAR_9;
   return (-1);
  }


  for (const char *VAR_17 = VAR_15; VAR_17 != VAR_14; VAR_17++) {
   if (!FUNC_1(*VAR_17) && *VAR_17 != '%') {
    if (VAR_12) {
     *VAR_12 = VAR_3;
     *VAR_13 = *VAR_17;
    }
    return (-1);
   }
  }

  if (*VAR_14 == '\0' || *VAR_14 == '/') {
   int VAR_18 = VAR_14 - VAR_15;

   if (VAR_18 == 1) {
    if (VAR_15[0] == '.') {
     if (VAR_12)
      *VAR_12 = VAR_7;
     return (-1);
    }
   }


   if (VAR_18 == 2) {
    if (VAR_15[0] == '.' && VAR_15[1] == '.') {
     if (VAR_12)
      *VAR_12 = VAR_6;
     return (-1);
    }
   }
  }


  if (*VAR_14 == '@' || *VAR_14 == '#') {

   if (VAR_16 != 0) {
    if (VAR_12)
     *VAR_12 = VAR_5;
    return (-1);
   }

   VAR_16 = VAR_1;
  }


  if (VAR_15 == VAR_14) {
   if (VAR_12)
    *VAR_12 = VAR_2;
   return (-1);
  }


  if (*VAR_14 == '\0')
   return (0);





  if (*VAR_14 == '/' && VAR_16 != 0) {
   if (VAR_12)
    *VAR_12 = VAR_9;
   return (-1);
  }


  VAR_15 = VAR_14 + 1;
 }
}
