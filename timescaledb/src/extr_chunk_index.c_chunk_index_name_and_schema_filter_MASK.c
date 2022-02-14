
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int tuple; } ;
typedef TYPE_3__ TupleInfo ;
struct TYPE_11__ {int schema_name; } ;
struct TYPE_17__ {TYPE_1__ fd; } ;
struct TYPE_16__ {int schema; int index_name; } ;
struct TYPE_15__ {int hypertable_id; int hypertable_index_name; int chunk_id; int index_name; } ;
struct TYPE_12__ {int schema_name; } ;
struct TYPE_14__ {TYPE_2__ fd; } ;
typedef int ScanFilterResult ;
typedef TYPE_4__ Hypertable ;
typedef TYPE_5__ FormData_chunk_index ;
typedef TYPE_6__ ChunkIndexDeleteData ;
typedef TYPE_7__ Chunk ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 TYPE_7__* FUNC_2 (int ,int ,int) ;
 TYPE_4__* FUNC_3 (int ) ;

__attribute__((used)) static ScanFilterResult
FUNC_4(TupleInfo *VAR_2, void *VAR_3)
{
 FormData_chunk_index *VAR_4 = (FormData_chunk_index *) FUNC_0(VAR_2->tuple);
 ChunkIndexDeleteData *VAR_5 = VAR_3;

 if (FUNC_1(&VAR_4->index_name, VAR_5->index_name) == 0)
 {
  Chunk *VAR_6 = FUNC_2(VAR_4->chunk_id, 0, 0);

  if (((void*)0) != VAR_6 && FUNC_1(&VAR_6->fd.schema_name, VAR_5->schema) == 0)
   return VAR_1;
 }

 if (FUNC_1(&VAR_4->hypertable_index_name, VAR_5->index_name) == 0)
 {
  Hypertable *VAR_7;

  VAR_7 = FUNC_3(VAR_4->hypertable_id);

  if (((void*)0) != VAR_7 && FUNC_1(&VAR_7->fd.schema_name, VAR_5->schema) == 0)
   return VAR_1;
 }

 return VAR_0;
}
