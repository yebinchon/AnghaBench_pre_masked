
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int int32 ;
typedef int ScanKeyData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int *,int,int ,int ,int ,int *) ;

int64
FUNC_4(int32 VAR_9)
{
 int64 VAR_10 = 0;
 ScanKeyData VAR_11[1];

 FUNC_1(&VAR_11[0],
    VAR_1,
    VAR_2,
    VAR_7,
    FUNC_0(VAR_9));

 if (!FUNC_3(VAR_3 ,
        VAR_4 ,
        VAR_11 ,
        1 ,
        VAR_8 ,
        VAR_0 ,
        VAR_5 ,
        &VAR_10 ))
  FUNC_2(VAR_6, "could not find invalidation threshold for hypertable %d", VAR_9);

 return VAR_10;
}
