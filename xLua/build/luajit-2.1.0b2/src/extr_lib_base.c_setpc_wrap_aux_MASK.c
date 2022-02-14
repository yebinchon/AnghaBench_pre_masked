
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {int * bcff; } ;
struct TYPE_5__ {int pc; } ;
struct TYPE_6__ {TYPE_1__ c; } ;
typedef TYPE_2__ GCfunc ;


 TYPE_4__* FUNC_0 (int *) ;
 int* VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(lua_State *VAR_1, GCfunc *VAR_2)
{
  FUNC_1(VAR_2->c.pc, &FUNC_0(VAR_1)->bcff[VAR_0[1]+2]);
}
