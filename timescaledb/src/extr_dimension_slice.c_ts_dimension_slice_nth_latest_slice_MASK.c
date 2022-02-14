
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ScanKeyData ;
typedef int DimensionSlice ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int *,int,int ,int **,int,int ,int ,int ) ;

DimensionSlice *
FUNC_3(int32 VAR_8, int VAR_9)
{
 ScanKeyData VAR_10[1];
 int VAR_11;
 DimensionSlice *VAR_12 = ((void*)0);

 FUNC_1(&VAR_10[0],
    VAR_1,
    VAR_2,
    VAR_6,
    FUNC_0(VAR_8));

 VAR_11 = FUNC_2(
  VAR_5,
  VAR_10,
  1,
  VAR_7,
  &VAR_12,
  VAR_9,
  VAR_3,
  VAR_0,
  VAR_4);
 if (VAR_11 < VAR_9)
  return ((void*)0);

 return VAR_12;
}
