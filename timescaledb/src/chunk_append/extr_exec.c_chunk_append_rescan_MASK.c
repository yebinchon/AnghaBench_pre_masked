
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int num_subplans; int runtime_initialized; int * valid_subplans; int params; scalar_t__ runtime_exclusion; int current; int * subplanstates; } ;
struct TYPE_6__ {int * chgParam; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
struct TYPE_8__ {TYPE_2__ ss; } ;
typedef TYPE_3__ CustomScanState ;
typedef TYPE_4__ ChunkAppendState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(CustomScanState *VAR_1)
{
 ChunkAppendState *VAR_2 = (ChunkAppendState *) VAR_1;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_subplans; VAR_3++)
 {
  if (VAR_1->ss.ps.chgParam != ((void*)0))
   FUNC_1(VAR_2->subplanstates[VAR_3], VAR_1->ss.ps.chgParam);

  FUNC_0(VAR_2->subplanstates[VAR_3]);
 }
 VAR_2->current = VAR_0;




 if (VAR_2->runtime_exclusion && FUNC_3(VAR_1->ss.ps.chgParam, VAR_2->params))
 {
  FUNC_2(VAR_2->valid_subplans);
  VAR_2->valid_subplans = ((void*)0);
  VAR_2->runtime_initialized = 0;
 }
}
