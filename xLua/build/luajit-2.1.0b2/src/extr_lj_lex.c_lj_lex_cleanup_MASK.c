
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef int global_State ;
struct TYPE_3__ {int sb; int sizevstack; int vstack; int sizebcstack; int bcstack; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;

void FUNC_3(lua_State *VAR_2, LexState *VAR_3)
{
  global_State *VAR_4 = FUNC_0(VAR_2);
  FUNC_2(VAR_4, VAR_3->bcstack, VAR_3->sizebcstack, VAR_0);
  FUNC_2(VAR_4, VAR_3->vstack, VAR_3->sizevstack, VAR_1);
  FUNC_1(VAR_4, &VAR_3->sb);
}
