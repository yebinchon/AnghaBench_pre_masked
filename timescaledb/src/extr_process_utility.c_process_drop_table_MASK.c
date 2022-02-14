
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {int table_name; int schema; } ;
typedef TYPE_1__ EventTriggerDropTable ;
typedef TYPE_2__ EventTriggerDropObject ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(EventTriggerDropObject *VAR_2)
{
 EventTriggerDropTable *VAR_3;

 FUNC_0(VAR_2->type == VAR_1);
 VAR_3 = (EventTriggerDropTable *) VAR_2;

 FUNC_2(VAR_3->schema, VAR_3->table_name);
 FUNC_1(VAR_3->schema, VAR_3->table_name, VAR_0);
}
