
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int pathkeys; TYPE_1__* parent; } ;
struct TYPE_11__ {int * targetlist; } ;
struct TYPE_10__ {int relids; int relid; } ;
typedef int PlannerInfo ;
typedef TYPE_2__ Plan ;
typedef TYPE_3__ Path ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int AttrNumber ;
typedef int AppendRelInfo ;


 scalar_t__ FUNC_0 (int *,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int *,int *,int *,int*) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ,int) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,int *,int ,int *,int,int*,int **,int **,int **,int**) ;

__attribute__((used)) static Plan *
FUNC_5(PlannerInfo *VAR_0, Plan *VAR_1, Path *VAR_2, List *VAR_3, List *VAR_4,
     AttrNumber *VAR_5)
{
 AppendRelInfo *VAR_6 = FUNC_3(VAR_0, VAR_2->parent->relid, 0);
 int VAR_7;
 Oid *VAR_8;
 Oid *VAR_9;
 bool *VAR_10;
 AttrNumber *VAR_11;


 VAR_1->targetlist = (List *) FUNC_0(VAR_0, (Node *) VAR_4, VAR_6);


 VAR_1 = FUNC_4(VAR_1,
           VAR_3,
           VAR_2->parent->relids,
           VAR_5,
           1,
           &VAR_7,
           &VAR_11,
           &VAR_8,
           &VAR_9,
           &VAR_10);


 if (!FUNC_2(VAR_3, VAR_2->pathkeys))
 {
  VAR_1 = (Plan *)
   FUNC_1(VAR_1, VAR_7, VAR_11, VAR_8, VAR_9, VAR_10);
 }
 return VAR_1;
}
