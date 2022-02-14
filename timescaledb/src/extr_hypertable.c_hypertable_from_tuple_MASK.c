
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_7__ {int num_dimensions; int id; int table_name; int schema_name; } ;
struct TYPE_6__ {TYPE_3__ fd; int chunk_sizing_func; int space; int chunk_cache; int main_table_relid; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_1__ Hypertable ;
typedef int HeapTuple ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static Hypertable *
FUNC_8(HeapTuple VAR_1, MemoryContext VAR_2, TupleDesc VAR_3)
{
 Oid VAR_4;
 Hypertable *VAR_5 = FUNC_0(VAR_2, sizeof(Hypertable));
 FUNC_5(&VAR_5->fd, VAR_1, VAR_3);

 VAR_4 = FUNC_3(FUNC_1(VAR_5->fd.schema_name), 0);
 VAR_5->main_table_relid = FUNC_4(FUNC_1(VAR_5->fd.table_name), VAR_4);
 VAR_5->space = FUNC_6(VAR_5->fd.id, VAR_5->main_table_relid, VAR_5->fd.num_dimensions, VAR_2);
 VAR_5->chunk_cache =
  FUNC_7(VAR_5->space, VAR_2, VAR_0);
 VAR_5->chunk_sizing_func = FUNC_2(&VAR_5->fd);

 return VAR_5;
}
