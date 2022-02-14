
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int plan; } ;
struct TYPE_7__ {int * methods; } ;
struct TYPE_9__ {int * subplan; TYPE_1__ csstate; } ;
struct TYPE_8__ {int custom_plans; } ;
typedef int Node ;
typedef TYPE_2__ CustomScan ;
typedef TYPE_3__ ConstraintAwareAppendState ;
typedef TYPE_4__ Append ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static Node *
FUNC_2(CustomScan *VAR_2)
{
 ConstraintAwareAppendState *VAR_3;
 Append *VAR_4 = FUNC_0(VAR_2->custom_plans);

 VAR_3 = (ConstraintAwareAppendState *) FUNC_1(sizeof(ConstraintAwareAppendState),
               VAR_0);
 VAR_3->csstate.methods = &VAR_1;
 VAR_3->subplan = &VAR_4->plan;

 return (Node *) VAR_3;
}
