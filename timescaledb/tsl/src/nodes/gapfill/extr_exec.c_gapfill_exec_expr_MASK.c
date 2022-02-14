
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int state; } ;
struct TYPE_12__ {int ecxt_scantuple; } ;
struct TYPE_9__ {TYPE_7__ ps; } ;
struct TYPE_10__ {TYPE_1__ ss; } ;
struct TYPE_11__ {int scanslot; TYPE_2__ csstate; } ;
typedef TYPE_3__ GapFillState ;
typedef int ExprState ;
typedef TYPE_4__ ExprContext ;
typedef int Expr ;
typedef int Datum ;


 int FUNC_0 (int *,TYPE_4__*,int*,...) ;
 int * FUNC_1 (int *,TYPE_7__*) ;
 TYPE_4__* FUNC_2 (int ) ;

Datum
FUNC_3(GapFillState *VAR_0, Expr *VAR_1, bool *VAR_2)
{
 ExprState *VAR_3 = FUNC_1(VAR_1, &VAR_0->csstate.ss.ps);
 ExprContext *VAR_4 = FUNC_2(VAR_0->csstate.ss.ps.state);

 VAR_4->ecxt_scantuple = VAR_0->scanslot;




 return FUNC_0(VAR_3, VAR_4, VAR_2);

}
