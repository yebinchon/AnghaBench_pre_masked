
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ is_grant; } ;
struct TYPE_6__ {scalar_t__ parsetree; } ;
typedef TYPE_1__ ProcessUtilityArgs ;
typedef TYPE_2__ GrantRoleStmt ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_2(ProcessUtilityArgs *VAR_0)
{
 GrantRoleStmt *VAR_1 = (GrantRoleStmt *) VAR_0->parsetree;





 FUNC_0(VAR_0);


 if (VAR_1->is_grant)
  return 1;

 FUNC_1(VAR_1);

 return 1;
}
