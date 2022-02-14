
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int space_map_t ;
typedef int spa_t ;
struct TYPE_7__ {int ms_synchist; int * ms_deferhist; int * ms_sm; TYPE_2__* ms_group; } ;
typedef TYPE_3__ metaslab_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {TYPE_1__* mg_vd; } ;
struct TYPE_5__ {int * vdev_spa; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 size_t FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(metaslab_t *VAR_1, boolean_t VAR_2)
{
 spa_t *VAR_3 = VAR_1->ms_group->mg_vd->vdev_spa;
 space_map_t *VAR_4 = VAR_1->ms_sm;

 if (VAR_4 == ((void*)0)) {





  return;
 }





 uint64_t VAR_5 = FUNC_2(VAR_3) % VAR_0;
 if (VAR_2) {
  FUNC_0(VAR_1->ms_synchist, VAR_1->ms_deferhist[VAR_5],
      sizeof (VAR_1->ms_synchist));
 } else {
  FUNC_1(VAR_1->ms_deferhist[VAR_5],
      sizeof (VAR_1->ms_deferhist[VAR_5]));
 }
 FUNC_1(VAR_1->ms_synchist, sizeof (VAR_1->ms_synchist));
}
