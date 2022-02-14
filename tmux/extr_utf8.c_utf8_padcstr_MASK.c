
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (scalar_t__) ;
 char* FUNC_4 (char const*) ;

char *
FUNC_5(const char *VAR_0, u_int VAR_1)
{
 size_t VAR_2;
 char *VAR_3;
 u_int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4 >= VAR_1)
  return (FUNC_4(VAR_0));

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_3(VAR_2 + 1 + (VAR_1 - VAR_4));
 FUNC_0(VAR_3, VAR_0, VAR_2);
 for (VAR_5 = VAR_4; VAR_5 < VAR_1; VAR_5++)
  VAR_3[VAR_2++] = ' ';
 VAR_3[VAR_2] = '\0';
 return (VAR_3);
}
