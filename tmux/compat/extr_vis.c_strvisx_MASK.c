
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const,int,char const) ;

int
FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2, int VAR_3)
{
 char VAR_4;
 char *VAR_5;

 for (VAR_5 = VAR_0; VAR_2 > 1; VAR_2--) {
  VAR_4 = *VAR_1;
  VAR_0 = FUNC_0(VAR_0, VAR_4, VAR_3, *++VAR_1);
 }
 if (VAR_2)
  VAR_0 = FUNC_0(VAR_0, *VAR_1, VAR_3, '\0');
 *VAR_0 = '\0';
 return (VAR_0 - VAR_5);
}
