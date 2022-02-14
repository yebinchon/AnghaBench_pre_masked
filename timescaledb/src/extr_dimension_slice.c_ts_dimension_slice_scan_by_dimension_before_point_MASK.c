
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int int32 ;
typedef int ScanKeyData ;
typedef int ScanDirection ;
typedef int MemoryContext ;
typedef int DimensionVec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *,int,int ,int **,int,int ,int ,int ) ;
 int VAR_10 ;
 int * FUNC_4 (int) ;
 int * FUNC_5 (int **) ;

DimensionVec *
FUNC_6(int32 VAR_11, int64 VAR_12, int VAR_13,
              ScanDirection VAR_14, MemoryContext VAR_15)
{
 ScanKeyData VAR_16[3];
 DimensionVec *VAR_17 = FUNC_4(VAR_13 > 0 ? VAR_13 : VAR_7);

 FUNC_2(&VAR_16[0],
    VAR_1,
    VAR_4,
    VAR_8,
    FUNC_0(VAR_11));
 FUNC_2(&VAR_16[1],
    VAR_3,
    VAR_5,
    VAR_9,
    FUNC_1(VAR_12));
 FUNC_2(&VAR_16[2],
    VAR_2,
    VAR_5,
    VAR_9,
    FUNC_1(VAR_12));

 FUNC_3(
  VAR_6,
  VAR_16,
  3,
  VAR_10,
  &VAR_17,
  VAR_13,
  VAR_14,
  VAR_0,
  VAR_15);

 return FUNC_5(&VAR_17);
}
