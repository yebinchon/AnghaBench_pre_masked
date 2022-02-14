
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int closed; int tv; int v; int gct; } ;
typedef TYPE_1__ GCupval ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static GCupval *FUNC_3(lua_State *VAR_1)
{
  GCupval *VAR_2 = (GCupval *)FUNC_0(VAR_1, sizeof(GCupval));
  VAR_2->gct = ~VAR_0;
  VAR_2->closed = 1;
  FUNC_2(&VAR_2->tv);
  FUNC_1(VAR_2->v, &VAR_2->tv);
  return VAR_2;
}
