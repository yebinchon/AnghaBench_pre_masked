
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RangeVar ;
typedef int Node ;
typedef int Hypertable ;
typedef int Constraint ;
typedef int Cache ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(RangeVar *VAR_0, Constraint *VAR_1)
{
 Cache *VAR_2 = FUNC_2();
 Hypertable *VAR_3 = FUNC_1(VAR_2, VAR_0);

 if (((void*)0) == VAR_3)
  FUNC_4(VAR_0, VAR_1);
 else
  FUNC_3(VAR_3, (Node *) VAR_1);

 FUNC_0(VAR_2);
}
