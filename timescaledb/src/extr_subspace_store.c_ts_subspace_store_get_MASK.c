
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {void* storage; } ;
struct TYPE_12__ {int cardinality; int * coordinates; } ;
struct TYPE_11__ {int num_dimensions; TYPE_1__* origin; } ;
struct TYPE_10__ {int * vector; } ;
struct TYPE_9__ {int * vector; } ;
typedef TYPE_2__ SubspaceStoreInternalNode ;
typedef TYPE_3__ SubspaceStore ;
typedef TYPE_4__ Point ;
typedef int DimensionVec ;
typedef TYPE_5__ DimensionSlice ;


 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int *,int ) ;

void *
FUNC_2(SubspaceStore *VAR_0, Point *VAR_1)
{
 int VAR_2;
 DimensionVec *VAR_3 = VAR_0->origin->vector;
 DimensionSlice *VAR_4 = ((void*)0);

 FUNC_0(VAR_1->cardinality == VAR_0->num_dimensions);

 for (VAR_2 = 0; VAR_2 < VAR_1->cardinality; VAR_2++)
 {
  VAR_4 = FUNC_1(VAR_3, VAR_1->coordinates[VAR_2]);

  if (((void*)0) == VAR_4)
   return ((void*)0);

  VAR_3 = ((SubspaceStoreInternalNode *) VAR_4->storage)->vector;
 }
 FUNC_0(VAR_4 != ((void*)0));
 return VAR_4->storage;
}
