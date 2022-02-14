
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ provolatile; scalar_t__ pronargs; scalar_t__ prorettype; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;

void
FUNC_11(Oid VAR_7, Oid VAR_8)
{
 HeapTuple VAR_9;
 Form_pg_proc VAR_10;


 FUNC_0(FUNC_3(VAR_8));

 if (!FUNC_5(VAR_7))
  FUNC_8(VAR_3,
    (FUNC_9(VAR_2), (FUNC_10("invalid integer_now function"))));

 VAR_9 = FUNC_7(VAR_4, FUNC_4(VAR_7));
 if (!FUNC_2(VAR_9))
 {
  FUNC_6(VAR_9);
  FUNC_8(VAR_3,
    (FUNC_9(VAR_1),
     FUNC_10("cache lookup failed for function %u", VAR_7)));
 }

 VAR_10 = (Form_pg_proc) FUNC_1(VAR_9);

 if ((VAR_10->provolatile != VAR_5 &&
   VAR_10->provolatile != VAR_6) ||
  VAR_10->pronargs != 0)
 {
  FUNC_6(VAR_9);
  FUNC_8(VAR_3,
    (FUNC_9(VAR_0),
     FUNC_10("integer_now_func must take no arguments and it must be STABLE")));
 }

 if (VAR_10->prorettype != VAR_8)
 {
  FUNC_6(VAR_9);
  FUNC_8(VAR_3,
    (FUNC_9(VAR_0),
     FUNC_10("return type of integer_now_func must be the same as "
      "the type of the time partitioning column of the hypertable")));
 }
 FUNC_6(VAR_9);
}
