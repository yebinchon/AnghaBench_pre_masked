
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

size_t
FUNC_2(char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 char *VAR_3 = VAR_0;
 size_t VAR_4 = VAR_2;
 size_t VAR_5;
 size_t VAR_6 = FUNC_1(VAR_1);
 size_t VAR_7;

 while (VAR_4-- != 0 && *VAR_3 != '\0')
  VAR_3++;
 VAR_5 = VAR_3 - VAR_0;
 if (VAR_2 == VAR_5)
  return (VAR_5 + VAR_6);

 VAR_7 = VAR_5 + VAR_6 >= VAR_2 ? VAR_2 - VAR_5 - 1 : VAR_6;
 (void) FUNC_0(VAR_0 + VAR_5, VAR_1, VAR_7);
 VAR_0[VAR_5+VAR_7] = '\0';

 return (VAR_5 + VAR_6);
}
