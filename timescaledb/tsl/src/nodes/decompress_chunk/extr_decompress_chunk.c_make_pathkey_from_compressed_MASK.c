
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16 ;
typedef int PlannerInfo ;
typedef int PathKey ;
typedef int Oid ;
typedef int Node ;
typedef int Index ;
typedef int Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *,scalar_t__*) ;
 int * FUNC_4 (int *,int *,int *,int ,int ,int ,int,int,int ,int ,int) ;

__attribute__((used)) static PathKey *
FUNC_5(PlannerInfo *VAR_2, Index VAR_3, Expr *VAR_4, Oid VAR_5,
        bool VAR_6)
{
 Oid VAR_7, VAR_8, VAR_9;
 int16 VAR_10;


 if (!FUNC_3(VAR_5, &VAR_7, &VAR_8, &VAR_10))
  FUNC_1(VAR_1, "operator %u is not a valid ordering operator", VAR_5);


 VAR_9 = FUNC_2((Node *) VAR_4);

 return FUNC_4(VAR_2,
           VAR_4,
           ((void*)0),
           VAR_7,
           VAR_8,
           VAR_9,
           (VAR_10 == VAR_0),
           VAR_6,
           0,
           FUNC_0(VAR_3),
           1);
}
