
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int lua_State ;
struct TYPE_7__ {int bc_cfunc_ext; } ;
struct TYPE_5__ {int env; int pc; scalar_t__ nupvalues; int ffid; int gct; } ;
struct TYPE_6__ {TYPE_1__ c; } ;
typedef scalar_t__ MSize ;
typedef int GCtab ;
typedef TYPE_2__ GCfunc ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (scalar_t__) ;

GCfunc *FUNC_6(lua_State *VAR_2, MSize VAR_3, GCtab *VAR_4)
{
  GCfunc *VAR_5 = (GCfunc *)FUNC_1(VAR_2, FUNC_5(VAR_3));
  VAR_5->c.gct = ~VAR_1;
  VAR_5->c.ffid = VAR_0;
  VAR_5->c.nupvalues = (uint8_t)VAR_3;

  FUNC_4(VAR_5->c.pc, &FUNC_0(VAR_2)->bc_cfunc_ext);
  FUNC_3(VAR_5->c.env, FUNC_2(VAR_4));
  return VAR_5;
}
