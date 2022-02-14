
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char,int,char const) ;

int
FUNC_1(char *VAR_0, const char *VAR_1, int VAR_2)
{
 char VAR_3;
 char *VAR_4;

 for (VAR_4 = VAR_0; (VAR_3 = *VAR_1);)
  VAR_0 = FUNC_0(VAR_0, VAR_3, VAR_2, *++VAR_1);
 *VAR_0 = '\0';
 return (VAR_0 - VAR_4);
}
