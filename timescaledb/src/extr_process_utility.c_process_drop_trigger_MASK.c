
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {int trigger_name; int table; int schema; } ;
typedef int Hypertable ;
typedef TYPE_1__ EventTriggerDropTrigger ;
typedef TYPE_2__ EventTriggerDropObject ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(EventTriggerDropObject *VAR_1)
{
 EventTriggerDropTrigger *VAR_2;
 Hypertable *VAR_3;

 FUNC_0(VAR_1->type == VAR_0);
 VAR_2 = (EventTriggerDropTrigger *) VAR_1;


 VAR_3 = FUNC_2(VAR_2->schema, VAR_2->table);

 if (VAR_3 != ((void*)0))
 {

  FUNC_1(VAR_3, VAR_2->trigger_name);
 }
}
