
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ScanKeyData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,int,int ,int*,int,int ,int ,int ) ;

int32
FUNC_3(int32 VAR_7)
{
 int32 VAR_8;
 ScanKeyData VAR_9[1];
 int VAR_10;


 FUNC_1(&VAR_9[0],
    VAR_1,
    VAR_2,
    VAR_5,
    FUNC_0(VAR_7));

 VAR_10 = FUNC_2(VAR_9,
          1,
          VAR_6,
          &VAR_8,
          1,
          VAR_4,
          VAR_0,
          VAR_3);

 if (VAR_10 == 1)
  return VAR_8;

 return -1;
}
