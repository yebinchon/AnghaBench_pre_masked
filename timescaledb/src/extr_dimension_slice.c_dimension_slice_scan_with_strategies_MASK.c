
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tuple_found_func ;
typedef scalar_t__ int64 ;
typedef int int32 ;
typedef scalar_t__ StrategyNumber ;
typedef int ScanKeyData ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ,scalar_t__,int ,int ) ;
 int FUNC_6 (int ,int *,int,int ,void*,int,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(int32 VAR_12, StrategyNumber VAR_13,
          int64 VAR_14, StrategyNumber VAR_15,
          int64 VAR_16, void *VAR_17, tuple_found_func VAR_18,
          int VAR_19)
{
 ScanKeyData VAR_20[3];
 int VAR_21 = 1;





 FUNC_5(&VAR_20[0],
    VAR_1,
    VAR_4,
    VAR_7,
    FUNC_1(VAR_12));
 if (VAR_13 != VAR_10)
 {
  Oid VAR_22 = FUNC_8(VAR_9, VAR_8, VAR_8, VAR_13);
  Oid VAR_23 = FUNC_7(VAR_22);

  FUNC_0(FUNC_3(VAR_23));

  FUNC_5(&VAR_20[VAR_21++],
     VAR_3,
     VAR_13,
     VAR_23,
     FUNC_2(VAR_14));
 }
 if (VAR_15 != VAR_10)
 {
  Oid VAR_24 = FUNC_8(VAR_9, VAR_8, VAR_8, VAR_15);
  Oid VAR_25 = FUNC_7(VAR_24);

  FUNC_0(FUNC_3(VAR_25));





  if (VAR_16 != VAR_11)
  {
   VAR_16++;





   VAR_16 = FUNC_4(VAR_16);
  }
  else
  {




   VAR_16 = VAR_11;
  }

  FUNC_5(&VAR_20[VAR_21++],
     VAR_2,
     VAR_15,
     VAR_25,
     FUNC_2(VAR_16));
 }

 FUNC_6(VAR_6,
          VAR_20,
          VAR_21,
          VAR_18,
          VAR_17,
          VAR_19,
          VAR_0,
          VAR_5);
}
