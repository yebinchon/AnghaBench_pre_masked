
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_6__ {int * mg_alloc_queue_depth; TYPE_1__* mg_class; } ;
typedef TYPE_2__ metaslab_group_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {TYPE_2__* vdev_mg; } ;
struct TYPE_5__ {int mc_alloc_throttle_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,void*) ;

void
FUNC_3(spa_t *VAR_2, uint64_t VAR_3, void *VAR_4, int VAR_5,
    int VAR_6, boolean_t VAR_7)
{
 if (!(VAR_5 & VAR_0) ||
     (VAR_5 & VAR_1))
  return;

 metaslab_group_t *VAR_8 = FUNC_1(VAR_2, VAR_3)->vdev_mg;
 if (!VAR_8->mg_class->mc_alloc_throttle_enabled)
  return;

 (void) FUNC_2(&VAR_8->mg_alloc_queue_depth[VAR_6], VAR_4);
 if (VAR_7)
  FUNC_0(VAR_8, VAR_6);
}
