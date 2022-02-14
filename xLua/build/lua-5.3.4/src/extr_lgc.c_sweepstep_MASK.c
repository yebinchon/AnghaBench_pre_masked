
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
typedef scalar_t__ l_mem ;
struct TYPE_3__ {int gcstate; int ** sweepgc; scalar_t__ GCdebt; int GCestimate; } ;
typedef TYPE_1__ global_State ;
typedef int GCObject ;


 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_0 (int *,int **,int) ;

__attribute__((used)) static lu_mem FUNC_1 (lua_State *VAR_2, global_State *VAR_3,
                         int VAR_4, GCObject **VAR_5) {
  if (VAR_3->sweepgc) {
    l_mem VAR_6 = VAR_3->GCdebt;
    VAR_3->sweepgc = FUNC_0(VAR_2, VAR_3->sweepgc, VAR_1);
    VAR_3->GCestimate += VAR_3->GCdebt - VAR_6;
    if (VAR_3->sweepgc)
      return (VAR_1 * VAR_0);
  }

  VAR_3->gcstate = VAR_4;
  VAR_3->sweepgc = VAR_5;
  return 0;
}
