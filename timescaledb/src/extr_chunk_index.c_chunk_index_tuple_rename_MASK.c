
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int scanrel; int tuple; } ;
typedef TYPE_2__ TupleInfo ;
struct TYPE_8__ {int table_name; int schema_name; } ;
struct TYPE_12__ {TYPE_1__ fd; } ;
struct TYPE_11__ {char const* newname; scalar_t__ isparent; } ;
struct TYPE_10__ {int index_name; int hypertable_index_name; int chunk_id; } ;
typedef int ScanTupleResult ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_3__ FormData_chunk_index ;
typedef TYPE_4__ ChunkIndexRenameInfo ;
typedef TYPE_5__ Chunk ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int ,int ) ;
 TYPE_5__* FUNC_10 (int ,int ,int) ;

__attribute__((used)) static ScanTupleResult
FUNC_11(TupleInfo *VAR_2, void *VAR_3)
{
 ChunkIndexRenameInfo *VAR_4 = VAR_3;
 HeapTuple VAR_5 = FUNC_6(VAR_2->tuple);
 FormData_chunk_index *VAR_6 = (FormData_chunk_index *) FUNC_0(VAR_5);

 if (VAR_4->isparent)
 {




  Chunk *VAR_7 = FUNC_10(VAR_6->chunk_id, 0, 1);
  Oid VAR_8 = FUNC_4(FUNC_1(VAR_7->fd.schema_name), 0);
  const char *VAR_9 =
   FUNC_3(FUNC_1(VAR_7->fd.table_name), VAR_4->newname, VAR_8);
  Oid VAR_10 = FUNC_5(FUNC_1(VAR_6->index_name), VAR_8);


  FUNC_8(&VAR_6->index_name, VAR_9);
  FUNC_8(&VAR_6->hypertable_index_name, VAR_4->newname);


  FUNC_2(VAR_10, VAR_9, 0);
 }
 else
  FUNC_8(&VAR_6->index_name, VAR_4->newname);

 FUNC_9(VAR_2->scanrel, VAR_5);
 FUNC_7(VAR_5);

 if (VAR_4->isparent)
  return VAR_0;

 return VAR_1;
}
