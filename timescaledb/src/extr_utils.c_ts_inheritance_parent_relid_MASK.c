
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inhparent; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_inherits ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,int *,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

Oid
FUNC_9(Oid VAR_7)
{
 Relation VAR_8;
 SysScanDesc VAR_9;
 ScanKeyData VAR_10;
 Oid VAR_11 = VAR_6;
 HeapTuple VAR_12;

 VAR_8 = FUNC_5(VAR_4, VAR_0);
 FUNC_3(&VAR_10,
    VAR_1,
    VAR_2,
    VAR_3,
    FUNC_2(VAR_7));
 VAR_9 = FUNC_6(VAR_8, VAR_5, 1, ((void*)0), 1, &VAR_10);
 VAR_12 = FUNC_8(VAR_9);

 if (FUNC_1(VAR_12))
  VAR_11 = ((Form_pg_inherits) FUNC_0(VAR_12))->inhparent;

 FUNC_7(VAR_9);
 FUNC_4(VAR_8, VAR_0);

 return VAR_11;
}
