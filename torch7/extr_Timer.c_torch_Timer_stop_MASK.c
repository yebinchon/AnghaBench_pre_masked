
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {scalar_t__ isRunning; int totalsystime; int totalusertime; int totalrealtime; scalar_t__ startsystime; scalar_t__ startusertime; scalar_t__ startrealtime; } ;
typedef TYPE_1__ Timer ;
typedef scalar_t__ TimeType ;


 TYPE_1__* FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0)
{
  Timer *VAR_1 = FUNC_0(VAR_0, 1, "torch.Timer");
  if(VAR_1->isRunning)
  {
    TimeType VAR_2 = FUNC_2() - VAR_1->startrealtime;
    TimeType VAR_3 = FUNC_4() - VAR_1->startusertime;
    TimeType VAR_4 = FUNC_3() - VAR_1->startsystime;
    VAR_1->totalrealtime += VAR_2;
    VAR_1->totalusertime += VAR_3;
    VAR_1->totalsystime += VAR_4;
    VAR_1->isRunning = 0;
  }
  FUNC_1(VAR_0, 1);
  return 1;
}
