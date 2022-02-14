
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ parsetree; } ;
struct TYPE_4__ {int relation; } ;
typedef TYPE_1__ RuleStmt ;
typedef TYPE_2__ ProcessUtilityArgs ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(ProcessUtilityArgs *VAR_3)
{
 RuleStmt *VAR_4 = (RuleStmt *) VAR_3->parsetree;

 if (FUNC_3(VAR_4->relation) == VAR_2)
  return;

 FUNC_0(VAR_1,
   (FUNC_1(VAR_0), FUNC_2("hypertables do not support rules")));
}
