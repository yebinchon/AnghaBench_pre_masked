
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tgisinternal; int tgname; int tgtype; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_trigger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int,int *,int,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static Oid
FUNC_14(Oid VAR_11)
{
 Relation VAR_12;
 ScanKeyData VAR_13[1];
 SysScanDesc VAR_14;
 HeapTuple VAR_15;
 Oid VAR_16 = VAR_4;

 VAR_12 = FUNC_8(VAR_9, VAR_0);

 FUNC_5(&VAR_13[0],
    VAR_1,
    VAR_2,
    VAR_3,
    FUNC_4(VAR_11));

 VAR_14 = FUNC_11(VAR_12, VAR_10, 1, ((void*)0), 1, VAR_13);

 while (FUNC_2(VAR_15 = FUNC_13(VAR_14)))
 {
  Form_pg_trigger VAR_17 = (Form_pg_trigger) FUNC_0(VAR_15);

  if (FUNC_6(VAR_17->tgtype,
         VAR_8,
         VAR_6,
         VAR_7) &&
   FUNC_10(VAR_5,
     FUNC_3(VAR_17->tgname),
     FUNC_9(VAR_5)) == 0 &&
   VAR_17->tgisinternal)
  {
   VAR_16 = FUNC_1(VAR_15);
   break;
  }
 }

 FUNC_12(VAR_14);
 FUNC_7(VAR_12, VAR_0);

 return VAR_16;
}
