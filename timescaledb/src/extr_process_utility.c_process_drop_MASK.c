
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int removeType; } ;
struct TYPE_12__ {scalar_t__ parsetree; } ;
typedef TYPE_1__ ProcessUtilityArgs ;
typedef TYPE_2__ DropStmt ;





 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(ProcessUtilityArgs *VAR_0)
{
 DropStmt *VAR_1 = (DropStmt *) VAR_0->parsetree;

 switch (VAR_1->removeType)
 {
  case 129:
   FUNC_2(VAR_0, VAR_1);
   FUNC_1(VAR_0, VAR_1);
   break;
  case 130:
   FUNC_3(VAR_0, VAR_1);
   break;
  case 128:
   FUNC_0(VAR_0, VAR_1);
   break;
  default:
   break;
 }
}
