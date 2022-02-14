
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tablespacename; } ;
struct TYPE_4__ {scalar_t__ parsetree; } ;
typedef TYPE_1__ ProcessUtilityArgs ;
typedef TYPE_2__ DropTableSpaceStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(ProcessUtilityArgs *VAR_2)
{
 DropTableSpaceStmt *VAR_3 = (DropTableSpaceStmt *) VAR_2->parsetree;
 int VAR_4 = FUNC_4(VAR_3->tablespacename);

 if (VAR_4 > 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("tablespace \"%s\" is still attached to %d hypertables",
      VAR_3->tablespacename,
      VAR_4),
     FUNC_2("Detach the tablespace from all hypertables before removing it.")));
}
