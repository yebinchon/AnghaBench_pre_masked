
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int lua_State ;
struct TYPE_10__ {int nkgc; int kt; int * L; } ;
struct TYPE_9__ {int u64; } ;
typedef TYPE_1__ TValue ;
typedef int GCobj ;
typedef TYPE_2__ FuncState ;
typedef int BCReg ;


 TYPE_1__* FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static BCReg FUNC_4(FuncState *VAR_0, GCobj *VAR_1, uint32_t VAR_2)
{
  lua_State *VAR_3 = VAR_0->L;
  TValue VAR_4, *VAR_5;
  FUNC_1(VAR_3, &VAR_4, VAR_1, VAR_2);

  VAR_5 = FUNC_0(VAR_3, VAR_0->kt, &VAR_4);
  if (FUNC_2(VAR_5))
    return FUNC_3(VAR_5);
  VAR_5->u64 = VAR_0->nkgc;
  return VAR_0->nkgc++;
}
