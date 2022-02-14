
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_6__ {int pi_exprContext; } ;
typedef TYPE_1__ ProjectionInfo ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int Index ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,int ,int ,int *,int ) ;
 int * VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int *,int,int ,int*) ;

__attribute__((used)) static ProjectionInfo *
FUNC_4(ProjectionInfo *VAR_1, List *VAR_2,
            AttrNumber *VAR_3, int VAR_4, Index VAR_5, Oid VAR_6,
            TupleDesc VAR_7)
{
 bool VAR_8;

 FUNC_0(VAR_2 != VAR_0);


 VAR_2 = (List *) FUNC_3((Node *) VAR_2,
               VAR_5,
               0,
               VAR_3,
               VAR_4,
               VAR_6,
               &VAR_8);

 return FUNC_1(VAR_2,
           VAR_1->pi_exprContext,
           FUNC_2(VAR_1),
           ((void*)0),
           VAR_7);
}
