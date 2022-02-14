
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int isRunning; int startsystime; int startusertime; int startrealtime; } ;
typedef TYPE_1__ Timer ;


 TYPE_1__* FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0)
{
  Timer *VAR_1 = FUNC_0(VAR_0, 1, "torch.Timer");
  if(!VAR_1->isRunning)
  {
    VAR_1->isRunning = 1;
    VAR_1->startrealtime = FUNC_2();
    VAR_1->startusertime = FUNC_4();
    VAR_1->startsystime = FUNC_3();
  }
  FUNC_1(VAR_0, 1);
  return 1;
}
