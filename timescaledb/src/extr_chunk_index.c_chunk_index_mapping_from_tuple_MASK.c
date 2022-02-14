
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_13__ {int hypertable_relid; int table_id; } ;
struct TYPE_12__ {int hypertableoid; void* parent_indexoid; void* indexoid; int chunkoid; } ;
struct TYPE_11__ {int hypertable_index_name; int index_name; int chunk_id; } ;
typedef int Oid ;
typedef TYPE_2__ FormData_chunk_index ;
typedef TYPE_3__ ChunkIndexMapping ;
typedef TYPE_4__ Chunk ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ) ;
 TYPE_3__* FUNC_4 (int) ;
 TYPE_4__* FUNC_5 (int ,int ,int) ;

__attribute__((used)) static ChunkIndexMapping *
FUNC_6(TupleInfo *VAR_0, ChunkIndexMapping *VAR_1)
{
 FormData_chunk_index *VAR_2 = (FormData_chunk_index *) FUNC_0(VAR_0->tuple);
 Chunk *VAR_3 = FUNC_5(VAR_2->chunk_id, 0, 1);
 Oid VAR_4 = FUNC_2(VAR_3->table_id);
 Oid VAR_5 = FUNC_2(VAR_3->hypertable_relid);

 if (VAR_1 == ((void*)0))
 {
  VAR_1 = FUNC_4(sizeof(ChunkIndexMapping));
 }
 VAR_1->chunkoid = VAR_3->table_id;
 VAR_1->indexoid = FUNC_3(FUNC_1(VAR_2->index_name), VAR_4);
 VAR_1->parent_indexoid =
  FUNC_3(FUNC_1(VAR_2->hypertable_index_name), VAR_5);
 VAR_1->hypertableoid = VAR_3->hypertable_relid;

 return VAR_1;
}
