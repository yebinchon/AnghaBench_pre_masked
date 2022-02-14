
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_10__ {TYPE_2__ table_name; TYPE_1__ schema_name; } ;
struct TYPE_12__ {int table_id; TYPE_3__ fd; } ;
struct TYPE_11__ {int objectId; int classId; } ;
typedef TYPE_4__ ObjectAddress ;
typedef int DropBehavior ;
typedef TYPE_5__ Chunk ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(Chunk *VAR_1, DropBehavior VAR_2, int32 VAR_3)
{
 ObjectAddress VAR_4 = {
  .classId = VAR_0,
  .objectId = VAR_1->table_id,
 };

 if (VAR_3 >= 0)
  FUNC_0(VAR_3,
    "dropping chunk %s.%s",
    VAR_1->fd.schema_name.data,
    VAR_1->fd.table_name.data);


 FUNC_2(VAR_1->table_id, VAR_2);


 FUNC_1(&VAR_4, VAR_2, 0);
}
