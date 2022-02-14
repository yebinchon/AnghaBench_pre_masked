
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HeapTuple ;
typedef int FormData_continuous_agg ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static FormData_continuous_agg *
FUNC_2(HeapTuple VAR_0, HeapTuple *VAR_1)
{
 if (*VAR_1 == ((void*)0))
  *VAR_1 = FUNC_1(VAR_0);

 return (FormData_continuous_agg *) FUNC_0(*VAR_1);
}
