
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef scalar_t__ utf8proc_ssize_t ;


 scalar_t__ FUNC_0 (char const*,size_t,scalar_t__*) ;

int
FUNC_1(wchar_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
 utf8proc_ssize_t VAR_3;

 if (VAR_1 == ((void*)0))
  return (0);





 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (*VAR_0 == (wchar_t)-1 || VAR_3 < 0)
  return (-1);
 return (VAR_3);
}
