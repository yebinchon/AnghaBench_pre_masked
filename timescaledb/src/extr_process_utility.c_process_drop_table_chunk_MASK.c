
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int behavior; } ;
struct TYPE_4__ {int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int Hypertable ;
typedef TYPE_2__ DropStmt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(Hypertable *VAR_1, Oid VAR_2, void *VAR_3)
{
 DropStmt *VAR_4 = VAR_3;
 ObjectAddress VAR_5 = {
  .classId = VAR_0,
  .objectId = VAR_2,
 };

 FUNC_0(&VAR_5, VAR_4->behavior, 0);
}
