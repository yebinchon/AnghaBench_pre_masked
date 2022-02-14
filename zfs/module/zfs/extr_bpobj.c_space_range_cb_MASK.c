
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct space_range_arg {scalar_t__ mintxg; scalar_t__ maxtxg; int uncomp; int comp; int spa; int used; } ;
typedef int dmu_tx_t ;
typedef int boolean_t ;
struct TYPE_7__ {scalar_t__ blk_birth; } ;
typedef TYPE_1__ blkptr_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_0, const blkptr_t *VAR_1, boolean_t VAR_2, dmu_tx_t *VAR_3)
{
 struct space_range_arg *VAR_4 = VAR_0;

 if (VAR_1->blk_birth > VAR_4->mintxg && VAR_1->blk_birth <= VAR_4->maxtxg) {
  if (FUNC_4(FUNC_5(VAR_4->spa)))
   VAR_4->used += FUNC_3(VAR_4->spa, VAR_1);
  else
   VAR_4->used += FUNC_2(VAR_4->spa, VAR_1);
  VAR_4->comp += FUNC_0(VAR_1);
  VAR_4->uncomp += FUNC_1(VAR_1);
 }
 return (0);
}
