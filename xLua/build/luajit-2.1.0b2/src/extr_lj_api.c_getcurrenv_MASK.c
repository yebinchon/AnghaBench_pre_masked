
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int env; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_7__ {int env; int gct; } ;
struct TYPE_9__ {TYPE_1__ c; } ;
typedef int GCtab ;
typedef TYPE_3__ GCfunc ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static GCtab *FUNC_2(lua_State *VAR_1)
{
  GCfunc *VAR_2 = FUNC_0(VAR_1);
  return VAR_2->c.gct == ~VAR_0 ? FUNC_1(VAR_2->c.env) : FUNC_1(VAR_1->env);
}
