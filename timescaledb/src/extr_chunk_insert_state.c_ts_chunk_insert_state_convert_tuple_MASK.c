
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_5__ {int * slot; int * tup_conv_map; TYPE_1__* result_relation_info; } ;
struct TYPE_4__ {int ri_RelationDesc; } ;
typedef int Relation ;
typedef int HeapTuple ;
typedef TYPE_2__ ChunkInsertState ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

HeapTuple
FUNC_4(ChunkInsertState *VAR_1, HeapTuple VAR_2,
         TupleTableSlot **VAR_3)
{
 Relation VAR_4 = VAR_1->result_relation_info->ri_RelationDesc;

 if (((void*)0) == VAR_1->tup_conv_map)

  return VAR_2;

 VAR_2 = FUNC_3(VAR_2, VAR_1->tup_conv_map);

 FUNC_0(VAR_1->slot, FUNC_2(VAR_4));
 FUNC_1(VAR_2, VAR_1->slot, VAR_0, 1);

 if (((void*)0) != VAR_3)
  *VAR_3 = VAR_1->slot;

 return VAR_2;
}
