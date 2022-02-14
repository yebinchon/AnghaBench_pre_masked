
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ vdev_top_zap; size_t vdev_ms_count; TYPE_4__** vdev_ms; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int u_longlong_t ;
struct TYPE_11__ {int spa_flushed_ms_lock; int spa_metaslabs_by_flushed; } ;
typedef TYPE_2__ spa_t ;
typedef int objset_t ;
struct TYPE_12__ {scalar_t__ msp_unflushed_txg; } ;
typedef TYPE_3__ metaslab_unflushed_phys_t ;
struct TYPE_13__ {size_t ms_id; scalar_t__ ms_unflushed_txg; } ;
typedef TYPE_4__ metaslab_t ;
typedef int entry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *,size_t,size_t,size_t,TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,char*,int ,int) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,scalar_t__,int ,int,int,size_t*) ;

__attribute__((used)) static int
FUNC_8(vdev_t *VAR_2)
{
 spa_t *VAR_3 = VAR_2->vdev_spa;
 objset_t *VAR_4 = FUNC_6(VAR_3);

 if (VAR_2->vdev_top_zap == 0)
  return (0);

 uint64_t VAR_5 = 0;
 int VAR_6 = FUNC_7(VAR_4, VAR_2->vdev_top_zap,
     VAR_1,
     sizeof (uint64_t), 1, &VAR_5);
 if (VAR_6 == VAR_0)
  return (0);
 else if (VAR_6 != 0) {
  FUNC_5(VAR_3, "spa_ld_unflushed_txgs(): failed at "
      "zap_lookup(vdev_top_zap=%llu) [error %d]",
      (u_longlong_t)VAR_2->vdev_top_zap, VAR_6);
  return (VAR_6);
 }

 for (uint64_t VAR_7 = 0; VAR_7 < VAR_2->vdev_ms_count; VAR_7++) {
  metaslab_t *VAR_8 = VAR_2->vdev_ms[VAR_7];
  FUNC_0(VAR_8 != ((void*)0));

  metaslab_unflushed_phys_t VAR_9;
  uint64_t VAR_10 = sizeof (VAR_9);
  uint64_t VAR_11 = VAR_8->ms_id * VAR_10;

  VAR_6 = FUNC_2(VAR_4, VAR_5,
      VAR_11, VAR_10, &VAR_9, 0);
  if (VAR_6 != 0) {
   FUNC_5(VAR_3, "spa_ld_unflushed_txgs(): "
       "failed at dmu_read(obj=%llu) [error %d]",
       (u_longlong_t)VAR_5, VAR_6);
   return (VAR_6);
  }

  VAR_8->ms_unflushed_txg = VAR_9.msp_unflushed_txg;
  if (VAR_8->ms_unflushed_txg != 0) {
   FUNC_3(&VAR_3->spa_flushed_ms_lock);
   FUNC_1(&VAR_3->spa_metaslabs_by_flushed, VAR_8);
   FUNC_4(&VAR_3->spa_flushed_ms_lock);
  }
 }
 return (0);
}
