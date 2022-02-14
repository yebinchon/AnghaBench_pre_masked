
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const) ;

bool
FUNC_1(const char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
  if (!FUNC_0(VAR_1[VAR_2]))
   return 0;
 }

 return 7 <= VAR_2 && VAR_2 < VAR_0;
}
