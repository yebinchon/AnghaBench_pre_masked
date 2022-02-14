
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int dl_lock; TYPE_1__* dl_phys; int dl_bpobj; scalar_t__ dl_oldfmt; } ;
typedef TYPE_2__ dsl_deadlist_t ;
struct TYPE_5__ {int dl_uncomp; int dl_comp; int dl_used; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(dsl_deadlist_t *VAR_0,
    uint64_t *VAR_1, uint64_t *VAR_2, uint64_t *VAR_3)
{
 FUNC_0(FUNC_3(VAR_0));
 if (VAR_0->dl_oldfmt) {
  FUNC_1(FUNC_2(&VAR_0->dl_bpobj,
      VAR_1, VAR_2, VAR_3));
  return;
 }

 FUNC_4(&VAR_0->dl_lock);
 *VAR_1 = VAR_0->dl_phys->dl_used;
 *VAR_2 = VAR_0->dl_phys->dl_comp;
 *VAR_3 = VAR_0->dl_phys->dl_uncomp;
 FUNC_5(&VAR_0->dl_lock);
}
