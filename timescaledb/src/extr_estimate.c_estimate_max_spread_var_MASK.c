
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64 ;
typedef int VariableStatData ;
struct TYPE_3__ {int vartype; } ;
typedef TYPE_1__ Var ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef int Node ;
typedef int Datum ;


 int FUNC_0 () ;
 double VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int ,int,int,int,int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static double
FUNC_9(PlannerInfo *VAR_1, Var *VAR_2)
{
 VariableStatData VAR_3;
 Oid VAR_4;
 Datum VAR_5, VAR_6;
 volatile int64 VAR_7, VAR_8;
 volatile bool VAR_9;

 FUNC_5(VAR_1, (Node *) VAR_2, 0, &VAR_3);
 FUNC_6(VAR_2->vartype, 1, 0, 0, &VAR_4, ((void*)0), ((void*)0), ((void*)0));
 VAR_9 = FUNC_7(VAR_1, &VAR_3, VAR_4, &VAR_6, &VAR_5);
 FUNC_4(VAR_3);

 if (!VAR_9)
  return VAR_0;

 FUNC_3();
 {
  VAR_7 = FUNC_8(VAR_5, VAR_2->vartype);
  VAR_8 = FUNC_8(VAR_6, VAR_2->vartype);
 }
 FUNC_1();
 {
  VAR_9 = 0;
  FUNC_0();
 }
 FUNC_2();

 if (!VAR_9)
  return VAR_0;

 return (double) (VAR_7 - VAR_8);
}
