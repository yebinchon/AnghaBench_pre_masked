
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int int32 ;
typedef int ScanKeyData ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int *,int,int ,int **,int,int ,int ) ;
 int VAR_13 ;
 int * FUNC_5 (int) ;
 int * FUNC_6 (int **) ;

DimensionVec *
FUNC_7(int32 VAR_14, int64 VAR_15, int VAR_16)
{
 ScanKeyData VAR_17[3];
 DimensionVec *VAR_18 = FUNC_5(VAR_16 > 0 ? VAR_16 : VAR_9);

 VAR_15 = FUNC_2(VAR_15);





 FUNC_3(&VAR_17[0],
    VAR_1,
    VAR_4,
    VAR_10,
    FUNC_0(VAR_14));
 FUNC_3(&VAR_17[1],
    VAR_3,
    VAR_6,
    VAR_12,
    FUNC_1(VAR_15));
 FUNC_3(&VAR_17[2],
    VAR_2,
    VAR_5,
    VAR_11,
    FUNC_1(VAR_15));

 FUNC_4(VAR_8,
          VAR_17,
          3,
          VAR_13,
          &VAR_18,
          VAR_16,
          VAR_0,
          VAR_7);

 return FUNC_6(&VAR_18);
}
