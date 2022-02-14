
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
typedef int TValue ;
typedef int TMS ;
typedef int StkId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*,int const*,int ,int) ;
 int FUNC_1 (int *,int const*,int const*) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (int const*,int *) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8 (lua_State *VAR_4, StkId VAR_5, const TValue *VAR_6,
                 const TValue *VAR_7, TMS VAR_8) {
  TValue VAR_9, VAR_10;
  const TValue *VAR_11, *VAR_12;
  if ((VAR_11 = FUNC_5(VAR_6, &VAR_9)) != ((void*)0) &&
      (VAR_12 = FUNC_5(VAR_7, &VAR_10)) != ((void*)0)) {



    lua_Number VAR_13;
    int VAR_14 = VAR_8 - VAR_3 + VAR_0;
    if (VAR_14 == VAR_1) {
      VAR_13 = FUNC_3(VAR_4, FUNC_6(VAR_11), FUNC_6(VAR_12));
    } else if (VAR_14 == VAR_2) {
      VAR_13 = FUNC_4(VAR_4, FUNC_6(VAR_11), FUNC_6(VAR_12));
    } else {
      VAR_13 = FUNC_2(VAR_8 - VAR_3 + VAR_0, FUNC_6(VAR_11), FUNC_6(VAR_12));
    }
    FUNC_7(VAR_5, VAR_13);
  }
  else if (!FUNC_0(VAR_4, VAR_6, VAR_7, VAR_5, VAR_8))
    FUNC_1(VAR_4, VAR_6, VAR_7);
}
