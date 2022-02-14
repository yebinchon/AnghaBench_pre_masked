
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static boolean_t
FUNC_3(const char *VAR_4, char *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4);
 if (VAR_5[0] == '\0')
  return (VAR_1);

 if (!FUNC_2(VAR_5, VAR_2|VAR_3))
  return (VAR_0);

 if (FUNC_1(VAR_4, VAR_5, VAR_6) == 0 &&
     (VAR_5[VAR_6] == '/' || VAR_5[VAR_6] == '\0'))
  return (VAR_1);

 return (VAR_0);
}
