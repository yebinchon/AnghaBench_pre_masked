
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char**) ;
 char* VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_3(char *VAR_3)
{
 char *VAR_4[3] = { VAR_1, VAR_3, (char *)0 };
 int VAR_5;

 if (VAR_2)
  FUNC_2();

 if (VAR_0) {
  VAR_5 = FUNC_0();
  if (VAR_5)
   return (VAR_5);
 }

 VAR_5 = FUNC_1(VAR_1, VAR_4);
 if (VAR_5)
  return (VAR_5);

 return (0);
}
