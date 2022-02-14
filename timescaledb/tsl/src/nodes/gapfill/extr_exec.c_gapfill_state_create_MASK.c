
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int custom_plans; } ;
struct TYPE_5__ {int * methods; } ;
struct TYPE_6__ {int subplan; TYPE_1__ csstate; } ;
typedef int Node ;
typedef TYPE_2__ GapFillState ;
typedef TYPE_3__ CustomScan ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ) ;

Node *
FUNC_2(CustomScan *VAR_2)
{
 GapFillState *VAR_3 = (GapFillState *) FUNC_1(sizeof(GapFillState), VAR_0);

 VAR_3->csstate.methods = &VAR_1;
 VAR_3->subplan = FUNC_0(VAR_2->custom_plans);

 return (Node *) VAR_3;
}
