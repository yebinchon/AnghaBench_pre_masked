
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_24__ {int* tts_isnull; int * tts_values; } ;
typedef TYPE_5__ TupleTableSlot ;
struct TYPE_23__ {int isnull; int value; } ;
struct TYPE_22__ {TYPE_10__* iterator; } ;
struct TYPE_27__ {int type; TYPE_4__ segmentby; int attno; TYPE_3__ compressed; } ;
struct TYPE_20__ {TYPE_5__* ss_ScanTupleSlot; } ;
struct TYPE_21__ {int custom_ps; TYPE_1__ ss; } ;
struct TYPE_26__ {int initialized; int num_columns; int counter; TYPE_8__* columns; TYPE_2__ csstate; } ;
struct TYPE_25__ {int is_null; int val; int is_done; } ;
struct TYPE_19__ {TYPE_6__ (* try_next ) (TYPE_10__*) ;} ;
typedef TYPE_6__ DecompressResult ;
typedef TYPE_7__ DecompressChunkState ;
typedef TYPE_8__ DecompressChunkColumnState ;
typedef size_t AttrNumber ;


 size_t FUNC_0 (int ) ;


 int VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;


 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_7 (int ) ;
 TYPE_6__ FUNC_8 (TYPE_10__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_9(DecompressChunkState *VAR_1)
{
 TupleTableSlot *VAR_2 = VAR_1->csstate.ss.ss_ScanTupleSlot;
 bool VAR_3 = 0;
 int VAR_4;

 while (1)
 {
  if (!VAR_1->initialized)
  {
   TupleTableSlot *VAR_5 = FUNC_2(FUNC_7(VAR_1->csstate.custom_ps));

   if (FUNC_4(VAR_5))
    return ((void*)0);

   VAR_3 = 0;
   FUNC_6(VAR_1, VAR_5);
  }

  FUNC_1(VAR_2);

  for (VAR_4 = 0; VAR_4 < VAR_1->num_columns; VAR_4++)
  {
   DecompressChunkColumnState *VAR_6 = &VAR_1->columns[VAR_4];
   switch (VAR_6->type)
   {
    case 130:
     if (VAR_1->counter <= 0)





      VAR_3 = 1;
     else
      VAR_1->counter--;
     break;
    case 131:
    {
     AttrNumber VAR_7 = FUNC_0(VAR_6->attno);

     if (VAR_6->compressed.iterator != ((void*)0))
     {
      DecompressResult VAR_8;
      VAR_8 = VAR_6->compressed.iterator->try_next(VAR_6->compressed.iterator);

      if (VAR_8.is_done)
      {
       VAR_3 = 1;
       continue;
      }
      else if (VAR_3)
      {





       FUNC_5(VAR_0, "compressed column out of sync with batch counter");
      }

      VAR_2->tts_values[VAR_7] = VAR_8.val;
      VAR_2->tts_isnull[VAR_7] = VAR_8.is_null;
     }
     else
      VAR_2->tts_isnull[VAR_7] = 1;

     break;
    }
    case 129:
    {
     AttrNumber VAR_9 = FUNC_0(VAR_6->attno);

     VAR_2->tts_values[VAR_9] = VAR_6->segmentby.value;
     VAR_2->tts_isnull[VAR_9] = VAR_6->segmentby.isnull;
     break;
    }
    case 128:




     break;
   }
  }

  if (VAR_3)
  {
   VAR_1->initialized = 0;
   continue;
  }

  FUNC_3(VAR_2);

  return VAR_2;
 }
}
