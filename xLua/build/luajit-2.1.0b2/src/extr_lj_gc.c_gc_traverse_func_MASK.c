
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int global_State ;
struct TYPE_14__ {scalar_t__ sizeuv; } ;
struct TYPE_15__ {TYPE_4__ uv; } ;
struct TYPE_12__ {size_t nupvalues; int * upvalue; int env; } ;
struct TYPE_11__ {scalar_t__ nupvalues; int * uvptr; } ;
struct TYPE_13__ {TYPE_2__ c; TYPE_1__ l; } ;
typedef TYPE_3__ GCfunc ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *,int *) ;
 TYPE_6__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int) ;
 TYPE_4__* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(global_State *VAR_0, GCfunc *VAR_1)
{
  FUNC_1(VAR_0, FUNC_6(VAR_1->c.env));
  if (FUNC_4(VAR_1)) {
    uint32_t VAR_2;
    FUNC_5(VAR_1->l.nupvalues <= FUNC_0(VAR_1)->sizeuv);
    FUNC_1(VAR_0, FUNC_0(VAR_1));
    for (VAR_2 = 0; VAR_2 < VAR_1->l.nupvalues; VAR_2++)
      FUNC_1(VAR_0, &FUNC_3(VAR_1->l.uvptr[VAR_2])->uv);
  } else {
    uint32_t VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1->c.nupvalues; VAR_3++)
      FUNC_2(VAR_0, &VAR_1->c.upvalue[VAR_3]);
  }
}
