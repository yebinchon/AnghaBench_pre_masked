
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char) ;

bool
FUNC_2(char VAR_0[], size_t VAR_1, const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_2[VAR_3] && VAR_3 < VAR_1 - 1; VAR_3++) {
  VAR_0[VAR_3] = FUNC_0(VAR_2[VAR_3]);
  if (FUNC_1(VAR_0[VAR_3]))
   VAR_0[VAR_3] = '-';
 }

 VAR_0[VAR_3] = 0;
 return VAR_3 < VAR_1;
}
