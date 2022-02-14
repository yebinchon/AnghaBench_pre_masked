
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int index_name; int schema; } ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ EventTriggerDropObject ;
typedef TYPE_2__ EventTriggerDropIndex ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(EventTriggerDropObject *VAR_1)
{
 EventTriggerDropIndex *VAR_2;

 FUNC_0(VAR_1->type == VAR_0);
 VAR_2 = (EventTriggerDropIndex *) VAR_1;

 FUNC_1(VAR_2->schema, VAR_2->index_name, 1);
}
