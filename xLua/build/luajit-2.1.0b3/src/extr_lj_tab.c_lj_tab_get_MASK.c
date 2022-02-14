
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef scalar_t__ lua_Number ;
typedef scalar_t__ int32_t ;
typedef int cTValue ;
struct TYPE_5__ {int val; int key; } ;
typedef TYPE_1__ Node ;
typedef int GCtab ;


 TYPE_1__* FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,scalar_t__) ;
 int * FUNC_5 (int *,int ) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;

cTValue *FUNC_14(lua_State *VAR_0, GCtab *VAR_1, cTValue *VAR_2)
{
  if (FUNC_13(VAR_2)) {
    cTValue *VAR_3 = FUNC_5(VAR_1, FUNC_9(VAR_2));
    if (VAR_3)
      return VAR_3;
  } else if (FUNC_10(VAR_2)) {
    cTValue *VAR_4 = FUNC_4(VAR_1, FUNC_1(VAR_2));
    if (VAR_4)
      return VAR_4;
  } else if (FUNC_12(VAR_2)) {
    lua_Number VAR_5 = FUNC_8(VAR_2);
    int32_t VAR_6 = FUNC_2(VAR_5);
    if (VAR_5 == (lua_Number)VAR_6) {
      cTValue *VAR_7 = FUNC_4(VAR_1, VAR_6);
      if (VAR_7)
 return VAR_7;
    } else {
      goto genlookup;
    }
  } else if (!FUNC_11(VAR_2)) {
    Node *VAR_8;
  genlookup:
    VAR_8 = FUNC_0(VAR_1, VAR_2);
    do {
      if (FUNC_3(&VAR_8->key, VAR_2))
 return &VAR_8->val;
    } while ((VAR_8 = FUNC_6(VAR_8)));
  }
  return FUNC_7(VAR_0);
}
