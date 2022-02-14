
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int lua_Number ;
typedef size_t int32_t ;
struct TYPE_6__ {int * fpr; scalar_t__* gpr; } ;
typedef TYPE_2__ ExitState ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(lua_State *VAR_2, ExitState *VAR_3)
{
  int32_t VAR_4;
  FUNC_1(VAR_2->top++, VAR_1);
  FUNC_1(VAR_2->top++, VAR_0);
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    if (sizeof(VAR_3->gpr[VAR_4]) == sizeof(int32_t))
      FUNC_1(VAR_2->top++, (int32_t)VAR_3->gpr[VAR_4]);
    else
      FUNC_3(VAR_2->top++, (lua_Number)VAR_3->gpr[VAR_4]);
  }

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    FUNC_3(VAR_2->top, VAR_3->fpr[VAR_4]);
    if (FUNC_0(FUNC_4(VAR_2->top)))
      FUNC_2(VAR_2->top);
    VAR_2->top++;
  }

}
