
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_7__ {int parent_indexoid; } ;
struct TYPE_6__ {int hypertable_index_name; } ;
typedef int ScanFilterResult ;
typedef TYPE_2__ FormData_chunk_index ;
typedef TYPE_3__ ChunkIndexMapping ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char const*) ;

__attribute__((used)) static ScanFilterResult
FUNC_3(TupleInfo *VAR_2, void *VAR_3)
{
 FormData_chunk_index *VAR_4 = (FormData_chunk_index *) FUNC_0(VAR_2->tuple);
 ChunkIndexMapping *VAR_5 = VAR_3;
 const char *VAR_6 = FUNC_1(VAR_5->parent_indexoid);

 if (FUNC_2(&VAR_4->hypertable_index_name, VAR_6) == 0)
  return VAR_1;

 return VAR_0;
}
