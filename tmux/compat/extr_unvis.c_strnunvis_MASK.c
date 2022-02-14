
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;



 int const FUNC_0 (char*,char,int*,int ) ;

ssize_t
FUNC_1(char *VAR_1, const char *VAR_2, size_t VAR_3)
{
 char VAR_4, VAR_5;
 char *VAR_6 = VAR_1, *VAR_7 = VAR_1 + VAR_3 - 1;
 int VAR_8 = 0;

 if (VAR_3 > 0)
  *VAR_7 = '\0';
 while ((VAR_4 = *VAR_2++)) {
 again:
  switch (FUNC_0(&VAR_5, VAR_4, &VAR_8, 0)) {
  case 129:
   if (VAR_1 < VAR_7)
    *VAR_1 = VAR_5;
   VAR_1++;
   break;
  case 128:
   if (VAR_1 < VAR_7)
    *VAR_1 = VAR_5;
   VAR_1++;
   goto again;
  case 0:
  case 130:
   break;
  default:
   if (VAR_1 <= VAR_7)
    *VAR_1 = '\0';
   return (-1);
  }
 }
 if (FUNC_0(&VAR_5, VAR_4, &VAR_8, VAR_0) == 129) {
  if (VAR_1 < VAR_7)
   *VAR_1 = VAR_5;
  VAR_1++;
 }
 if (VAR_1 <= VAR_7)
  *VAR_1 = '\0';
 return (VAR_1 - VAR_6);
}
