
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
typedef int lua_CFunction ;
struct TYPE_8__ {int env; } ;
struct TYPE_10__ {TYPE_1__ c; } ;
typedef int GCtab ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(lua_State *VAR_1, const char *VAR_2, lua_CFunction VAR_3, GCtab *VAR_4)
{
  FUNC_1(VAR_1, VAR_0, "_PRELOAD", 4);
  FUNC_2(VAR_1, VAR_3);

  FUNC_5(FUNC_0(VAR_1->top-1)->c.env, FUNC_4(VAR_4));
  FUNC_3(VAR_1, -2, VAR_2);
  VAR_1->top--;
}
