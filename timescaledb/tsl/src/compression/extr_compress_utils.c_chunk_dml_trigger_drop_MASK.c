
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(Oid VAR_3)
{
 if (FUNC_0(VAR_3))
 {
  ObjectAddress VAR_4 = {
   .classId = VAR_2,
   .objectId = FUNC_1(VAR_3, VAR_0, 1),
  };
  if (FUNC_0(VAR_4.objectId))
   FUNC_2(&VAR_4, VAR_1, 0);
 }
}
