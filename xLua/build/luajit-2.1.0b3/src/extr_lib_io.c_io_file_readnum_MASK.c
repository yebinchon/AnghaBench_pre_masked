
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ lua_Number ;
typedef scalar_t__ int32_t ;
typedef int cTValue ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_2, FILE *VAR_3)
{
  lua_Number VAR_4;
  if (FUNC_0(VAR_3, VAR_1, &VAR_4) == 1) {
    if (VAR_0) {
      int32_t VAR_5 = FUNC_1(VAR_4);
      if (VAR_4 == (lua_Number)VAR_5 && !FUNC_5((cTValue *)&VAR_4)) {
 FUNC_2(VAR_2->top++, VAR_5);
 return 1;
      }
    }
    FUNC_4(VAR_2->top++, VAR_4);
    return 1;
  } else {
    FUNC_3(VAR_2->top++);
    return 0;
  }
}
