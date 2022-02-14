
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {int schema; } ;
typedef TYPE_1__ EventTriggerDropSchema ;
typedef TYPE_2__ EventTriggerDropObject ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,...) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(EventTriggerDropObject *VAR_6)
{
 EventTriggerDropSchema *VAR_7;
 int VAR_8;

 FUNC_0(VAR_6->type == VAR_2);
 VAR_7 = (EventTriggerDropSchema *) VAR_6;

 if (FUNC_5(VAR_7->schema, VAR_4) == 0)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_4("cannot drop the internal schema for extension \"%s\"", VAR_3),
     FUNC_3("Use DROP EXTENSION to remove the extension and the schema.")));






 VAR_8 = FUNC_6(VAR_7->schema);

 if (VAR_8 > 0)
  FUNC_1(VAR_5,
    (FUNC_4("the chunk storage schema changed to \"%s\" for %d hypertable%c",
      VAR_4,
      VAR_8,
      (VAR_8 > 1) ? 's' : '\0')));
}
