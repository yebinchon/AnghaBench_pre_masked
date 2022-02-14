
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_11__ {scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
typedef int lua_CFunction ;
struct TYPE_13__ {int bc_cfunc_int; } ;
struct TYPE_10__ {int pc; scalar_t__ ffid; } ;
struct TYPE_12__ {TYPE_1__ c; } ;
typedef TYPE_3__ GCfunc ;


 TYPE_8__* FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ,int *) ;

GCfunc *FUNC_4(lua_State *VAR_0, lua_CFunction VAR_1, int VAR_2, int VAR_3)
{
  GCfunc *VAR_4;
  FUNC_2(VAR_0, VAR_1, VAR_3);
  VAR_4 = FUNC_1(VAR_0->top-1);
  VAR_4->c.ffid = (uint8_t)VAR_2;
  FUNC_3(VAR_4->c.pc, &FUNC_0(VAR_0)->bc_cfunc_int);
  return VAR_4;
}
