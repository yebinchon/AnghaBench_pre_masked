
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {int ** upvals; int nupvalues; int * p; } ;
struct TYPE_6__ {TYPE_1__ l; } ;
struct TYPE_7__ {TYPE_2__ cl; } ;
typedef TYPE_2__ Closure ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int *,int ,int ,int *,int ) ;
 int FUNC_2 (int) ;

Closure *FUNC_3 (lua_State *VAR_1, int VAR_2) {
  Closure *VAR_3 = &FUNC_1(VAR_1, VAR_0, FUNC_2(VAR_2), ((void*)0), 0)->cl;
  VAR_3->l.p = ((void*)0);
  VAR_3->l.nupvalues = FUNC_0(VAR_2);
  while (VAR_2--) VAR_3->l.upvals[VAR_2] = ((void*)0);
  return VAR_3;
}
