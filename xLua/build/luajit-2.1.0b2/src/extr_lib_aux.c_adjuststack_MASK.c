
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int lvl; int * L; } ;
typedef TYPE_1__ luaL_Buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 size_t FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(luaL_Buffer *VAR_1)
{
  if (VAR_1->lvl > 1) {
    lua_State *VAR_2 = VAR_1->L;
    int VAR_3 = 1;
    size_t VAR_4 = FUNC_1(VAR_2, -1);
    do {
      size_t VAR_5 = FUNC_1(VAR_2, -(VAR_3+1));
      if (!(VAR_1->lvl - VAR_3 + 1 >= VAR_0/2 || VAR_4 > VAR_5))
 break;
      VAR_4 += VAR_5;
      VAR_3++;
    } while (VAR_3 < VAR_1->lvl);
    FUNC_0(VAR_2, VAR_3);
    VAR_1->lvl = VAR_1->lvl - VAR_3 + 1;
  }
}
