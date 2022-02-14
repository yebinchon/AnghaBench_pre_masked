
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int lua_State ;
struct TYPE_4__ {scalar_t__ hmask; } ;
typedef TYPE_1__ GCtab ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,TYPE_1__*,scalar_t__,scalar_t__) ;

void FUNC_2(lua_State *VAR_0, GCtab *VAR_1, uint32_t VAR_2)
{
  FUNC_1(VAR_0, VAR_1, VAR_2+1, VAR_1->hmask > 0 ? FUNC_0(VAR_1->hmask)+1 : 0);
}
