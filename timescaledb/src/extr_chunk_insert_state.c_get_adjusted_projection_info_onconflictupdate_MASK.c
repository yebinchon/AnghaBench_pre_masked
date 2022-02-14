
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleDesc ;
typedef int TupleConversionMap ;
struct TYPE_6__ {int pi_exprContext; } ;
typedef TYPE_1__ ProjectionInfo ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int Index ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,int ,int ,int *,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int *,int,int ,int*) ;

__attribute__((used)) static ProjectionInfo *
FUNC_6(ProjectionInfo *VAR_2, List *VAR_3,
             AttrNumber *VAR_4,
             int VAR_5, Index VAR_6,
             Oid VAR_7, TupleDesc VAR_8,
             TupleConversionMap *VAR_9)
{
 bool VAR_10;

 FUNC_0(VAR_3 != VAR_1);

 VAR_3 = FUNC_3(VAR_3);


 VAR_3 = (List *) FUNC_5((Node *) VAR_3,
               VAR_6,
               0,
               VAR_4,
               VAR_5,
               VAR_7,
               &VAR_10);

 VAR_3 = (List *) FUNC_5((Node *) VAR_3,
               VAR_0,
               0,
               VAR_4,
               VAR_5,
               VAR_7,
               &VAR_10);

 VAR_3 = FUNC_2(VAR_3, VAR_9);

 return FUNC_1(VAR_3,
           VAR_2->pi_exprContext,
           FUNC_4(VAR_2),
           ((void*)0),
           VAR_8);
}
