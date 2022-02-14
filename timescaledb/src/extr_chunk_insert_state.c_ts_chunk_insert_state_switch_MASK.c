
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_3__ {int rel; int result_relation_info; } ;
typedef TYPE_1__ ChunkInsertState ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;

void
FUNC_5(ChunkInsertState *VAR_0)
{
 if (FUNC_2(VAR_0->result_relation_info) &&
  FUNC_3(VAR_0->result_relation_info) != ((void*)0))
 {
  TupleTableSlot *VAR_1 = FUNC_4(
   FUNC_3(VAR_0->result_relation_info));

  FUNC_0(VAR_1, FUNC_1(VAR_0->rel));
 }
}
