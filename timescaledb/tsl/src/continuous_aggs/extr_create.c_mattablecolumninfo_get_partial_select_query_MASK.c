
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int partial_grouplist; int partial_seltlist; } ;
struct TYPE_8__ {int * sortClause; int * havingQual; int groupClause; int targetList; void* jointree; void* rtable; } ;
typedef TYPE_1__ Query ;
typedef TYPE_2__ MatTableColumnInfo ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static Query *
FUNC_2(MatTableColumnInfo *VAR_0, Query *VAR_1)
{
 Query *VAR_2;
 FUNC_0(VAR_2, VAR_1);
 VAR_2->rtable = FUNC_1(VAR_1->rtable);
 VAR_2->jointree = FUNC_1(VAR_1->jointree);
 VAR_2->targetList = VAR_0->partial_seltlist;
 VAR_2->groupClause = VAR_0->partial_grouplist;
 VAR_2->havingQual = ((void*)0);
 VAR_2->sortClause = ((void*)0);
 return VAR_2;
}
