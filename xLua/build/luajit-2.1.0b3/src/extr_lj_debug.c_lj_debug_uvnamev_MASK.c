
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int cTValue ;
struct TYPE_15__ {int uv; } ;
struct TYPE_12__ {scalar_t__ nupvalues; int * upvalue; } ;
struct TYPE_11__ {int * uvptr; } ;
struct TYPE_14__ {TYPE_2__ c; TYPE_1__ l; } ;
struct TYPE_13__ {scalar_t__ sizeuv; } ;
typedef int TValue ;
typedef TYPE_3__ GCproto ;
typedef TYPE_4__ GCfunc ;


 TYPE_4__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 TYPE_7__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 char const* FUNC_4 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

const char *FUNC_7(cTValue *VAR_0, uint32_t VAR_1, TValue **VAR_2)
{
  if (FUNC_5(VAR_0)) {
    GCfunc *VAR_3 = FUNC_0(VAR_0);
    if (FUNC_3(VAR_3)) {
      GCproto *VAR_4 = FUNC_1(VAR_3);
      if (VAR_1 < VAR_4->sizeuv) {
 *VAR_2 = FUNC_6(&FUNC_2(VAR_3->l.uvptr[VAR_1])->uv);
 return FUNC_4(VAR_4, VAR_1);
      }
    } else {
      if (VAR_1 < VAR_3->c.nupvalues) {
 *VAR_2 = &VAR_3->c.upvalue[VAR_1];
 return "";
      }
    }
  }
  return ((void*)0);
}
