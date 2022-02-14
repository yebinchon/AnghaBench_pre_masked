
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,int ) ;

boolean_t
FUNC_1(const char *VAR_2)
{
 int VAR_3;
 boolean_t VAR_4 = VAR_0;

 VAR_3 = 0;
 while (VAR_2[VAR_3] != '\0') {
  char VAR_5 = VAR_2[VAR_3++];
  if (VAR_5 == ':') {
   if (VAR_4)
    return (VAR_0);
   VAR_4 = VAR_1;
   continue;
  }
  if (!FUNC_0(VAR_5, VAR_4))
   return (VAR_0);
 }

 return (VAR_4);
}
