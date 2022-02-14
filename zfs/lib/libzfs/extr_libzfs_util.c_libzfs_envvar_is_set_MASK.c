
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,int *,int ) ;

int
FUNC_4(char *VAR_0)
{
 char *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 && (FUNC_3(VAR_1, ((void*)0), 0) > 0 ||
     (!FUNC_1(VAR_1, "YES", 3) && FUNC_2(VAR_1, 4) == 3) ||
     (!FUNC_1(VAR_1, "ON", 2) && FUNC_2(VAR_1, 3) == 2)))
  return (1);

 return (0);
}
