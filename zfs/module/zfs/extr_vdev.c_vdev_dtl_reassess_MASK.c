
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int vdev_children; scalar_t__ vdev_resilver_txg; int vdev_nparity; int vdev_dtl_lock; int * vdev_dtl; struct TYPE_16__** vdev_child; int vdev_top; TYPE_1__* vdev_ops; scalar_t__ vdev_aux; TYPE_5__* vdev_spa; } ;
typedef TYPE_4__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_17__ {scalar_t__ spa_scrub_started; TYPE_2__* spa_dsl_pool; TYPE_4__* spa_root_vdev; } ;
typedef TYPE_5__ spa_t ;
struct TYPE_15__ {scalar_t__ scn_errors; } ;
struct TYPE_18__ {TYPE_3__ scn_phys; } ;
typedef TYPE_6__ dsl_scan_t ;
typedef int avl_tree_t ;
struct TYPE_14__ {TYPE_6__* dp_scan; } ;
struct TYPE_13__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned long long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int (*) (int ,int ,unsigned long long),int ) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int ,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int ,scalar_t__,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 scalar_t__ VAR_8 ;

void
FUNC_18(vdev_t *VAR_9, uint64_t VAR_10, uint64_t VAR_11, int VAR_12)
{
 spa_t *VAR_13 = VAR_9->vdev_spa;
 avl_tree_t VAR_14;
 int VAR_15;

 FUNC_0(FUNC_7(VAR_13, VAR_6, VAR_5) != 0);

 for (int VAR_16 = 0; VAR_16 < VAR_9->vdev_children; VAR_16++)
  FUNC_18(VAR_9->vdev_child[VAR_16], VAR_10,
      VAR_11, VAR_12);

 if (VAR_9 == VAR_13->spa_root_vdev || !FUNC_16(VAR_9) || VAR_9->vdev_aux)
  return;

 if (VAR_9->vdev_ops->vdev_op_leaf) {
  dsl_scan_t *VAR_17 = VAR_13->spa_dsl_pool->dp_scan;

  FUNC_1(&VAR_9->vdev_dtl_lock);




  if (VAR_8 && VAR_17)
   VAR_17->scn_phys.scn_errors = 0;







  if (VAR_11 != 0 &&
      (VAR_13->spa_scrub_started ||
      (VAR_17 != ((void*)0) && VAR_17->scn_phys.scn_errors == 0)) &&
      FUNC_15(VAR_9)) {
   FUNC_10(&VAR_14);
   FUNC_8(&VAR_14,
       VAR_9->vdev_dtl[VAR_0], 1);
   FUNC_9(&VAR_14, 0, VAR_11, -1);
   FUNC_8(&VAR_14,
       VAR_9->vdev_dtl[VAR_3], 2);
   FUNC_12(&VAR_14,
       VAR_9->vdev_dtl[VAR_0], 1);
   FUNC_11(&VAR_14);
  }
  FUNC_5(VAR_9->vdev_dtl[VAR_2], ((void*)0), ((void*)0));
  FUNC_6(VAR_9->vdev_dtl[VAR_0],
      FUNC_3, VAR_9->vdev_dtl[VAR_2]);
  if (VAR_12)
   FUNC_5(VAR_9->vdev_dtl[VAR_3], ((void*)0), ((void*)0));
  FUNC_5(VAR_9->vdev_dtl[VAR_1], ((void*)0), ((void*)0));
  if (!FUNC_17(VAR_9))
   FUNC_3(VAR_9->vdev_dtl[VAR_1], 0, -1ULL);
  else
   FUNC_6(VAR_9->vdev_dtl[VAR_0],
       FUNC_3, VAR_9->vdev_dtl[VAR_1]);






  if (VAR_10 != 0 && VAR_9->vdev_resilver_txg != 0 &&
      FUNC_4(VAR_9->vdev_dtl[VAR_0]) &&
      FUNC_4(VAR_9->vdev_dtl[VAR_1])) {
   VAR_9->vdev_resilver_txg = 0;
   FUNC_13(VAR_9->vdev_top);
  }

  FUNC_2(&VAR_9->vdev_dtl_lock);

  if (VAR_10 != 0)
   FUNC_14(VAR_9->vdev_top, VAR_7, VAR_9, VAR_10);
  return;
 }

 FUNC_1(&VAR_9->vdev_dtl_lock);
 for (int VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {

  int VAR_19 = (VAR_18 == VAR_0) ? VAR_1: VAR_18;
  if (VAR_18 == VAR_3)
   continue;
  if (VAR_18 == VAR_2)
   VAR_15 = 1;
  else if (VAR_9->vdev_nparity != 0)
   VAR_15 = VAR_9->vdev_nparity + 1;
  else
   VAR_15 = VAR_9->vdev_children;
  FUNC_10(&VAR_14);
  for (int VAR_20 = 0; VAR_20 < VAR_9->vdev_children; VAR_20++) {
   vdev_t *VAR_21 = VAR_9->vdev_child[VAR_20];
   FUNC_1(&VAR_21->vdev_dtl_lock);
   FUNC_8(&VAR_14, VAR_21->vdev_dtl[VAR_19], 1);
   FUNC_2(&VAR_21->vdev_dtl_lock);
  }
  FUNC_12(&VAR_14, VAR_9->vdev_dtl[VAR_18], VAR_15);
  FUNC_11(&VAR_14);
 }
 FUNC_2(&VAR_9->vdev_dtl_lock);
}
