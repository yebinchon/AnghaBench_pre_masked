
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ indrelid; } ;
struct TYPE_5__ {int schema_name; } ;
struct TYPE_6__ {scalar_t__ main_table_relid; TYPE_1__ fd; } ;
typedef int Oid ;
typedef int * Name ;
typedef TYPE_2__ Hypertable ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_index ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void
FUNC_12(Hypertable *VAR_3, Name VAR_4)
{
 Oid VAR_5;
 HeapTuple VAR_6;
 Form_pg_index VAR_7;

 VAR_5 = FUNC_11(FUNC_2(*VAR_4),
          FUNC_10(FUNC_2(VAR_3->fd.schema_name), 0));
 VAR_6 = FUNC_5(VAR_2, FUNC_3(VAR_5));
 if (!FUNC_1(VAR_6))
  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_9("could not add reorder policy because the provided index is not a valid "
      "relation")));

 VAR_7 = (Form_pg_index) FUNC_0(VAR_6);
 if (VAR_7->indrelid != VAR_3->main_table_relid)
  FUNC_6(VAR_1,
    "could not add reorder policy because the provided index is not a valid index on the "
    "hypertable");
 FUNC_4(VAR_6);
}
