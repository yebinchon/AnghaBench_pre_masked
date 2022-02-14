
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef int lua_State ;
struct TYPE_4__ {scalar_t__ reserved; } ;
typedef TYPE_1__ GCstr ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int * VAR_1 ;

void FUNC_2(lua_State *VAR_2)
{
  uint32_t VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    GCstr *VAR_4 = FUNC_1(VAR_2, VAR_1[VAR_3]);
    FUNC_0(VAR_4);
    VAR_4->reserved = (uint8_t)(VAR_3+1);
  }
}
