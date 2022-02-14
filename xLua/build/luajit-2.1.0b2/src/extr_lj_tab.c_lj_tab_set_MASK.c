
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lua_State ;
typedef scalar_t__ lua_Number ;
typedef scalar_t__ int32_t ;
typedef int cTValue ;
struct TYPE_12__ {scalar_t__ nomm; } ;
struct TYPE_11__ {int val; int key; } ;
typedef int TValue ;
typedef TYPE_1__ Node ;
typedef TYPE_2__ GCtab ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,TYPE_2__*,int *) ;
 int * FUNC_6 (int *,TYPE_2__*,scalar_t__) ;
 int * FUNC_7 (int *,TYPE_2__*,int ) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;

TValue *FUNC_16(lua_State *VAR_2, GCtab *VAR_3, cTValue *VAR_4)
{
  Node *VAR_5;
  VAR_3->nomm = 0;
  if (FUNC_15(VAR_4)) {
    return FUNC_7(VAR_2, VAR_3, FUNC_10(VAR_4));
  } else if (FUNC_11(VAR_4)) {
    return FUNC_6(VAR_2, VAR_3, FUNC_1(VAR_4));
  } else if (FUNC_14(VAR_4)) {
    lua_Number VAR_6 = FUNC_9(VAR_4);
    int32_t VAR_7 = FUNC_3(VAR_6);
    if (VAR_6 == (lua_Number)VAR_7)
      return FUNC_6(VAR_2, VAR_3, VAR_7);
    if (FUNC_12(VAR_4))
      FUNC_2(VAR_2, VAR_0);

  } else if (FUNC_13(VAR_4)) {
    FUNC_2(VAR_2, VAR_1);
  }
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  do {
    if (FUNC_4(&VAR_5->key, VAR_4))
      return &VAR_5->val;
  } while ((VAR_5 = FUNC_8(VAR_5)));
  return FUNC_5(VAR_2, VAR_3, VAR_4);
}
