
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_10 ;
 int FUNC_10 (int ,int ,int,int *,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

Oid
FUNC_13(void)
{
 Datum VAR_11;
 Relation VAR_12;
 SysScanDesc VAR_13;
 HeapTuple VAR_14;
 ScanKeyData VAR_15[1];
 bool VAR_16 = 1;
 Oid VAR_17 = VAR_9;

 VAR_12 = FUNC_9(VAR_7, VAR_0);

 FUNC_5(&VAR_15[0],
    VAR_1,
    VAR_3,
    VAR_8,
    FUNC_2(VAR_10, FUNC_0(VAR_5)));

 VAR_13 = FUNC_10(VAR_12, VAR_6, 1, ((void*)0), 1, VAR_15);

 VAR_14 = FUNC_12(VAR_13);


 if (FUNC_3(VAR_14))
 {
  VAR_11 =
   FUNC_8(VAR_14, VAR_2, FUNC_4(VAR_12), &VAR_16);

  if (!VAR_16)
   VAR_17 = FUNC_1(VAR_11);
 }

 FUNC_11(VAR_13);
 FUNC_7(VAR_12, VAR_0);

 if (VAR_17 == VAR_9)
  FUNC_6(VAR_4, "extension schema not found");
 return VAR_17;
}
