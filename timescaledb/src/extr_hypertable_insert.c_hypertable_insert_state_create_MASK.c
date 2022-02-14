
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int custom_private; int custom_plans; } ;
struct TYPE_6__ {int * methods; } ;
struct TYPE_8__ {TYPE_2__* mt; TYPE_1__ cscan_state; } ;
struct TYPE_7__ {scalar_t__ arbiterIndexes; } ;
typedef int Node ;
typedef TYPE_2__ ModifyTable ;
typedef TYPE_3__ HypertableInsertState ;
typedef TYPE_4__ CustomScan ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static Node *
FUNC_2(CustomScan *VAR_2)
{
 HypertableInsertState *VAR_3;

 VAR_3 = (HypertableInsertState *) FUNC_1(sizeof(HypertableInsertState), VAR_0);
 VAR_3->cscan_state.methods = &VAR_1;
 VAR_3->mt = (ModifyTable *) FUNC_0(VAR_2->custom_plans);






 VAR_3->mt->arbiterIndexes = FUNC_0(VAR_2->custom_private);

 return (Node *) VAR_3;
}
