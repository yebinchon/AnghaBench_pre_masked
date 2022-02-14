
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int vdev_children; TYPE_3__* vdev_mg; struct TYPE_14__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef void* uint64_t ;
typedef int uint32_t ;
struct TYPE_15__ {int spa_alloc_count; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_16__ {int mg_max_alloc_queue_depth; scalar_t__* mg_cur_max_alloc_queue_depth; int * mg_alloc_queue_depth; TYPE_4__* mg_class; } ;
typedef TYPE_3__ metaslab_group_t ;
struct TYPE_17__ {void* mc_alloc_throttle_enabled; void** mc_alloc_max_slots; int * mc_alloc_slots; } ;
typedef TYPE_4__ metaslab_class_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_4__* FUNC_3 (TYPE_2__*) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;
 TYPE_4__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void
FUNC_8(spa_t *VAR_4)
{
 FUNC_0(FUNC_6(VAR_4));

 vdev_t *VAR_5 = VAR_4->spa_root_vdev;
 uint32_t VAR_6 = VAR_0 *
     VAR_2 / 100;
 metaslab_class_t *VAR_7 = FUNC_4(VAR_4);
 metaslab_class_t *VAR_8 = FUNC_5(VAR_4);
 metaslab_class_t *VAR_9 = FUNC_3(VAR_4);

 uint64_t VAR_10 = 0;
 for (int VAR_11 = 0; VAR_11 < VAR_5->vdev_children; VAR_11++) {
  vdev_t *VAR_12 = VAR_5->vdev_child[VAR_11];

  metaslab_group_t *VAR_13 = VAR_12->vdev_mg;
  if (VAR_13 == ((void*)0) || !FUNC_2(VAR_13))
   continue;

  metaslab_class_t *VAR_14 = VAR_13->mg_class;
  if (VAR_14 != VAR_7 && VAR_14 != VAR_8 && VAR_14 != VAR_9)
   continue;






  for (int VAR_15 = 0; VAR_15 < VAR_4->spa_alloc_count; VAR_15++)
   FUNC_1(FUNC_7(
       &(VAR_13->mg_alloc_queue_depth[VAR_15])));
  VAR_13->mg_max_alloc_queue_depth = VAR_6;

  for (int VAR_16 = 0; VAR_16 < VAR_4->spa_alloc_count; VAR_16++) {
   VAR_13->mg_cur_max_alloc_queue_depth[VAR_16] =
       VAR_1;
  }
  VAR_10 += VAR_1;
 }

 for (int VAR_17 = 0; VAR_17 < VAR_4->spa_alloc_count; VAR_17++) {
  FUNC_1(FUNC_7(&VAR_7->mc_alloc_slots[VAR_17]));
  FUNC_1(FUNC_7(&VAR_8->mc_alloc_slots[VAR_17]));
  FUNC_1(FUNC_7(&VAR_9->mc_alloc_slots[VAR_17]));
  VAR_7->mc_alloc_max_slots[VAR_17] = VAR_10;
  VAR_8->mc_alloc_max_slots[VAR_17] = VAR_10;
  VAR_9->mc_alloc_max_slots[VAR_17] = VAR_10;
 }
 VAR_7->mc_alloc_throttle_enabled = VAR_3;
 VAR_8->mc_alloc_throttle_enabled = VAR_3;
 VAR_9->mc_alloc_throttle_enabled = VAR_3;
}
