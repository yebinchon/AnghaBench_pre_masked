
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_9__ {TYPE_2__ schema_name; TYPE_1__ table_name; } ;
struct TYPE_8__ {int table_id; int hypertable_relid; TYPE_4__ fd; } ;
typedef int HeapTuple ;
typedef TYPE_3__ Chunk ;


 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(Chunk *VAR_0, HeapTuple VAR_1, TupleDesc VAR_2)
{
 FUNC_0(&VAR_0->fd, VAR_1, VAR_2);

 VAR_0->table_id = FUNC_2(VAR_0->fd.table_name.data,
          FUNC_1(VAR_0->fd.schema_name.data, 1));
 VAR_0->hypertable_relid = FUNC_3(VAR_0->table_id);
}
