
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int data; } ;
struct TYPE_24__ {int id; int hypertable_id; TYPE_1__ table_name; int schema_name; } ;
struct TYPE_28__ {int table_id; TYPE_2__ fd; int hypertable_relid; int constraints; TYPE_5__* cube; } ;
struct TYPE_27__ {int num_slices; int slices; } ;
struct TYPE_26__ {int hypertable_id; int num_dimensions; } ;
struct TYPE_25__ {int main_table_relid; TYPE_4__* space; } ;
typedef int Point ;
typedef TYPE_3__ Hypertable ;
typedef TYPE_4__ Hyperspace ;
typedef TYPE_5__ Hypercube ;
typedef TYPE_6__ Chunk ;
typedef int CatalogSecurityContext ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int ,int ,char*,char const*,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (int ,int ,int,int ,int ) ;
 TYPE_6__* FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_6__*,TYPE_3__*,int ) ;
 int FUNC_15 (int ,int ,int,int ) ;
 int FUNC_16 (TYPE_6__*,int ) ;
 int FUNC_17 (int ,int ) ;
 TYPE_5__* FUNC_18 (TYPE_4__*,int *) ;
 int FUNC_19 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_20 (TYPE_3__*,TYPE_6__*) ;

__attribute__((used)) static Chunk *
FUNC_21(Hypertable *VAR_4, Point *VAR_5, const char *VAR_6, const char *VAR_7)
{
 Hyperspace *VAR_8 = VAR_4->space;
 Catalog *VAR_9 = FUNC_8();
 CatalogSecurityContext VAR_10;
 Hypercube *VAR_11;
 Chunk *VAR_12;





 FUNC_1(VAR_4, VAR_5);


 VAR_11 = FUNC_18(VAR_8, VAR_5);


 FUNC_2(VAR_8, VAR_11, VAR_5);


 FUNC_6(FUNC_7(), &VAR_10);
 VAR_12 = FUNC_13(FUNC_10(VAR_9, VAR_0), VAR_8->num_dimensions);
 FUNC_9(&VAR_10);

 VAR_12->fd.hypertable_id = VAR_8->hypertable_id;
 VAR_12->cube = VAR_11;
 VAR_12->hypertable_relid = VAR_4->main_table_relid;
 FUNC_4(&VAR_12->fd.schema_name, VAR_6);
 FUNC_5(VAR_12->fd.table_name.data, VAR_2, "%s_%d_chunk", VAR_7, VAR_12->fd.id);


 FUNC_16(VAR_12, VAR_3);


 FUNC_17(VAR_11->slices, VAR_11->num_slices);


 FUNC_11(VAR_12);


 VAR_12->table_id =
  FUNC_14(VAR_12, VAR_4, FUNC_19(VAR_4, VAR_12));

 if (!FUNC_0(VAR_12->table_id))
  FUNC_3(VAR_1, "could not create chunk table");


 FUNC_12(VAR_12->constraints,
        VAR_12->table_id,
        VAR_12->fd.id,
        VAR_12->hypertable_relid,
        VAR_12->fd.hypertable_id);

 FUNC_20(VAR_4, VAR_12);

 FUNC_15(VAR_12->fd.hypertable_id,
         VAR_12->hypertable_relid,
         VAR_12->fd.id,
         VAR_12->table_id);

 return VAR_12;
}
