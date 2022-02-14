
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


struct TYPE_16__ {int data; } ;
struct TYPE_18__ {int id; int hypertable_id; TYPE_1__ table_name; int schema_name; } ;
struct TYPE_21__ {int table_id; TYPE_3__ fd; int hypertable_relid; int constraints; int cube; } ;
struct TYPE_20__ {int hypertable_id; int num_dimensions; } ;
struct TYPE_17__ {int associated_table_prefix; } ;
struct TYPE_19__ {TYPE_2__ fd; int main_table_relid; TYPE_5__* space; } ;
typedef TYPE_4__ Hypertable ;
typedef TYPE_5__ Hyperspace ;
typedef TYPE_6__ Chunk ;
typedef int CatalogSecurityContext ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,char*,char*,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int ,int ,int,int ,int ) ;
 TYPE_6__* FUNC_15 (int ,int ) ;
 int FUNC_16 (TYPE_6__*,TYPE_4__*,int ) ;
 int FUNC_17 (int ,int ,int,int ) ;
 int FUNC_18 (TYPE_6__*,int ) ;
 int FUNC_19 (TYPE_4__*,TYPE_6__*) ;

Chunk *
FUNC_20(Hypertable *VAR_6, Chunk *VAR_7)
{
 Hyperspace *VAR_8 = VAR_6->space;
 Catalog *VAR_9 = FUNC_9();
 CatalogSecurityContext VAR_10;
 Chunk *VAR_11;


 FUNC_7(FUNC_8(), &VAR_10);
 VAR_11 =
  FUNC_15(FUNC_11(VAR_9, VAR_0), VAR_8->num_dimensions);
 FUNC_10(&VAR_10);

 VAR_11->fd.hypertable_id = VAR_8->hypertable_id;
 VAR_11->cube = VAR_7->cube;
 VAR_11->hypertable_relid = VAR_6->main_table_relid;
 VAR_11->constraints = FUNC_13(1, VAR_1);
 FUNC_5(&VAR_11->fd.schema_name, VAR_3);
 FUNC_6(VAR_11->fd.table_name.data,
    VAR_4,
    "compress%s_%d_chunk",
    FUNC_0(VAR_6->fd.associated_table_prefix),
    VAR_11->fd.id);

 ;


 FUNC_18(VAR_11, VAR_5);


 FUNC_12(VAR_11->constraints,
              VAR_11->fd.id,
              VAR_11->hypertable_relid);






 VAR_11->table_id =
  FUNC_16(VAR_11,
         VAR_6,
         FUNC_4(FUNC_3(VAR_7->table_id)));

 if (!FUNC_1(VAR_11->table_id))
  FUNC_2(VAR_2, "could not create compress chunk table");


 FUNC_14(VAR_11->constraints,
        VAR_11->table_id,
        VAR_11->fd.id,
        VAR_11->hypertable_relid,
        VAR_11->fd.hypertable_id);

 FUNC_19(VAR_6, VAR_11);

 FUNC_17(VAR_11->fd.hypertable_id,
         VAR_11->hypertable_relid,
         VAR_11->fd.id,
         VAR_11->table_id);

 return VAR_11;
}
