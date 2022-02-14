
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* cube; int table_id; } ;
struct TYPE_11__ {TYPE_1__* space; } ;
struct TYPE_10__ {int ** slices; } ;
struct TYPE_9__ {scalar_t__ num_dimensions; int * dimensions; } ;
typedef int List ;
typedef int LOCKMODE ;
typedef int HypertableRestrictInfo ;
typedef TYPE_3__ Hypertable ;
typedef int DimensionSlice ;
typedef TYPE_4__ Chunk ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__** FUNC_2 (int *,TYPE_3__*,int ,unsigned int*) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_4__**,unsigned int,int,int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;

List *
FUNC_7(HypertableRestrictInfo *VAR_3, Hypertable *VAR_4,
               LOCKMODE VAR_5, List **VAR_6,
               bool VAR_7)
{
 unsigned VAR_8;
 Chunk **VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, &VAR_8);
 List *VAR_10 = VAR_0;
 List *VAR_11 = VAR_0;
 DimensionSlice *VAR_12 = ((void*)0);
 unsigned int VAR_13;

 if (VAR_8 == 0)
  return VAR_0;

 FUNC_0(VAR_4->space->num_dimensions > 0);
 FUNC_0(FUNC_1(&VAR_4->space->dimensions[0]));

 if (VAR_7)
  FUNC_5(VAR_9, VAR_8, sizeof(Chunk *), VAR_2);
 else
  FUNC_5(VAR_9, VAR_8, sizeof(Chunk *), VAR_1);

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
 {
  Chunk *VAR_14 = VAR_9[VAR_13];

  if (((void*)0) != VAR_12 && FUNC_6(VAR_12, VAR_14->cube->slices[0]) != 0 &&
   VAR_11 != VAR_0)
  {
   *VAR_6 = FUNC_3(*VAR_6, VAR_11);
   VAR_11 = VAR_0;
  }

  if (((void*)0) != VAR_6)
   VAR_11 = FUNC_4(VAR_11, VAR_14->table_id);

  VAR_10 = FUNC_4(VAR_10, VAR_14->table_id);
  VAR_12 = VAR_14->cube->slices[0];
 }

 if (VAR_11 != VAR_0)
  *VAR_6 = FUNC_3(*VAR_6, VAR_11);

 return VAR_10;
}
