
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 char* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 char* FUNC_5 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0, int VAR_1)
{
  int32_t VAR_2 = FUNC_2(VAR_0, 2);
  const char *VAR_3;
  FUNC_1(VAR_0, 1);
  VAR_3 = VAR_1 ? FUNC_3(VAR_0, 1, VAR_2) : FUNC_5(VAR_0, 1, VAR_2);
  if (VAR_3) {
    FUNC_4(VAR_0, VAR_3);
    if (!VAR_1) return 1;
    FUNC_0(VAR_0, VAR_0->top, VAR_0->top-2);
    VAR_0->top++;
    return 2;
  }
  return 0;
}
