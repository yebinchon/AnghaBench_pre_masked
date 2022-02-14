
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {size_t* vdev_initialize_offset; scalar_t__ vdev_leaf_zap; size_t vdev_initialize_last_offset; scalar_t__ vdev_initialize_action_time; size_t vdev_initialize_state; TYPE_3__* vdev_spa; TYPE_2__* vdev_top; } ;
typedef TYPE_4__ vdev_t ;
typedef int val ;
typedef size_t uint64_t ;
typedef int objset_t ;
typedef int last_offset ;
typedef int initialize_state ;
struct TYPE_15__ {TYPE_1__* tx_pool; } ;
typedef TYPE_5__ dmu_tx_t ;
struct TYPE_13__ {int * spa_meta_objset; } ;
struct TYPE_12__ {scalar_t__ vdev_removing; } ;
struct TYPE_11__ {int dp_spa; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (void*,int) ;
 TYPE_4__* FUNC_4 (int ,size_t,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,scalar_t__,int ,int,int,size_t*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5, dmu_tx_t *VAR_6)
{
 uint64_t VAR_7 = *(uint64_t *)VAR_5;
 uint64_t VAR_8 = FUNC_2(VAR_6);
 FUNC_3(VAR_5, sizeof (uint64_t));

 vdev_t *VAR_9 = FUNC_4(VAR_6->tx_pool->dp_spa, VAR_7, VAR_0);
 if (VAR_9 == ((void*)0) || VAR_9->vdev_top->vdev_removing || !FUNC_5(VAR_9))
  return;

 uint64_t VAR_10 = VAR_9->vdev_initialize_offset[VAR_8 & VAR_1];
 VAR_9->vdev_initialize_offset[VAR_8 & VAR_1] = 0;

 FUNC_0(VAR_9->vdev_leaf_zap != 0);

 objset_t *VAR_11 = VAR_9->vdev_spa->spa_meta_objset;

 if (VAR_10 > 0) {
  VAR_9->vdev_initialize_last_offset = VAR_10;
  FUNC_1(FUNC_6(VAR_11, VAR_9->vdev_leaf_zap,
      VAR_3,
      sizeof (VAR_10), 1, &VAR_10, VAR_6));
 }
 if (VAR_9->vdev_initialize_action_time > 0) {
  uint64_t VAR_12 = (uint64_t)VAR_9->vdev_initialize_action_time;
  FUNC_1(FUNC_6(VAR_11, VAR_9->vdev_leaf_zap,
      VAR_2, sizeof (VAR_12),
      1, &VAR_12, VAR_6));
 }

 uint64_t VAR_13 = VAR_9->vdev_initialize_state;
 FUNC_1(FUNC_6(VAR_11, VAR_9->vdev_leaf_zap,
     VAR_4, sizeof (VAR_13), 1,
     &VAR_13, VAR_6));
}
