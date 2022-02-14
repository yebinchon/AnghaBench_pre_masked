
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int id; } ;
struct TYPE_16__ {TYPE_4__ fd; } ;
struct TYPE_11__ {int objectId; } ;
struct TYPE_15__ {TYPE_2__ obj; int stmt; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_14__ {TYPE_1__ fd; TYPE_3__* space; } ;
struct TYPE_12__ {int num_dimensions; } ;
typedef int Oid ;
typedef int IndexStmt ;
typedef TYPE_5__ Hypertable ;
typedef TYPE_6__ CreateIndexInfo ;
typedef TYPE_7__ Chunk ;


 int * FUNC_0 (int ,int ,int *) ;
 TYPE_7__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(Hypertable *VAR_0, Oid VAR_1, void *VAR_2)
{
 CreateIndexInfo *VAR_3 = (CreateIndexInfo *) VAR_2;
 IndexStmt *VAR_4 = FUNC_0(VAR_1, VAR_3->stmt, ((void*)0));
 Chunk *VAR_5 = FUNC_1(VAR_1, VAR_0->space->num_dimensions, 1);

 FUNC_2(VAR_4, VAR_5->fd.id, VAR_1, VAR_0->fd.id, VAR_3->obj.objectId);
}
