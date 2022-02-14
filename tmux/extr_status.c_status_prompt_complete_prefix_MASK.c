
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;


 size_t FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(char **VAR_0, u_int VAR_1)
{
 char *VAR_2;
 u_int VAR_3;
 size_t VAR_4;

 VAR_2 = FUNC_1(VAR_0[0]);
 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0[VAR_3]);
  if (VAR_4 > FUNC_0(VAR_2))
   VAR_4 = FUNC_0(VAR_2);
  for (; VAR_4 > 0; VAR_4--) {
   if (VAR_2[VAR_4 - 1] != VAR_0[VAR_3][VAR_4 - 1])
    VAR_2[VAR_4 - 1] = '\0';
  }
 }
 return (VAR_2);
}
