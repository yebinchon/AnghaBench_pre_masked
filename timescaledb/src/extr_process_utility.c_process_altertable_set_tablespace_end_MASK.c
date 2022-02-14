
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int num_tablespaces; TYPE_2__* tablespaces; } ;
typedef TYPE_4__ Tablespaces ;
struct TYPE_21__ {int name; } ;
struct TYPE_18__ {int compressed_hypertable_id; int id; } ;
struct TYPE_20__ {int main_table_relid; TYPE_3__ fd; } ;
struct TYPE_16__ {int tablespace_name; } ;
struct TYPE_17__ {TYPE_1__ fd; int tablespace_oid; } ;
typedef int NameData ;
typedef TYPE_5__ Hypertable ;
typedef TYPE_6__ AlterTableCmd ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_5__*,int ,TYPE_6__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (int *,int ) ;
 int VAR_2 ;
 TYPE_5__* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (int ,int ) ;
 TYPE_4__* FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17(Hypertable *VAR_3, AlterTableCmd *VAR_4)
{
 NameData VAR_5;
 Tablespaces *VAR_6;

 FUNC_11(&VAR_5, VAR_4->name);

 VAR_6 = FUNC_16(VAR_3->fd.id);

 if (VAR_6->num_tablespaces > 1)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_7("cannot set new tablespace when multiple tablespaces are attached to "
      "hypertable \"%s\"",
      FUNC_9(VAR_3->main_table_relid)),
     FUNC_6("Detach tablespaces before altering the hypertable.")));

 if (VAR_6->num_tablespaces == 1)
 {
  FUNC_1(FUNC_13(VAR_3, VAR_6->tablespaces[0].tablespace_oid));
  FUNC_15(VAR_3->fd.id, FUNC_2(VAR_6->tablespaces[0].fd.tablespace_name));
 }

 FUNC_14(&VAR_5, VAR_3->main_table_relid, 1);
 FUNC_8(VAR_3, VAR_2, VAR_4);
 if (FUNC_3(VAR_3))
 {
  Hypertable *VAR_7 =
   FUNC_12(VAR_3->fd.compressed_hypertable_id);
  FUNC_0(VAR_7->main_table_relid, FUNC_10(VAR_4), 0);
  FUNC_17(VAR_7, VAR_4);
 }
}
