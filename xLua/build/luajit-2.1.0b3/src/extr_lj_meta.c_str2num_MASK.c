
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int cTValue ;
typedef int TValue ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static cTValue *FUNC_7(cTValue *VAR_0, TValue *VAR_1)
{
  if (FUNC_5(VAR_0))
    return VAR_0;
  else if (FUNC_4(VAR_0))
    return (FUNC_2(VAR_1, (lua_Number)FUNC_0(VAR_0)), VAR_1);
  else if (FUNC_6(VAR_0) && FUNC_1(FUNC_3(VAR_0), VAR_1))
    return VAR_1;
  else
    return ((void*)0);
}
