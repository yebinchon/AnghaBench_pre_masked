
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,char const*,int ) ;

int
FUNC_2(char *VAR_1, size_t VAR_2, const char *VAR_3, va_list VAR_4)
{
 int VAR_5;

 if (VAR_2 > VAR_0)
  FUNC_0("xsnprintf: len > INT_MAX");

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_5 < 0 || VAR_5 >= (int)VAR_2)
  FUNC_0("xsnprintf: overflow");

 return VAR_5;
}
