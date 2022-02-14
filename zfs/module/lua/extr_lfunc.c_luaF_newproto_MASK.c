
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int * source; scalar_t__ lastlinedefined; scalar_t__ linedefined; scalar_t__ sizelocvars; int * locvars; scalar_t__ maxstacksize; scalar_t__ is_vararg; scalar_t__ numparams; scalar_t__ sizeupvalues; int * upvalues; scalar_t__ sizelineinfo; int * lineinfo; scalar_t__ sizecode; int * cache; int * code; scalar_t__ sizep; int * p; scalar_t__ sizek; int * k; } ;
struct TYPE_5__ {TYPE_1__ p; } ;
typedef TYPE_1__ Proto ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int ,int,int *,int ) ;

Proto *FUNC_1 (lua_State *VAR_1) {
  Proto *VAR_2 = &FUNC_0(VAR_1, VAR_0, sizeof(Proto), ((void*)0), 0)->p;
  VAR_2->k = ((void*)0);
  VAR_2->sizek = 0;
  VAR_2->p = ((void*)0);
  VAR_2->sizep = 0;
  VAR_2->code = ((void*)0);
  VAR_2->cache = ((void*)0);
  VAR_2->sizecode = 0;
  VAR_2->lineinfo = ((void*)0);
  VAR_2->sizelineinfo = 0;
  VAR_2->upvalues = ((void*)0);
  VAR_2->sizeupvalues = 0;
  VAR_2->numparams = 0;
  VAR_2->is_vararg = 0;
  VAR_2->maxstacksize = 0;
  VAR_2->locvars = ((void*)0);
  VAR_2->sizelocvars = 0;
  VAR_2->linedefined = 0;
  VAR_2->lastlinedefined = 0;
  VAR_2->source = ((void*)0);
  return VAR_2;
}
