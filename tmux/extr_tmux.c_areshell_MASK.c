
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char const*,char) ;

int
FUNC_3(const char *VAR_0)
{
 const char *VAR_1, *VAR_2;

 if ((VAR_2 = FUNC_2(VAR_0, '/')) != ((void*)0))
  VAR_2++;
 else
  VAR_2 = VAR_0;
 VAR_1 = FUNC_0();
 if (*VAR_1 == '-')
  VAR_1++;
 if (FUNC_1(VAR_2, VAR_1) == 0)
  return (1);
 return (0);
}
