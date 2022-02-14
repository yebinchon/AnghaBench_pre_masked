
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


struct TYPE_21__ {int behavior; int relations; int type; } ;
typedef TYPE_2__ TruncateStmt ;
struct TYPE_25__ {int attnum; } ;
struct TYPE_20__ {int table_name; int schema_name; } ;
struct TYPE_24__ {int main_table_relid; TYPE_1__ fd; } ;
struct TYPE_23__ {int inh; int inhOpt; int relname; int schemaname; } ;
struct TYPE_22__ {TYPE_17__* rd_att; } ;
struct TYPE_19__ {int natts; } ;
typedef int Snapshot ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__ RangeVar ;
typedef int List ;
typedef int LOCKMODE ;
typedef TYPE_5__ Hypertable ;
typedef int HeapScanDesc ;
typedef TYPE_6__* Form_pg_attribute ;
typedef int CopyChunkState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 TYPE_6__* FUNC_4 (TYPE_17__*,int) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (TYPE_5__*,TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int *) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int ) ;
 TYPE_3__* FUNC_11 (int ,int ) ;
 int * FUNC_12 (int *,int ) ;
 int FUNC_13 (TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_14 (int *,int *,TYPE_5__*) ;

void
FUNC_15(Hypertable *VAR_5, LOCKMODE VAR_6)
{
 Relation VAR_7;
 CopyChunkState *VAR_8;
 HeapScanDesc VAR_9;
 Snapshot VAR_10;
 List *VAR_11 = VAR_2;
 List *VAR_12 = VAR_2;
 RangeVar VAR_13 = {
  .schemaname = FUNC_2(VAR_5->fd.schema_name),
  .relname = FUNC_2(VAR_5->fd.table_name),



  .inh = 0,

 };

 TruncateStmt VAR_14 = {
  .type = VAR_3,
  .relations = FUNC_13(&VAR_13),
  .behavior = VAR_0,
 };
 int VAR_15;

 VAR_7 = FUNC_11(VAR_5->main_table_relid, VAR_6);

 for (VAR_15 = 0; VAR_15 < VAR_7->rd_att->natts; VAR_15++)
 {
  Form_pg_attribute VAR_16 = FUNC_4(VAR_7->rd_att, VAR_15);

  VAR_11 = FUNC_12(VAR_11, VAR_16->attnum);
 }

 FUNC_7(VAR_7, VAR_11);
 VAR_10 = FUNC_3(FUNC_1());
 VAR_9 = FUNC_8(VAR_7, VAR_10, 0, ((void*)0));
 VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_4, VAR_9);
 FUNC_14(VAR_8, VAR_12, VAR_5);
 FUNC_10(VAR_9);
 FUNC_5(VAR_10);
 FUNC_9(VAR_7, VAR_6);

 FUNC_0(&VAR_14);
}
