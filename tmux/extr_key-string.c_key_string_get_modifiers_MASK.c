
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ key_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static key_code
FUNC_0(const char **VAR_3)
{
 key_code VAR_4;

 VAR_4 = 0;
 while (((*VAR_3)[0] != '\0') && (*VAR_3)[1] == '-') {
  switch ((*VAR_3)[0]) {
  case 'C':
  case 'c':
   VAR_4 |= VAR_0;
   break;
  case 'M':
  case 'm':
   VAR_4 |= VAR_1;
   break;
  case 'S':
  case 's':
   VAR_4 |= VAR_2;
   break;
  default:
   *VAR_3 = ((void*)0);
   return (0);
  }
  *VAR_3 += 2;
 }
 return (VAR_4);
}
