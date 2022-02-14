
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_7__ {int desc; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_9__ {int table_id; } ;
struct TYPE_8__ {int objectId; int classId; } ;
typedef TYPE_2__ ObjectAddress ;
typedef int Datum ;
typedef TYPE_3__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 TYPE_3__* FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_8(TupleInfo *VAR_4)
{
 bool VAR_5;
 Datum VAR_6 =
  FUNC_5(VAR_4->tuple, VAR_1, VAR_4->desc, &VAR_5);
 int32 VAR_7 =
  FUNC_0(FUNC_5(VAR_4->tuple, VAR_0, VAR_4->desc, &VAR_5));
 Chunk *VAR_8 = FUNC_7(VAR_7, 0, 1);
 ObjectAddress VAR_9 = {
  .classId = VAR_2,
  .objectId =
   FUNC_4(VAR_8->table_id, FUNC_2(*FUNC_1(VAR_6)), 1),
 };

 if (FUNC_3(VAR_9.objectId))
  FUNC_6(&VAR_9, VAR_3, 0);
}
