
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int top; } ;
typedef TYPE_1__ lua_State ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(lua_State *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
    const char *VAR_3)
{
  for (; *VAR_3; VAR_2 <<= 1, VAR_3 += 1+*VAR_3)
    if (VAR_1 & VAR_2)
      FUNC_1(VAR_0, VAR_0->top++, FUNC_0(VAR_0, VAR_3+1, *(uint8_t *)VAR_3));
}
