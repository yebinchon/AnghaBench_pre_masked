
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ sort_options; int runtime_number_loops; int runtime_number_exclusions; scalar_t__ runtime_exclusion; int initial_subplans; scalar_t__ startup_exclusion; } ;
struct TYPE_11__ {int custom_ps; } ;
struct TYPE_10__ {scalar_t__ format; scalar_t__ verbose; } ;
typedef int List ;
typedef TYPE_1__ ExplainState ;
typedef TYPE_2__ CustomScanState ;
typedef TYPE_3__ ChunkAppendState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,TYPE_1__*) ;
 int FUNC_1 (char*,int *,int,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int *,TYPE_1__*) ;

void
FUNC_4(CustomScanState *VAR_2, List *VAR_3, ExplainState *VAR_4)
{
 ChunkAppendState *VAR_5 = (ChunkAppendState *) VAR_2;

 if (VAR_5->sort_options != VAR_1)
  FUNC_3(VAR_5, VAR_3, VAR_4);

 if (VAR_4->verbose || VAR_4->format != VAR_0)
  FUNC_0("Startup Exclusion", VAR_5->startup_exclusion, VAR_4);

 if (VAR_4->verbose || VAR_4->format != VAR_0)
  FUNC_0("Runtime Exclusion", VAR_5->runtime_exclusion, VAR_4);

 if (VAR_5->startup_exclusion)
  FUNC_1("Chunks excluded during startup",
          ((void*)0),
          FUNC_2(VAR_5->initial_subplans) -
           FUNC_2(VAR_2->custom_ps),
          VAR_4);

 if (VAR_5->runtime_exclusion && VAR_5->runtime_number_loops > 0)
 {
  int VAR_6 = VAR_5->runtime_number_exclusions / VAR_5->runtime_number_loops;
  FUNC_1("Chunks excluded during runtime", ((void*)0), VAR_6, VAR_4);
 }
}
