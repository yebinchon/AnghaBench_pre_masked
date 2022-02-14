
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int args; } ;
struct TYPE_8__ {int isnull; } ;
struct TYPE_7__ {int isnull; } ;
struct TYPE_9__ {void* lookup_after; void* lookup_before; TYPE_2__ next; TYPE_1__ prev; } ;
typedef int GapFillState ;
typedef TYPE_3__ GapFillInterpolateColumnState ;
typedef TYPE_4__ FuncExpr ;


 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(GapFillInterpolateColumnState *VAR_0, GapFillState *VAR_1,
          FuncExpr *VAR_2)
{
 VAR_0->prev.isnull = 1;
 VAR_0->next.isnull = 1;
 if (FUNC_1(((FuncExpr *) VAR_2)->args) > 1)
  VAR_0->lookup_before =
   FUNC_0(VAR_1, FUNC_2(((FuncExpr *) VAR_2)->args));
 if (FUNC_1(((FuncExpr *) VAR_2)->args) > 2)
  VAR_0->lookup_after =
   FUNC_0(VAR_1, FUNC_3(((FuncExpr *) VAR_2)->args));
}
