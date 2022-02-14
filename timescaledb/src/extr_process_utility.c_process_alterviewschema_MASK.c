
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ objectType; int newschema; int * relation; } ;
struct TYPE_4__ {scalar_t__ parsetree; } ;
typedef TYPE_1__ ProcessUtilityArgs ;
typedef int Oid ;
typedef TYPE_2__ AlterObjectSchemaStmt ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,int ,char*) ;

__attribute__((used)) static void
FUNC_7(ProcessUtilityArgs *VAR_2)
{
 AlterObjectSchemaStmt *VAR_3 = (AlterObjectSchemaStmt *) VAR_2->parsetree;
 Oid VAR_4;
 char *VAR_5;
 char *VAR_6;

 FUNC_0(VAR_3->objectType == VAR_1);

 if (((void*)0) == VAR_3->relation)
  return;

 VAR_4 = FUNC_2(VAR_3->relation, VAR_0, 1);
 if (!FUNC_1(VAR_4))
  return;

 VAR_5 = FUNC_3(FUNC_5(VAR_4));
 VAR_6 = FUNC_4(VAR_4);

 FUNC_6(VAR_5, VAR_6, VAR_3->newschema, VAR_6);
}
