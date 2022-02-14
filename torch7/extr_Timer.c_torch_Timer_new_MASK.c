
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int __int64 ;
struct TYPE_4__ {int isRunning; int startsystime; int startusertime; int startrealtime; scalar_t__ totalsystime; scalar_t__ totalusertime; scalar_t__ totalrealtime; } ;
typedef TYPE_1__ Timer ;
typedef int LARGE_INTEGER ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_1)
{







  Timer *VAR_2 = FUNC_2(VAR_1, sizeof(Timer));
  VAR_2->isRunning = 1;
  VAR_2->totalrealtime = 0;
  VAR_2->totalusertime = 0;
  VAR_2->totalsystime = 0;
  VAR_2->startrealtime = FUNC_4();
  VAR_2->startusertime = FUNC_6();
  VAR_2->startsystime = FUNC_5();
  FUNC_3(VAR_1, VAR_2, "torch.Timer");
  return 1;
}
