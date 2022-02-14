
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int cTValue ;
typedef int TValue ;
typedef scalar_t__ MMS ;
typedef int BCReg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int * FUNC_4 (int *,int ,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;

TValue *FUNC_9(lua_State *VAR_3, TValue *VAR_4, cTValue *VAR_5, cTValue *VAR_6,
        BCReg VAR_7)
{
  MMS VAR_8 = FUNC_0(VAR_7);
  TValue VAR_9, VAR_10;
  cTValue *VAR_11, *VAR_12;
  if ((VAR_11 = FUNC_7(VAR_5, &VAR_9)) != ((void*)0) &&
      (VAR_12 = FUNC_7(VAR_6, &VAR_10)) != ((void*)0)) {
    FUNC_6(VAR_4, FUNC_3(FUNC_5(VAR_11), FUNC_5(VAR_12), (int)VAR_8-VAR_1));
    return ((void*)0);
  } else {
    cTValue *VAR_13 = FUNC_2(VAR_3, VAR_5, VAR_8);
    if (FUNC_8(VAR_13)) {
      VAR_13 = FUNC_2(VAR_3, VAR_6, VAR_8);
      if (FUNC_8(VAR_13)) {
 if (FUNC_7(VAR_5, &VAR_9) == ((void*)0)) VAR_6 = VAR_5;
 FUNC_1(VAR_3, VAR_6, VAR_0);
 return ((void*)0);
      }
    }
    return FUNC_4(VAR_3, VAR_2, VAR_13, VAR_5, VAR_6);
  }
}
