
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regproc ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Form_pg_proc ;
typedef int DimensionType ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;

bool
FUNC_13(regproc VAR_5, DimensionType VAR_6, Oid VAR_7)
{
 HeapTuple VAR_8;
 bool VAR_9;
 AclResult VAR_10;

 VAR_8 = FUNC_6(VAR_4, FUNC_4(VAR_5));

 if (!FUNC_2(VAR_8))
  FUNC_7(VAR_3, "cache lookup failed for function %u", VAR_5);

 VAR_10 = FUNC_12(VAR_5, FUNC_1(), VAR_1);
 if (VAR_10 != VAR_0)
  FUNC_8(VAR_3,
    (FUNC_9(VAR_2),
     FUNC_10("permission denied for function %s", FUNC_11(VAR_5))));

 VAR_9 = FUNC_3((Form_pg_proc) FUNC_0(VAR_8), VAR_6, VAR_7);

 FUNC_5(VAR_8);

 return VAR_9;
}
