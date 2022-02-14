
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int table_name; int schema_name; } ;
struct TYPE_8__ {int main_table_relid; TYPE_1__ fd; } ;
struct TYPE_7__ {int * indexParams; int tableSpace; int relation; int * idxname; int accessMethod; int type; } ;
typedef int List ;
typedef TYPE_2__ IndexStmt ;
typedef TYPE_3__ Hypertable ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ,int,int,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(Hypertable *VAR_3, List *VAR_4)
{
 IndexStmt VAR_5 = {
  .type = VAR_2,
  .accessMethod = VAR_0,
  .idxname = ((void*)0),
  .relation = FUNC_4(FUNC_1(VAR_3->fd.schema_name), FUNC_1(VAR_3->fd.table_name), 0),
  .tableSpace = FUNC_3(FUNC_2(VAR_3->main_table_relid)),
  .indexParams = VAR_4,
 };

 FUNC_0(VAR_3->main_table_relid,
       &VAR_5,
       VAR_1,
       0,
       0,
       0,
       1);
}
