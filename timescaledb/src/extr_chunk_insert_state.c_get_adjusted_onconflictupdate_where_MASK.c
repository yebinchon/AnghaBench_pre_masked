
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int Index ;
typedef int ExprState ;
typedef int Expr ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_3 (int *,int ,int ,int *,int,int ,int*) ;

__attribute__((used)) static ExprState *
FUNC_4(ExprState *VAR_2, List *VAR_3,
         AttrNumber *VAR_4, int VAR_5, Index VAR_6, Oid VAR_7)
{
 bool VAR_8;

 FUNC_0(VAR_3 != VAR_1);

 VAR_3 = (List *) FUNC_3((Node *) VAR_3,
               VAR_6,
               0,
               VAR_4,
               VAR_5,
               VAR_7,
               &VAR_8);

 VAR_3 = (List *) FUNC_3((Node *) VAR_3,
               VAR_0,
               0,
               VAR_4,
               VAR_5,
               VAR_7,
               &VAR_8);



 return FUNC_2(VAR_3, ((void*)0));

}
