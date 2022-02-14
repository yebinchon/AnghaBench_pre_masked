
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tuple; int scanrel; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_11__ {scalar_t__ drop_index; } ;
struct TYPE_10__ {int index_name; } ;
struct TYPE_9__ {int objectId; int classId; } ;
typedef int ScanTupleResult ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef TYPE_3__ FormData_chunk_index ;
typedef TYPE_4__ ChunkIndexDeleteData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_7(TupleInfo *VAR_3, void *VAR_4)
{
 FormData_chunk_index *VAR_5 = (FormData_chunk_index *) FUNC_0(VAR_3->tuple);
 Oid VAR_6 = FUNC_3(VAR_5, 1);
 ChunkIndexDeleteData *VAR_7 = VAR_4;

 FUNC_6(VAR_3->scanrel, VAR_3->tuple);

 if (VAR_7->drop_index)
 {
  ObjectAddress VAR_8 = {
   .classId = VAR_1,
   .objectId = FUNC_4(FUNC_1(VAR_5->index_name), VAR_6),
  };

  if (FUNC_2(VAR_8.objectId))
   FUNC_5(&VAR_8, VAR_0, 0);
 }

 return VAR_2;
}
