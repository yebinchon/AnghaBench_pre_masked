
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ScanKeyData ;
typedef int MemoryContext ;
typedef int DimensionSlice ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int,int ,int **,int,int ,int ) ;
 int VAR_5 ;

DimensionSlice *
FUNC_3(int32 VAR_6, MemoryContext VAR_7)
{
 DimensionSlice *VAR_8 = ((void*)0);
 ScanKeyData VAR_9[1];

 FUNC_1(&VAR_9[0],
    VAR_1,
    VAR_2,
    VAR_4,
    FUNC_0(VAR_6));

 FUNC_2(VAR_3,
          VAR_9,
          1,
          VAR_5,
          &VAR_8,
          1,
          VAR_0,
          VAR_7);

 return VAR_8;
}
