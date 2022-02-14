
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {TYPE_1__* fs; int * L; } ;
struct TYPE_4__ {int kt; } ;
typedef int TValue ;
typedef TYPE_2__ LexState ;
typedef int GCcdata ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *,int *) ;

void FUNC_3(LexState *VAR_0, TValue *VAR_1, GCcdata *VAR_2)
{

  lua_State *VAR_3 = VAR_0->L;
  FUNC_2(VAR_3, VAR_1, VAR_2);
  FUNC_1(FUNC_0(VAR_3, VAR_0->fs->kt, VAR_1), 1);
}
