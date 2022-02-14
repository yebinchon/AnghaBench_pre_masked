
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int top; } ;
typedef TYPE_2__ lua_State ;
typedef int lua_CFunction ;
struct TYPE_11__ {int env; } ;
struct TYPE_13__ {TYPE_1__ c; } ;
typedef int GCtab ;
typedef int GCfunc ;


 TYPE_9__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int * FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (TYPE_2__*,int *,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int *) ;
 int * FUNC_6 (int ) ;

int FUNC_7(lua_State *VAR_0, lua_CFunction VAR_1, int VAR_2, const char *VAR_3)
{
  GCfunc *VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
  GCtab *VAR_5 = FUNC_6(FUNC_0(VAR_0)->c.env);
  FUNC_5(VAR_0, FUNC_4(VAR_0, VAR_5, FUNC_3(VAR_0, VAR_3)), VAR_4);
  FUNC_1(VAR_0, VAR_5);
  FUNC_5(VAR_0, VAR_0->top++, VAR_4);
  return 1;
}
