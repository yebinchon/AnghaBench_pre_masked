
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int int32 ;
typedef int StrategyNumber ;
typedef int DimensionVec ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int **,int ,int) ;
 int VAR_1 ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int **) ;

DimensionVec *
FUNC_3(int32 VAR_2, StrategyNumber VAR_3,
         int64 VAR_4, StrategyNumber VAR_5, int64 VAR_6,
         int VAR_7)
{
 DimensionVec *VAR_8 = FUNC_1(VAR_7 > 0 ? VAR_7 : VAR_0);

 FUNC_0(VAR_2,
           VAR_3,
           VAR_4,
           VAR_5,
           VAR_6,
           &VAR_8,
           VAR_1,
           VAR_7);

 return FUNC_2(&VAR_8);
}
