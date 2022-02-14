
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int objectType; } ;
struct TYPE_6__ {scalar_t__ parsetree; } ;
typedef TYPE_1__ ProcessUtilityArgs ;
typedef TYPE_2__ AlterObjectSchemaStmt ;




 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(ProcessUtilityArgs *VAR_0)
{
 AlterObjectSchemaStmt *VAR_1 = (AlterObjectSchemaStmt *) VAR_0->parsetree;

 switch (VAR_1->objectType)
 {
  case 129:
   FUNC_0(VAR_0);
   break;
  case 128:
   FUNC_1(VAR_0);
   break;
  default:
   return;
 };
}
