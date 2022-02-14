
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_28__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_11__ ;
typedef struct TYPE_33__ TYPE_10__ ;


struct TYPE_44__ {int slot; scalar_t__ tup_conv_map; TYPE_2__* estate; TYPE_7__* result_relation_info; TYPE_8__* rel; int mctx; } ;
struct TYPE_43__ {TYPE_1__* rd_rel; } ;
struct TYPE_42__ {TYPE_5__* ri_TrigDesc; int * ri_IndexRelationDescs; TYPE_4__* ri_RelationDesc; } ;
struct TYPE_41__ {int main_table_relid; } ;
struct TYPE_40__ {scalar_t__ trig_insert_before_statement; scalar_t__ trig_insert_after_statement; scalar_t__ trig_insert_instead_row; } ;
struct TYPE_39__ {TYPE_3__* rd_rel; } ;
struct TYPE_38__ {scalar_t__ relhasindex; } ;
struct TYPE_37__ {int es_query_cxt; } ;
struct TYPE_36__ {int reltype; } ;
struct TYPE_35__ {scalar_t__ relkind; } ;
struct TYPE_34__ {int table_id; } ;
struct TYPE_33__ {scalar_t__ on_conflict; TYPE_6__* hypertable; TYPE_2__* estate; int cmd_type; } ;
typedef TYPE_7__ ResultRelInfo ;
typedef TYPE_8__* Relation ;
typedef int MemoryContext ;
typedef int Index ;
typedef TYPE_9__ ChunkInsertState ;
typedef TYPE_10__ ChunkDispatch ;
typedef TYPE_11__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_7__*,int) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_8__*) ;
 TYPE_28__* FUNC_6 (TYPE_8__*) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_9__*,TYPE_10__*,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (TYPE_9__*,TYPE_10__*,TYPE_8__*) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (TYPE_10__*,TYPE_8__*) ;
 TYPE_7__* FUNC_12 (TYPE_10__*,TYPE_8__*,int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (TYPE_8__*,int ) ;
 TYPE_8__* FUNC_19 (int ,int ) ;
 TYPE_9__* FUNC_20 (int) ;
 scalar_t__ FUNC_21 (int ,int ) ;

extern ChunkInsertState *
FUNC_22(Chunk *VAR_9, ChunkDispatch *VAR_10)
{
 ChunkInsertState *VAR_11;
 Relation VAR_12, VAR_13;
 Index VAR_14;
 MemoryContext VAR_15;
 MemoryContext VAR_16 = FUNC_0(VAR_10->estate->es_query_cxt,
               "chunk insert state memory context",
               VAR_0);
 ResultRelInfo *VAR_17;


 if (FUNC_8(VAR_9->table_id, VAR_4, 0) == VAR_7)
  FUNC_14(VAR_3,
    (FUNC_15(VAR_2),
     FUNC_16("hypertables do not support row-level security")));





 VAR_15 = FUNC_4(VAR_10->estate->es_query_cxt);

 VAR_12 = FUNC_19(VAR_9->table_id, VAR_8);

 if (VAR_12->rd_rel->relkind != VAR_6)
  FUNC_13(VAR_3, "insert is not on a table");

 VAR_14 = FUNC_11(VAR_10, VAR_12);

 FUNC_4(VAR_16);
 VAR_17 = FUNC_12(VAR_10, VAR_12, VAR_14);
 FUNC_1(VAR_17, VAR_10->cmd_type);

 VAR_11 = FUNC_20(sizeof(ChunkInsertState));
 VAR_11->mctx = VAR_16;
 VAR_11->rel = VAR_12;
 VAR_11->result_relation_info = VAR_17;
 VAR_11->estate = VAR_10->estate;

 if (VAR_17->ri_RelationDesc->rd_rel->relhasindex &&
  VAR_17->ri_IndexRelationDescs == ((void*)0))
  FUNC_2(VAR_17, VAR_10->on_conflict != VAR_5);

 if (VAR_17->ri_TrigDesc != ((void*)0))
 {
  if (VAR_17->ri_TrigDesc->trig_insert_instead_row ||
   VAR_17->ri_TrigDesc->trig_insert_after_statement ||
   VAR_17->ri_TrigDesc->trig_insert_before_statement)
   FUNC_13(VAR_3, "insert trigger on chunk table not supported");
 }


 if (VAR_10->on_conflict != VAR_5)
  FUNC_9(VAR_11, VAR_10, VAR_12);


 VAR_13 = FUNC_19(VAR_10->hypertable->main_table_relid, VAR_1);

 if (FUNC_21(FUNC_5(VAR_13), FUNC_5(VAR_12)))
 {
  VAR_11->tup_conv_map = FUNC_10(FUNC_5(VAR_13),
              FUNC_5(VAR_12),
              FUNC_17("could not convert row type"));
  FUNC_7(VAR_11, VAR_10, FUNC_6(VAR_12)->reltype);
 }


 if (VAR_11->tup_conv_map)
  VAR_11->slot = FUNC_3(((void*)0));

 FUNC_18(VAR_13, VAR_1);

 FUNC_4(VAR_15);

 return VAR_11;
}
