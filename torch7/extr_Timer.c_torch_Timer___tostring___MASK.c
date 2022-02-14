
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {scalar_t__ isRunning; } ;
typedef TYPE_1__ Timer ;


 TYPE_1__* FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0)
{
  Timer *VAR_1 = FUNC_0(VAR_0, 1, "torch.Timer");
  FUNC_1(VAR_0, "torch.Timer [status: %s]", (VAR_1->isRunning ? "running" : "stopped"));
  return 1;
}
