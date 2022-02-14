
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char**,char const*,int ) ;

int
FUNC_3(char **VAR_1, const char *VAR_2, va_list VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);

 if (VAR_4 == -1)
  FUNC_0("xasprintf: %s", FUNC_1(VAR_0));

 return VAR_4;
}
