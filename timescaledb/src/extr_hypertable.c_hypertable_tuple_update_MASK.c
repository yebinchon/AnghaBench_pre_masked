
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {TYPE_2__* tuple; int scanrel; int desc; } ;
typedef TYPE_3__ TupleInfo ;
struct TYPE_17__ {int func_name; int func_schema; int func; int * colname; int table_relid; } ;
struct TYPE_12__ {int column_name; } ;
struct TYPE_16__ {TYPE_1__ fd; } ;
struct TYPE_11__ {int chunk_sizing_func_name; int chunk_sizing_func_schema; } ;
struct TYPE_15__ {TYPE_10__ fd; int chunk_sizing_func; int main_table_relid; int space; } ;
struct TYPE_13__ {int t_self; } ;
typedef int ScanTupleResult ;
typedef TYPE_4__ Hypertable ;
typedef int HeapTuple ;
typedef TYPE_5__ Dimension ;
typedef TYPE_6__ ChunkSizingInfo ;
typedef int CatalogSecurityContext ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_10__*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (TYPE_6__*) ;
 TYPE_5__* FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_12(TupleInfo *VAR_3, void *VAR_4)
{
 Hypertable *VAR_5 = VAR_4;
 HeapTuple VAR_6;
 CatalogSecurityContext VAR_7;

 if (FUNC_1(VAR_5->chunk_sizing_func))
 {
  Dimension *VAR_8 = FUNC_11(VAR_5->space, VAR_0, 0);
  ChunkSizingInfo VAR_9 = {
   .table_relid = VAR_5->main_table_relid,
   .colname = VAR_8 == ((void*)0) ? ((void*)0) : FUNC_0(VAR_8->fd.column_name),
   .func = VAR_5->chunk_sizing_func,
  };

  FUNC_10(&VAR_9);

  FUNC_5(&VAR_5->fd.chunk_sizing_func_schema, FUNC_0(VAR_9.func_schema));
  FUNC_5(&VAR_5->fd.chunk_sizing_func_name, FUNC_0(VAR_9.func_name));
 }
 else
 {
  FUNC_2(VAR_1, "hypertable_tuple_update chunk_sizing_function cannot be NULL");
 }

 VAR_6 = FUNC_4(&VAR_5->fd, VAR_3->desc);

 FUNC_6(FUNC_7(), &VAR_7);
 FUNC_9(VAR_3->scanrel, &VAR_3->tuple->t_self, VAR_6);
 FUNC_8(&VAR_7);
 FUNC_3(VAR_6);
 return VAR_2;
}
