
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ parsetree; } ;
struct TYPE_14__ {int renameType; int * relation; } ;
typedef TYPE_1__ RenameStmt ;
typedef TYPE_2__ ProcessUtilityArgs ;
typedef int Oid ;
typedef int Cache ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_2__*,int *,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int *,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int *,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int *,int ,TYPE_1__*) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(ProcessUtilityArgs *VAR_2)
{
 RenameStmt *VAR_3 = (RenameStmt *) VAR_2->parsetree;
 Oid VAR_4 = VAR_0;
 Cache *VAR_5;


 if (((void*)0) != VAR_3->relation)
 {
  VAR_4 = FUNC_1(VAR_3->relation, VAR_1, 1);
  if (!FUNC_0(VAR_4))
   return;
 }
 else
 {



  if (VAR_3->renameType != 131)
   return;
 }

 VAR_5 = FUNC_9();

 switch (VAR_3->renameType)
 {
  case 129:
   FUNC_6(VAR_2, VAR_5, VAR_4, VAR_3);
   break;
  case 133:
   FUNC_2(VAR_2, VAR_5, VAR_4, VAR_3);
   break;
  case 132:
   FUNC_4(VAR_2, VAR_5, VAR_4, VAR_3);
   break;
  case 130:
   FUNC_3(VAR_2, VAR_5, VAR_4, VAR_3);
   break;
  case 128:
   FUNC_7(VAR_4, VAR_3);
   break;
  case 131:
   FUNC_5(VAR_3);
   break;
  default:
   break;
 }

 FUNC_8(VAR_5);
}
