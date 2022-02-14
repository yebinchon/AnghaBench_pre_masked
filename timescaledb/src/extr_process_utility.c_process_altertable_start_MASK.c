
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int relkind; } ;
struct TYPE_6__ {scalar_t__ parsetree; } ;
typedef TYPE_1__ ProcessUtilityArgs ;
typedef TYPE_2__ AlterTableStmt ;




 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_2(ProcessUtilityArgs *VAR_0)
{
 AlterTableStmt *VAR_1 = (AlterTableStmt *) VAR_0->parsetree;
 switch (VAR_1->relkind)
 {
  case 129:
   return FUNC_0(VAR_0);
  case 128:
   return FUNC_1(VAR_0);
  default:
   return 0;
 }
}
