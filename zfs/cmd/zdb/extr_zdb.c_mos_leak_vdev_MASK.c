
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ vic_births_object; scalar_t__ vic_mapping_object; } ;
struct TYPE_15__ {scalar_t__ vdev_dtl_object; scalar_t__ vdev_ms_array; scalar_t__ vdev_leaf_zap; size_t vdev_ms_count; scalar_t__ vdev_top_zap; size_t vdev_children; struct TYPE_15__** vdev_child; TYPE_7__** vdev_ms; TYPE_5__* vdev_obsolete_sm; TYPE_4__* vdev_indirect_mapping; TYPE_2__* vdev_checkpoint_sm; TYPE_1__ vdev_indirect_config; } ;
typedef TYPE_6__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_16__ {int ms_sm; } ;
typedef TYPE_7__ metaslab_t ;
struct TYPE_14__ {scalar_t__ sm_object; } ;
struct TYPE_13__ {TYPE_3__* vim_phys; } ;
struct TYPE_12__ {scalar_t__ vimp_counts_object; } ;
struct TYPE_11__ {scalar_t__ sm_object; } ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(vdev_t *VAR_0)
{
 FUNC_1(VAR_0->vdev_dtl_object);
 FUNC_1(VAR_0->vdev_ms_array);
 FUNC_1(VAR_0->vdev_indirect_config.vic_births_object);
 FUNC_1(VAR_0->vdev_indirect_config.vic_mapping_object);
 FUNC_1(VAR_0->vdev_leaf_zap);
 if (VAR_0->vdev_checkpoint_sm != ((void*)0))
  FUNC_1(VAR_0->vdev_checkpoint_sm->sm_object);
 if (VAR_0->vdev_indirect_mapping != ((void*)0)) {
  FUNC_1(VAR_0->vdev_indirect_mapping->
      vim_phys->vimp_counts_object);
 }
 if (VAR_0->vdev_obsolete_sm != ((void*)0))
  FUNC_1(VAR_0->vdev_obsolete_sm->sm_object);

 for (uint64_t VAR_1 = 0; VAR_1 < VAR_0->vdev_ms_count; VAR_1++) {
  metaslab_t *VAR_2 = VAR_0->vdev_ms[VAR_1];
  FUNC_1(FUNC_2(VAR_2->ms_sm));
 }

 if (VAR_0->vdev_top_zap != 0) {
  FUNC_1(VAR_0->vdev_top_zap);
  FUNC_0(VAR_0);
 }

 for (uint64_t VAR_3 = 0; VAR_3 < VAR_0->vdev_children; VAR_3++) {
  FUNC_3(VAR_0->vdev_child[VAR_3]);
 }
}
