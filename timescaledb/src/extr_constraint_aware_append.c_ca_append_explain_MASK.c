
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int num_append_subplans; } ;
struct TYPE_10__ {int custom_private; } ;
struct TYPE_7__ {scalar_t__ plan; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;
struct TYPE_9__ {TYPE_2__ ss; } ;
typedef int Oid ;
typedef int List ;
typedef int ExplainState ;
typedef TYPE_3__ CustomScanState ;
typedef TYPE_4__ CustomScan ;
typedef TYPE_5__ ConstraintAwareAppendState ;


 int FUNC_0 (char*,int *,int ,int *) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(CustomScanState *VAR_0, List *VAR_1, ExplainState *VAR_2)
{
 CustomScan *VAR_3 = (CustomScan *) VAR_0->ss.ps.plan;
 ConstraintAwareAppendState *VAR_4 = (ConstraintAwareAppendState *) VAR_0;
 Oid VAR_5 = FUNC_4(FUNC_3(VAR_3->custom_private));

 FUNC_1("Hypertable", FUNC_2(VAR_5), VAR_2);
 FUNC_0("Chunks left after exclusion",
         ((void*)0),
         VAR_4->num_append_subplans,
         VAR_2);
}
