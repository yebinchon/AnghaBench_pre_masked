
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relkind; } ;
typedef int Node ;
typedef int CollectedCommand ;
typedef TYPE_1__ AlterTableStmt ;




 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(Node *VAR_0, CollectedCommand *VAR_1)
{
 AlterTableStmt *VAR_2 = (AlterTableStmt *) VAR_0;

 switch (VAR_2->relkind)
 {
  case 128:
   FUNC_1(VAR_0, VAR_1);
   break;
  case 129:
   FUNC_0(VAR_0, VAR_1);
   break;
  default:
   break;
 }
}
