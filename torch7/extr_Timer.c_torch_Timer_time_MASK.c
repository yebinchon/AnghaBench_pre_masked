
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {double totalrealtime; double startrealtime; double totalusertime; double startusertime; double totalsystime; double startsystime; scalar_t__ isRunning; } ;
typedef TYPE_1__ Timer ;


 TYPE_1__* FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *,int,char*) ;
 double VAR_0 ;
 double FUNC_4 () ;
 double FUNC_5 () ;
 double FUNC_6 () ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_1)
{
  Timer *VAR_2 = FUNC_0(VAR_1, 1, "torch.Timer");
  double VAR_3 = (VAR_2->isRunning ? (VAR_2->totalrealtime + FUNC_4() - VAR_2->startrealtime) : VAR_2->totalrealtime);
  double VAR_4 = (VAR_2->isRunning ? (VAR_2->totalusertime + FUNC_6() - VAR_2->startusertime) : VAR_2->totalusertime);
  double VAR_5 = (VAR_2->isRunning ? (VAR_2->totalsystime + FUNC_5() - VAR_2->startsystime) : VAR_2->totalsystime);





  FUNC_1(VAR_1, 0, 3);
  FUNC_2(VAR_1, VAR_3);
  FUNC_3(VAR_1, -2, "real");
  FUNC_2(VAR_1, VAR_4);
  FUNC_3(VAR_1, -2, "user");
  FUNC_2(VAR_1, VAR_5);
  FUNC_3(VAR_1, -2, "sys");
  return 1;
}
