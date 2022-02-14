
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void const*,char const,size_t) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

void *
FUNC_2(const void *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3)
{
 const char *VAR_4, *VAR_5;
 const char *VAR_6 = VAR_0;
 const char *VAR_7 = VAR_2;


 if (VAR_3 == 0)
  return (void *)VAR_6;


 if (VAR_1 < VAR_3)
  return ((void*)0);


 if (VAR_3 == 1)
  return FUNC_0(VAR_0, *VAR_7, VAR_1);


 VAR_5 = VAR_6 + VAR_1 - VAR_3;

 for (VAR_4 = VAR_6; VAR_4 <= VAR_5; VAR_4++)
  if (VAR_4[0] == VAR_7[0] && FUNC_1(VAR_4, VAR_7, VAR_3) == 0)
   return (void *)VAR_4;

 return ((void*)0);
}
