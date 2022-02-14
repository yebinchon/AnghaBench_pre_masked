
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_subplans; int valid_subplans; int runtime_initialized; scalar_t__ runtime_exclusion; } ;
typedef TYPE_1__ ChunkAppendState ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(ChunkAppendState *VAR_1, int VAR_2)
{
 if (VAR_2 == VAR_0)
  return VAR_0;

 if (VAR_1->runtime_exclusion)
 {
  if (!VAR_1->runtime_initialized)
   FUNC_1(VAR_1);





  return FUNC_0(VAR_1->valid_subplans, VAR_2);
 }
 else
 {
  int VAR_3 = VAR_2 + 1;

  if (VAR_3 >= VAR_1->num_subplans)
   return VAR_0;

  return VAR_3;
 }
}
