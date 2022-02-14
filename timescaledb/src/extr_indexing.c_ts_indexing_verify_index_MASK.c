
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int indexParams; int * excludeOpNames; scalar_t__ unique; } ;
typedef TYPE_1__ IndexStmt ;
typedef int Hyperspace ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(Hyperspace *VAR_0, IndexStmt *VAR_1)
{
 if (VAR_1->unique || VAR_1->excludeOpNames != ((void*)0))
  FUNC_0(VAR_0, VAR_1->indexParams);
}
