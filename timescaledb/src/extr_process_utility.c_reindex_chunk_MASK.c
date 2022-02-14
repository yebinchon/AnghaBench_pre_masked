
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {void* schemaname; void* relname; } ;
struct TYPE_9__ {int schema_name; int table_name; } ;
struct TYPE_13__ {TYPE_1__ fd; } ;
struct TYPE_12__ {TYPE_2__* space; } ;
struct TYPE_11__ {int kind; int options; TYPE_8__* relation; } ;
struct TYPE_10__ {int num_dimensions; } ;
typedef TYPE_3__ ReindexStmt ;
typedef int Oid ;
typedef TYPE_4__ Hypertable ;
typedef TYPE_5__ Chunk ;


 void* FUNC_0 (int ) ;


 int FUNC_1 (TYPE_8__*,int ) ;
 TYPE_5__* FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(Hypertable *VAR_0, Oid VAR_1, void *VAR_2)
{
 ReindexStmt *VAR_3 = (ReindexStmt *) VAR_2;
 Chunk *VAR_4 = FUNC_2(VAR_1, VAR_0->space->num_dimensions, 1);

 switch (VAR_3->kind)
 {
  case 128:
   VAR_3->relation->relname = FUNC_0(VAR_4->fd.table_name);
   VAR_3->relation->schemaname = FUNC_0(VAR_4->fd.schema_name);
   FUNC_1(VAR_3->relation, VAR_3->options);
   break;
  case 129:

   break;
  default:
   break;
 }
}
