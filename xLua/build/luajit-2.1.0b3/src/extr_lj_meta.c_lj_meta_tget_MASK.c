
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int cTValue ;
struct TYPE_13__ {int metatable; } ;
typedef TYPE_2__ GCtab ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int * FUNC_3 (TYPE_1__*,int ,int ) ;
 int * FUNC_4 (TYPE_1__*,int *,int ) ;
 int * FUNC_5 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *,int *,int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

cTValue *FUNC_12(lua_State *VAR_5, cTValue *VAR_6, cTValue *VAR_7)
{
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
    cTValue *VAR_9;
    if (FUNC_0(FUNC_11(VAR_6))) {
      GCtab *VAR_10 = FUNC_7(VAR_6);
      cTValue *VAR_11 = FUNC_5(VAR_5, VAR_10, VAR_7);
      if (!FUNC_10(VAR_11) ||
   !(VAR_9 = FUNC_3(VAR_5, FUNC_8(VAR_10->metatable), VAR_3)))
 return VAR_11;
    } else if (FUNC_10(VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_3))) {
      FUNC_2(VAR_5, VAR_6, VAR_1);
      return ((void*)0);
    }
    if (FUNC_9(VAR_9)) {
      VAR_5->top = FUNC_6(VAR_5, VAR_4, VAR_9, VAR_6, VAR_7);
      return ((void*)0);
    }
    VAR_6 = VAR_9;
  }
  FUNC_1(VAR_5, VAR_0);
  return ((void*)0);
}
