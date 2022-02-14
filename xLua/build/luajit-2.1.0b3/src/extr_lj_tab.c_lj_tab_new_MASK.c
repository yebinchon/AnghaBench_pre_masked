
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int lua_State ;
struct TYPE_6__ {scalar_t__ hmask; } ;
typedef TYPE_1__ GCtab ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int ,int ) ;

GCtab *FUNC_3(lua_State *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
  GCtab *VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  FUNC_0(VAR_3);
  if (VAR_3->hmask > 0) FUNC_1(VAR_3);
  return VAR_3;
}
