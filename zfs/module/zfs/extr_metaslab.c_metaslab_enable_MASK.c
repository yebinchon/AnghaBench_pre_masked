
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_7__ {scalar_t__ ms_disabled; int ms_lock; TYPE_3__* ms_group; } ;
typedef TYPE_2__ metaslab_t ;
struct TYPE_8__ {int mg_ms_disabled_lock; int mg_ms_disabled_cv; int mg_ms_disabled; TYPE_1__* mg_vd; } ;
typedef TYPE_3__ metaslab_group_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int * vdev_spa; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(metaslab_t *VAR_0, boolean_t VAR_1, boolean_t VAR_2)
{
 metaslab_group_t *VAR_3 = VAR_0->ms_group;
 spa_t *VAR_4 = VAR_3->mg_vd->vdev_spa;






 if (VAR_1)
  FUNC_5(FUNC_4(VAR_4), 0);

 FUNC_2(&VAR_3->mg_ms_disabled_lock);
 FUNC_2(&VAR_0->ms_lock);
 if (--VAR_0->ms_disabled == 0) {
  VAR_3->mg_ms_disabled--;
  FUNC_0(&VAR_3->mg_ms_disabled_cv);
  if (VAR_2)
   FUNC_1(VAR_0);
 }
 FUNC_3(&VAR_0->ms_lock);
 FUNC_3(&VAR_3->mg_ms_disabled_lock);
}
