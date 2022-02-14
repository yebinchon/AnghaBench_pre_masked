
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int id; } ;
struct TYPE_12__ {TYPE_2__ fd; } ;
struct TYPE_11__ {TYPE_1__* space; } ;
struct TYPE_10__ {int newname; int subname; } ;
struct TYPE_8__ {int num_dimensions; } ;
typedef TYPE_3__ RenameStmt ;
typedef int Oid ;
typedef TYPE_4__ Hypertable ;
typedef TYPE_5__ Chunk ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_5__* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(Hypertable *VAR_0, Oid VAR_1, void *VAR_2)
{
 RenameStmt *VAR_3 = (RenameStmt *) VAR_2;
 Chunk *VAR_4 = FUNC_1(VAR_1, VAR_0->space->num_dimensions, 1);

 FUNC_0(VAR_4->fd.id, VAR_3->subname, VAR_3->newname);
}
