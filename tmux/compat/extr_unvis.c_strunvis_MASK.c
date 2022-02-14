
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



 int const FUNC_0 (char*,char,int*,int ) ;

int
FUNC_1(char *VAR_1, const char *VAR_2)
{
 char VAR_3;
 char *VAR_4 = VAR_1;
 int VAR_5 = 0;

 while ((VAR_3 = *VAR_2++)) {
 again:
  switch (FUNC_0(VAR_1, VAR_3, &VAR_5, 0)) {
  case 129:
   VAR_1++;
   break;
  case 128:
   VAR_1++;
   goto again;
  case 0:
  case 130:
   break;
  default:
   *VAR_1 = '\0';
   return (-1);
  }
 }
 if (FUNC_0(VAR_1, VAR_3, &VAR_5, VAR_0) == 129)
  VAR_1++;
 *VAR_1 = '\0';
 return (VAR_1 - VAR_4);
}
