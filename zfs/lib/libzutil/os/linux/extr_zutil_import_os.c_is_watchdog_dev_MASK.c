
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static boolean_t
FUNC_3(char *VAR_2)
{

 if (FUNC_1(VAR_2, "watchdog") == 0)
  return (VAR_1);


 if (FUNC_2(VAR_2, "watchdog") == VAR_2 && FUNC_0(VAR_2[8]))
  return (VAR_1);

 return (VAR_0);
}
