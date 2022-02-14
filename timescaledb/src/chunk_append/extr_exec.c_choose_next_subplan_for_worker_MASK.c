
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t current; int num_subplans; int filtered_first_partial_plan; int lock; TYPE_1__* pstate; } ;
struct TYPE_5__ {int* finished; int next_plan; } ;
typedef TYPE_1__ ParallelChunkAppendState ;
typedef TYPE_2__ ChunkAppendState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_4(ChunkAppendState *VAR_3)
{
 ParallelChunkAppendState *VAR_4 = VAR_3->pstate;
 int VAR_5;
 int VAR_6;

 FUNC_1(VAR_3->lock, VAR_1);


 if (VAR_3->current >= 0)
  VAR_4->finished[VAR_3->current] = 1;

 if (VAR_4->next_plan == VAR_0)
  VAR_5 = FUNC_3(VAR_3, VAR_0);
 else
  VAR_5 = VAR_4->next_plan;

 if (VAR_5 == VAR_2)
 {

  VAR_4->next_plan = VAR_2;
  VAR_3->current = VAR_2;
  FUNC_2(VAR_3->lock);
  return;
 }

 VAR_6 = VAR_5;


 while (VAR_4->finished[VAR_5])
 {
  VAR_5 = FUNC_3(VAR_3, VAR_5);


  if (VAR_5 < 0)
   VAR_5 = FUNC_3(VAR_3, VAR_0);

  if (VAR_5 == VAR_6 || VAR_5 < 0)
  {
   FUNC_0(VAR_5 >= 0);
   VAR_4->next_plan = VAR_2;
   VAR_3->current = VAR_2;
   FUNC_2(VAR_3->lock);
   return;
  }
 }

 FUNC_0(VAR_5 >= 0 && VAR_5 < VAR_3->num_subplans);
 VAR_3->current = VAR_5;





 if (VAR_5 < VAR_3->filtered_first_partial_plan)
  VAR_4->finished[VAR_5] = 1;


 VAR_4->next_plan = FUNC_3(VAR_3, VAR_3->current);





 if (VAR_4->next_plan < 0)
  VAR_4->next_plan = VAR_0;

 FUNC_2(VAR_3->lock);
}
