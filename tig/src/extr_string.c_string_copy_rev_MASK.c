
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,size_t,char const*,size_t) ;

void
FUNC_2(char *VAR_1, const char *VAR_2)
{
 size_t VAR_3;

 if (!*VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!VAR_2[VAR_3] || FUNC_0(VAR_2[VAR_3]))
   break;

 FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3);
}
