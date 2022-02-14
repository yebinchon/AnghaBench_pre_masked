
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * top; } ;
typedef TYPE_1__ lua_State ;
typedef int cTValue ;
typedef int TValue ;
typedef int ASMFunction ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static TValue *FUNC_5(lua_State *VAR_1, ASMFunction VAR_2, cTValue *VAR_3,
      cTValue *VAR_4, cTValue *VAR_5)
{
  TValue *VAR_6 = VAR_1->top;
  if (FUNC_1(VAR_1)) VAR_6 = FUNC_2(VAR_1);
  FUNC_3(VAR_6++, VAR_2);
  if (VAR_0) FUNC_4(VAR_6++);
  FUNC_0(VAR_1, VAR_6++, VAR_3);
  if (VAR_0) FUNC_4(VAR_6++);
  FUNC_0(VAR_1, VAR_6, VAR_4);
  FUNC_0(VAR_1, VAR_6+1, VAR_5);
  return VAR_6;
}
