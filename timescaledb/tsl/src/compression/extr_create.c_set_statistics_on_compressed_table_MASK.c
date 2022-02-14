
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_16__ {scalar_t__ type_oid; } ;
struct TYPE_15__ {scalar_t__ attnum; scalar_t__ atttypid; int attstattarget; int attname; } ;
struct TYPE_14__ {int t_self; } ;
struct TYPE_13__ {int natts; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_attribute ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_8 (scalar_t__,int ) ;
 int VAR_6 ;
 TYPE_3__* FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (scalar_t__,int ) ;
 TYPE_4__* FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(Oid VAR_7)
{
 Relation VAR_8 = FUNC_14(VAR_7, VAR_6);
 Relation VAR_9 = FUNC_14(VAR_0, VAR_5);
 TupleDesc VAR_10 = FUNC_6(VAR_8);
 Oid VAR_11 = FUNC_15(VAR_1)->type_oid;
 for (int VAR_12 = 0; VAR_12 < VAR_10->natts; VAR_12++)
 {
  Form_pg_attribute VAR_13;
  HeapTuple VAR_14;
  Form_pg_attribute VAR_15 = FUNC_9(VAR_10, VAR_12);


  if (VAR_15->attnum <= 0)
   continue;

  VAR_14 = FUNC_8(VAR_7, FUNC_4(VAR_15->attname));

  if (!FUNC_2(VAR_14))
   FUNC_10(VAR_3,
     (FUNC_11(VAR_2),
      FUNC_12("column \"%s\" of compressed table \"%s\" does not exist",
       FUNC_4(VAR_15->attname),
       FUNC_7(VAR_8))));

  VAR_13 = (Form_pg_attribute) FUNC_1(VAR_14);






  if (VAR_15->atttypid == VAR_11)
   VAR_13->attstattarget = 0;
  else
   VAR_13->attstattarget = 1000;

  FUNC_0(VAR_9, &VAR_14->t_self, VAR_14);

  FUNC_3(VAR_4, VAR_7, VAR_13->attnum);
  FUNC_13(VAR_14);
 }

 FUNC_5(VAR_9);
 FUNC_5(VAR_8);
}
