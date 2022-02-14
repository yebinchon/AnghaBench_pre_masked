
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_8__ {scalar_t__ state; scalar_t__ subslot_time; scalar_t__ gapfill_start; scalar_t__ next_timestamp; scalar_t__ gapfill_period; scalar_t__ gapfill_end; int subslot; int groups_initialized; scalar_t__ multigroup; } ;
typedef TYPE_1__ GapFillState ;
typedef int CustomScanState ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_7(CustomScanState *VAR_4)
{
 GapFillState *VAR_5 = (GapFillState *) VAR_4;
 TupleTableSlot *VAR_6 = ((void*)0);

 while (1)
 {

  if (VAR_2 == VAR_5->state)
  {
   VAR_6 = FUNC_1(VAR_5);
   if (VAR_6)
   {
    if (VAR_5->multigroup && FUNC_3(VAR_5, VAR_6))
     VAR_5->state = VAR_1;
    else
     VAR_5->state = VAR_3;

    FUNC_6(VAR_5, VAR_6);
   }
   else
   {





    if (VAR_5->multigroup && !VAR_5->groups_initialized)
     return ((void*)0);
    else
     VAR_5->state = VAR_0;
   }
  }


  if (VAR_3 == VAR_5->state && VAR_5->subslot_time < VAR_5->gapfill_start)
  {
   VAR_5->state = VAR_2;
   return FUNC_5(VAR_5);
  }


  if (VAR_3 == VAR_5->state && VAR_5->subslot_time == VAR_5->next_timestamp)
  {
   VAR_5->state = VAR_2;
   VAR_5->next_timestamp += VAR_5->gapfill_period;
   return FUNC_5(VAR_5);
  }


  if (VAR_5->next_timestamp < VAR_5->gapfill_end)
  {
   FUNC_0(VAR_5->state != VAR_2);
   VAR_6 = FUNC_2(VAR_5, VAR_5->next_timestamp);
   VAR_5->next_timestamp += VAR_5->gapfill_period;
   return VAR_6;
  }


  if (VAR_3 == VAR_5->state)
  {
   VAR_5->state = VAR_2;
   return FUNC_5(VAR_5);
  }




  if (VAR_1 == VAR_5->state)
  {
   VAR_5->state = VAR_3;
   VAR_5->next_timestamp = VAR_5->gapfill_start;
   FUNC_4(VAR_5, VAR_5->subslot);
   continue;
  }

  return ((void*)0);
 }
}
