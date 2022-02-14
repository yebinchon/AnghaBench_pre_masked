
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_9 ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int,int *,int,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static char *
FUNC_14(void)
{
 Datum VAR_10;
 Relation VAR_11;
 SysScanDesc VAR_12;
 HeapTuple VAR_13;
 ScanKeyData VAR_14[1];
 bool VAR_15 = 1;
 char *VAR_16 = ((void*)0);

 VAR_11 = FUNC_9(VAR_7, VAR_0);

 FUNC_4(&VAR_14[0],
    VAR_1,
    VAR_3,
    VAR_8,
    FUNC_1(VAR_9, FUNC_0(VAR_5)));

 VAR_12 = FUNC_11(VAR_11, VAR_6, 1, ((void*)0), 1, VAR_14);

 VAR_13 = FUNC_13(VAR_12);


 if (FUNC_2(VAR_13))
 {
  VAR_10 = FUNC_8(VAR_13, VAR_2, FUNC_3(VAR_11), &VAR_15);

  if (!VAR_15)
  {
   VAR_16 = FUNC_10(FUNC_5(VAR_10));
  }
 }

 FUNC_12(VAR_12);
 FUNC_7(VAR_11, VAR_0);

 if (VAR_16 == ((void*)0))
 {
  FUNC_6(VAR_4, "extension not found while getting version");
 }
 return VAR_16;
}
