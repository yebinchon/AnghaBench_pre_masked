
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*,char const*,int) ;

int
FUNC_3(const char *VAR_3, char *VAR_4)
{
 char *VAR_5 = FUNC_1(VAR_3, '@');
 if (VAR_5 == ((void*)0))
  return (FUNC_0(VAR_0));
 if (VAR_5 - VAR_3 >= VAR_2)
  return (FUNC_0(VAR_1));
 (void) FUNC_2(VAR_4, VAR_3, VAR_5 - VAR_3 + 1);
 return (0);
}
