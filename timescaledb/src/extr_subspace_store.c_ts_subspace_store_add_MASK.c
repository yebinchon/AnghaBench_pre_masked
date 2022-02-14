
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_22__ {scalar_t__ dimension_id; int range_start; } ;
struct TYPE_26__ {void (* storage_free ) (void*) ;TYPE_4__* storage; TYPE_3__ fd; } ;
struct TYPE_25__ {int num_slices; TYPE_7__** slices; } ;
struct TYPE_24__ {int num_dimensions; int max_items; int mcxt; TYPE_4__* origin; } ;
struct TYPE_23__ {size_t descendants; TYPE_10__* vector; } ;
struct TYPE_20__ {scalar_t__ dimension_id; } ;
struct TYPE_21__ {TYPE_1__ fd; } ;
struct TYPE_19__ {scalar_t__ num_slices; TYPE_2__** slices; } ;
typedef TYPE_4__ SubspaceStoreInternalNode ;
typedef TYPE_5__ SubspaceStore ;
typedef int MemoryContext ;
typedef TYPE_6__ Hypercube ;
typedef TYPE_7__ DimensionSlice ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (int) ;
 size_t FUNC_3 (TYPE_4__*,int) ;
 void FUNC_4 (void*) ;
 TYPE_7__* FUNC_5 (TYPE_7__ const*) ;
 int FUNC_6 (TYPE_10__**,TYPE_7__*) ;
 TYPE_7__* FUNC_7 (TYPE_10__*,int ) ;
 int FUNC_8 (TYPE_10__**,int) ;

void
FUNC_9(SubspaceStore *VAR_0, const Hypercube *VAR_1, void *VAR_2,
       void (*VAR_3)(void *))
{
 SubspaceStoreInternalNode *VAR_4 = VAR_0->origin;
 DimensionSlice *VAR_5 = ((void*)0);
 MemoryContext VAR_6 = FUNC_1(VAR_0->mcxt);
 int VAR_7;

 FUNC_0(VAR_1->num_slices == VAR_0->num_dimensions);

 for (VAR_7 = 0; VAR_7 < VAR_1->num_slices; VAR_7++)
 {
  const DimensionSlice *VAR_8 = VAR_1->slices[VAR_7];
  DimensionSlice *VAR_9;

  FUNC_0(VAR_8->storage == ((void*)0));

  if (VAR_4 == ((void*)0))
  {





   FUNC_0(VAR_5 != ((void*)0));
   VAR_5->storage = FUNC_2(VAR_7 == (VAR_1->num_slices - 1));
   VAR_5->storage_free = FUNC_4;
   VAR_4 = VAR_5->storage;
  }

  FUNC_0(VAR_0->max_items == 0 || VAR_4->descendants <= (size_t) VAR_0->max_items);






  VAR_4->descendants += 1;

  FUNC_0(0 == VAR_4->vector->num_slices ||
      VAR_4->vector->slices[0]->fd.dimension_id == VAR_8->fd.dimension_id);


  if (VAR_0->max_items > 0 && VAR_4->descendants > VAR_0->max_items)
  {
   size_t VAR_10 = FUNC_3(VAR_4, VAR_7);





   FUNC_0(VAR_7 == 0);

   FUNC_0(VAR_0->max_items + 1 == VAR_4->descendants);

   FUNC_8(&VAR_4->vector, VAR_7);





   VAR_4->descendants -= VAR_10;
  }

  VAR_9 = FUNC_7(VAR_4->vector, VAR_8->fd.range_start);


  if (VAR_9 == ((void*)0))
  {
   DimensionSlice *VAR_11;





   VAR_11 = FUNC_5(VAR_8);

   FUNC_6(&VAR_4->vector, VAR_11);
   VAR_9 = VAR_11;
  }

  FUNC_0(VAR_0->max_items == 0 || VAR_4->descendants <= (size_t) VAR_0->max_items);

  VAR_5 = VAR_9;

  VAR_4 = VAR_5->storage;
 }

 FUNC_0(VAR_5 != ((void*)0) && VAR_5->storage == ((void*)0));
 VAR_5->storage = VAR_2;
 VAR_5->storage_free = VAR_3;
 FUNC_1(VAR_6);
}
