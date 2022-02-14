
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int cTValue ;
typedef int TValue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(lua_State *VAR_2, TValue *VAR_3, TValue *VAR_4)
{
  cTValue *VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1);
  TValue *VAR_6;
  if (!FUNC_3(VAR_5))
    FUNC_1(VAR_2, VAR_3);
  for (VAR_6 = VAR_4; VAR_6 > VAR_3+2*VAR_0; VAR_6--) FUNC_0(VAR_2, VAR_6, VAR_6-1);
  if (VAR_0) FUNC_0(VAR_2, VAR_3+2, VAR_3);
  FUNC_0(VAR_2, VAR_3, VAR_5);
}
