
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_11__ {int nval; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
struct TYPE_13__ {int nkn; int kt; int * L; } ;
struct TYPE_12__ {int u64; } ;
typedef TYPE_2__ TValue ;
typedef TYPE_3__ FuncState ;
typedef TYPE_4__ ExpDesc ;
typedef int BCReg ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_2__* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static BCReg FUNC_5(FuncState *VAR_0, ExpDesc *VAR_1)
{
  lua_State *VAR_2 = VAR_0->L;
  TValue *VAR_3;
  FUNC_2(FUNC_0(VAR_1));
  VAR_3 = FUNC_1(VAR_2, VAR_0->kt, &VAR_1->u.nval);
  if (FUNC_3(VAR_3))
    return FUNC_4(VAR_3);
  VAR_3->u64 = VAR_0->nkn;
  return VAR_0->nkn++;
}
