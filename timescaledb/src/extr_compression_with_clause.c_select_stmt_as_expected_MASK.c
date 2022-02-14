
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ distinctClause; scalar_t__ targetList; scalar_t__ windowClause; scalar_t__ lockingClause; scalar_t__ op; int all; int * rarg; int * larg; int * withClause; int * limitCount; int * limitOffset; int * valuesLists; int * havingClause; int * whereClause; int * intoClause; } ;
typedef TYPE_1__ SelectStmt ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(SelectStmt *VAR_1)
{


 if (VAR_1->distinctClause != VAR_0 || VAR_1->intoClause != ((void*)0) || VAR_1->targetList != VAR_0 ||
  VAR_1->whereClause != ((void*)0) || VAR_1->havingClause != ((void*)0) || VAR_1->windowClause != VAR_0 ||
  VAR_1->valuesLists != ((void*)0) || VAR_1->limitOffset != ((void*)0) || VAR_1->limitCount != ((void*)0) ||
  VAR_1->lockingClause != VAR_0 || VAR_1->withClause != ((void*)0) || VAR_1->op != 0 ||
  VAR_1->all != 0 || VAR_1->larg != ((void*)0) || VAR_1->rarg != ((void*)0))
  return 0;
 return 1;
}
