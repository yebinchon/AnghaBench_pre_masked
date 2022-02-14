
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_12__ {TYPE_3__* ms_sm; int ms_lock; } ;
typedef TYPE_4__ metaslab_t ;
struct TYPE_13__ {int mg_lock; int * mg_histogram; TYPE_1__* mg_vd; TYPE_6__* mg_class; } ;
typedef TYPE_5__ metaslab_group_t ;
struct TYPE_14__ {int * mc_histogram; } ;
typedef TYPE_6__ metaslab_class_t ;
struct TYPE_11__ {TYPE_2__* sm_phys; } ;
struct TYPE_10__ {scalar_t__* smp_histogram; } ;
struct TYPE_9__ {int vdev_ashift; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(metaslab_group_t *VAR_1, metaslab_t *VAR_2)
{
 metaslab_class_t *VAR_3 = VAR_1->mg_class;
 uint64_t VAR_4 = VAR_1->mg_vd->vdev_ashift;

 FUNC_0(FUNC_1(&VAR_2->ms_lock));
 if (VAR_2->ms_sm == ((void*)0))
  return;

 FUNC_2(&VAR_1->mg_lock);
 for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_1->mg_histogram[VAR_5 + VAR_4] +=
      VAR_2->ms_sm->sm_phys->smp_histogram[VAR_5];
  VAR_3->mc_histogram[VAR_5 + VAR_4] +=
      VAR_2->ms_sm->sm_phys->smp_histogram[VAR_5];
 }
 FUNC_3(&VAR_1->mg_lock);
}
