
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int vdev_top_zap; int * vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int objset_t ;
struct TYPE_10__ {int msp_unflushed_txg; } ;
typedef TYPE_3__ metaslab_unflushed_phys_t ;
struct TYPE_11__ {int ms_id; TYPE_1__* ms_group; } ;
typedef TYPE_4__ metaslab_t ;
typedef int entry ;
typedef int dmu_tx_t ;
struct TYPE_8__ {TYPE_2__* mg_vd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int,int,int,TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int,int,int*,int *) ;
 int FUNC_8 (int *,int ,int ,int,int,int*) ;

__attribute__((used)) static void
FUNC_9(metaslab_t *VAR_6, dmu_tx_t *VAR_7)
{
 vdev_t *VAR_8 = VAR_6->ms_group->mg_vd;
 spa_t *VAR_9 = VAR_8->vdev_spa;
 objset_t *VAR_10 = FUNC_6(VAR_9);

 FUNC_0(FUNC_5(VAR_9, VAR_3));

 metaslab_unflushed_phys_t VAR_11 = {
  .msp_unflushed_txg = FUNC_4(VAR_6),
 };
 uint64_t VAR_12 = sizeof (VAR_11);
 uint64_t VAR_13 = VAR_6->ms_id * VAR_12;

 uint64_t VAR_14 = 0;
 int VAR_15 = FUNC_8(VAR_10, VAR_8->vdev_top_zap,
     VAR_5, sizeof (uint64_t), 1,
     &VAR_14);
 if (VAR_15 == VAR_2) {
  VAR_14 = FUNC_2(VAR_10, VAR_0,
      VAR_4, VAR_1, 0, VAR_7);
  FUNC_1(FUNC_7(VAR_10, VAR_8->vdev_top_zap,
      VAR_5, sizeof (uint64_t), 1,
      &VAR_14, VAR_7));
 } else {
  FUNC_1(VAR_15);
 }

 FUNC_3(FUNC_6(VAR_9), VAR_14, VAR_13, VAR_12,
     &VAR_11, VAR_7);
}
