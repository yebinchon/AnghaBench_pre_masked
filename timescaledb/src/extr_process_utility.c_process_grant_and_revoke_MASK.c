
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ targtype; int objtype; scalar_t__ is_grant; } ;
struct TYPE_6__ {scalar_t__ parsetree; } ;
typedef TYPE_1__ ProcessUtilityArgs ;
typedef TYPE_2__ GrantStmt ;



 scalar_t__ VAR_0 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_2(ProcessUtilityArgs *VAR_1)
{
 GrantStmt *VAR_2 = (GrantStmt *) VAR_1->parsetree;





 FUNC_0(VAR_1);


 if (VAR_2->is_grant || VAR_2->targtype != VAR_0)
  return 1;

 switch (VAR_2->objtype)
 {
  case 128:

   FUNC_1(VAR_2);
   break;
  default:
   break;
 }

 return 1;
}
