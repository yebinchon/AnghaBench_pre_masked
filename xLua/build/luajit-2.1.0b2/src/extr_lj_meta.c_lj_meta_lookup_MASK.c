
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef int cTValue ;
struct TYPE_4__ {int metatable; } ;
struct TYPE_3__ {int metatable; } ;
typedef int MMS ;
typedef int GCtab ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *) ;

cTValue *FUNC_10(lua_State *VAR_0, cTValue *VAR_1, MMS VAR_2)
{
  GCtab *VAR_3;
  if (FUNC_7(VAR_1))
    VAR_3 = FUNC_6(FUNC_5(VAR_1)->metatable);
  else if (FUNC_8(VAR_1))
    VAR_3 = FUNC_6(FUNC_9(VAR_1)->metatable);
  else
    VAR_3 = FUNC_6(FUNC_1(FUNC_0(VAR_0), VAR_1));
  if (VAR_3) {
    cTValue *VAR_4 = FUNC_2(VAR_3, FUNC_3(FUNC_0(VAR_0), VAR_2));
    if (VAR_4)
      return VAR_4;
  }
  return FUNC_4(VAR_0);
}
