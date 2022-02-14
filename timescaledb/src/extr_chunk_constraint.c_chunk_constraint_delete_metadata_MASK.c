
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int tuple; int scanrel; int desc; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_7__ {int table_id; } ;
typedef int Oid ;
typedef int Datum ;
typedef TYPE_2__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int FUNC_7 (int ,int ) ;
 TYPE_2__* FUNC_8 (int ,int ,int) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_10(TupleInfo *VAR_2)
{
 bool VAR_3;
 Datum VAR_4 =
  FUNC_6(VAR_2->tuple, VAR_1, VAR_2->desc, &VAR_3);
 int32 VAR_5 =
  FUNC_0(FUNC_6(VAR_2->tuple, VAR_0, VAR_2->desc, &VAR_3));
 Chunk *VAR_6 = FUNC_8(VAR_5, 0, 1);
 Oid VAR_7 = FUNC_4(
  FUNC_5(VAR_6->table_id, FUNC_2(*FUNC_1(VAR_4)), 1));






 if (FUNC_3(VAR_7))
  FUNC_9(VAR_6, VAR_7, 0);

 FUNC_7(VAR_2->scanrel, VAR_2->tuple);
}
