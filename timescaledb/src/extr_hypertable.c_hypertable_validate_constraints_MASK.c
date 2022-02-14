
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ contype; scalar_t__ connoinherit; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int,int *,int,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(Oid VAR_9)
{
 Relation VAR_10;
 SysScanDesc VAR_11;
 ScanKeyData VAR_12;
 HeapTuple VAR_13;

 VAR_10 = FUNC_10(VAR_4, VAR_0);

 FUNC_3(&VAR_12,
    VAR_1,
    VAR_2,
    VAR_8,
    FUNC_2(VAR_9));

 VAR_11 = FUNC_11(VAR_10, VAR_5, 1, ((void*)0), 1, &VAR_12);

 while (FUNC_1(VAR_13 = FUNC_13(VAR_11)))
 {
  Form_pg_constraint VAR_14 = (Form_pg_constraint) FUNC_0(VAR_13);

  if (VAR_14->contype == VAR_3 && VAR_14->connoinherit)
   FUNC_4(VAR_7,
     (FUNC_5(VAR_6),
      FUNC_7("cannot have NO INHERIT constraints on hypertable \"%s\"",
       FUNC_8(VAR_9)),
      FUNC_6("Remove all NO INHERIT constraints from table \"%s\" before making it "
        "a hypertable.",
        FUNC_8(VAR_9))));
 }

 FUNC_12(VAR_11);
 FUNC_9(VAR_10, VAR_0);
}
