
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_20__ {int schema_name; int table_name; } ;
struct TYPE_26__ {TYPE_2__ fd; } ;
struct TYPE_25__ {char* tablespacename; int options; int inhRelations; int relation; int type; } ;
struct TYPE_19__ {int table_name; int schema_name; } ;
struct TYPE_24__ {int main_table_relid; TYPE_1__ fd; } ;
struct TYPE_23__ {scalar_t__ objectId; } ;
struct TYPE_22__ {TYPE_3__* rd_rel; } ;
struct TYPE_21__ {scalar_t__ relowner; } ;
struct TYPE_18__ {scalar_t__ owner_uid; } ;
typedef TYPE_4__* Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_5__ ObjectAddress ;
typedef TYPE_6__ Hypertable ;
typedef TYPE_7__ CreateStmt ;
typedef TYPE_8__ Chunk ;


 int VAR_0 ;
 TYPE_5__ FUNC_0 (TYPE_7__*,int ,scalar_t__,int *,int *) ;
 int FUNC_1 (scalar_t__*,int*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_7__*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_4__*,scalar_t__) ;
 TYPE_11__* FUNC_12 () ;

Oid
FUNC_13(Chunk *VAR_5, Hypertable *VAR_6, char *VAR_7)
{
 Relation VAR_8;
 ObjectAddress VAR_9;
 int VAR_10;
 CreateStmt VAR_11 = {
  .type = VAR_4,
  .relation = FUNC_9(FUNC_2(VAR_5->fd.schema_name), FUNC_2(VAR_5->fd.table_name), 0),
  .inhRelations =
   FUNC_8(FUNC_9(FUNC_2(VAR_6->fd.schema_name), FUNC_2(VAR_6->fd.table_name), 0)),
  .tablespacename = VAR_7,
  .options = FUNC_5(VAR_6->main_table_relid),
 };
 Oid VAR_12, VAR_13;

 VAR_8 = FUNC_7(VAR_6->main_table_relid, VAR_0);





 if (FUNC_10(&VAR_5->fd.schema_name, VAR_1) == 0)
  VAR_12 = FUNC_12()->owner_uid;
 else
  VAR_12 = VAR_8->rd_rel->relowner;

 FUNC_1(&VAR_13, &VAR_10);

 if (VAR_12 != VAR_13)
  FUNC_3(VAR_12, VAR_10 | VAR_3);

 VAR_9 = FUNC_0(&VAR_11,
        VAR_2,
        VAR_8->rd_rel->relowner,
        ((void*)0)

        ,
        ((void*)0)

 );





 FUNC_4(&VAR_11, VAR_9.objectId);

 if (VAR_12 != VAR_13)
  FUNC_3(VAR_13, VAR_10);

 FUNC_11(VAR_8, VAR_9.objectId);

 FUNC_6(VAR_8, VAR_0);

 return VAR_9.objectId;
}
