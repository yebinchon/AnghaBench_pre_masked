
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_subplans; int * subplanstates; } ;
typedef int CustomScanState ;
typedef TYPE_1__ ChunkAppendState ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(CustomScanState *VAR_0)
{
 ChunkAppendState *VAR_1 = (ChunkAppendState *) VAR_0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_subplans; VAR_2++)
 {
  FUNC_0(VAR_1->subplanstates[VAR_2]);
 }
}
