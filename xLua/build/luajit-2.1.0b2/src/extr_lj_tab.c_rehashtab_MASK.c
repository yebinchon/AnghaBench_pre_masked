
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lua_State ;
typedef int cTValue ;
typedef int GCtab ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*,int*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int,int ) ;

__attribute__((used)) static void FUNC_6(lua_State *VAR_1, GCtab *VAR_2, cTValue *VAR_3)
{
  uint32_t VAR_4[VAR_0];
  uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) VAR_4[VAR_8] = 0;
  VAR_6 = FUNC_1(VAR_2, VAR_4);
  VAR_5 = 1 + VAR_6;
  VAR_5 += FUNC_2(VAR_2, VAR_4, &VAR_6);
  VAR_6 += FUNC_3(VAR_3, VAR_4);
  VAR_7 = FUNC_0(VAR_4, &VAR_6);
  VAR_5 -= VAR_7;
  FUNC_5(VAR_1, VAR_2, VAR_6, FUNC_4(VAR_5));
}
