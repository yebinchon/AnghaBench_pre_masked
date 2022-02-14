
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int info; } ;
struct TYPE_10__ {TYPE_2__ s; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
struct TYPE_11__ {TYPE_1__* bcbase; } ;
struct TYPE_8__ {int ins; } ;
typedef TYPE_4__ FuncState ;
typedef TYPE_5__ ExpDesc ;
typedef int BCIns ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(FuncState *VAR_0, ExpDesc *VAR_1)
{
  BCIns *VAR_2 = &VAR_0->bcbase[VAR_1->u.s.info - 1].ins;
  FUNC_1(VAR_2, FUNC_0(*VAR_2)^1);
}
