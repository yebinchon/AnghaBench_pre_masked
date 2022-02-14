
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int constraint_name; } ;
struct TYPE_9__ {TYPE_1__ fd; } ;
struct TYPE_8__ {int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef TYPE_3__ ChunkConstraint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;

void
FUNC_4(ChunkConstraint *VAR_2, Oid VAR_3)
{
 ObjectAddress VAR_4 = {
  .classId = VAR_0,
  .objectId = FUNC_2(VAR_3, FUNC_0(VAR_2->fd.constraint_name), 0),
 };

 FUNC_3(&VAR_4, VAR_1, 0);
 FUNC_1(VAR_2, VAR_3);
}
