
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;
struct TYPE_7__ {int env; int pc; scalar_t__ nupvalues; int ffid; int gct; } ;
struct TYPE_9__ {TYPE_1__ l; } ;
struct TYPE_8__ {scalar_t__ flags; scalar_t__ sizeuv; } ;
typedef int MSize ;
typedef int GCtab ;
typedef TYPE_2__ GCproto ;
typedef TYPE_3__ GCfunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static GCfunc *FUNC_6(lua_State *VAR_4, GCproto *VAR_5, GCtab *VAR_6)
{
  uint32_t VAR_7;
  GCfunc *VAR_8 = (GCfunc *)FUNC_0(VAR_4, FUNC_5((MSize)VAR_5->sizeuv));
  VAR_8->l.gct = ~VAR_1;
  VAR_8->l.ffid = VAR_0;
  VAR_8->l.nupvalues = 0;

  FUNC_4(VAR_8->l.pc, FUNC_2(VAR_5));
  FUNC_3(VAR_8->l.env, FUNC_1(VAR_6));

  VAR_7 = (uint32_t)VAR_5->flags + VAR_2;
  VAR_5->flags = (uint8_t)(VAR_7 - ((VAR_7 >> VAR_3) & VAR_2));
  return VAR_8;
}
