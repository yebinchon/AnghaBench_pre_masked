
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int zcb_removing_size; } ;
typedef TYPE_1__ zdb_cb_t ;
struct TYPE_23__ {size_t vdev_ms_count; scalar_t__ vdev_asize; TYPE_6__** vdev_ms; int * vdev_indirect_mapping; } ;
typedef TYPE_2__ vdev_t ;
typedef int vdev_indirect_mapping_t ;
typedef size_t uint64_t ;
struct TYPE_24__ {TYPE_2__* svr_allocd_segs; int svr_vdev_id; } ;
typedef TYPE_3__ spa_vdev_removal_t ;
struct TYPE_25__ {TYPE_3__* spa_vdev_removal; } ;
typedef TYPE_4__ spa_t ;
typedef TYPE_2__ range_tree_t ;
struct TYPE_26__ {scalar_t__ ms_start; int * ms_sm; } ;
typedef TYPE_6__ metaslab_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_4 (int *,int ,int *,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 TYPE_2__* FUNC_12 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_13(spa_t *VAR_9, zdb_cb_t *VAR_10)
{
 if (VAR_6['L'])
  return;

 if (VAR_9->spa_vdev_removal == ((void*)0))
  return;

 FUNC_8(VAR_9, VAR_3, VAR_0, VAR_2);

 spa_vdev_removal_t *VAR_11 = VAR_9->spa_vdev_removal;
 vdev_t *VAR_12 = FUNC_12(VAR_9, VAR_11->svr_vdev_id);
 vdev_indirect_mapping_t *VAR_13 = VAR_12->vdev_indirect_mapping;

 FUNC_0(FUNC_6(VAR_11->svr_allocd_segs));

 range_tree_t *VAR_14 = FUNC_4(((void*)0), VAR_1, ((void*)0), 0, 0);
 for (uint64_t VAR_15 = 0; VAR_15 < VAR_12->vdev_ms_count; VAR_15++) {
  metaslab_t *VAR_16 = VAR_12->vdev_ms[VAR_15];

  if (VAR_16->ms_start >= FUNC_11(VAR_13))
   break;

  FUNC_0(FUNC_6(VAR_14));
  if (VAR_16->ms_sm != ((void*)0))
   FUNC_1(FUNC_10(VAR_16->ms_sm, VAR_14, VAR_4));
  FUNC_7(VAR_14, VAR_8, VAR_11->svr_allocd_segs);
 }
 FUNC_5(VAR_14);

 FUNC_2(VAR_9, VAR_7, VAR_11);






 FUNC_3(VAR_11->svr_allocd_segs,
     FUNC_11(VAR_13),
     VAR_12->vdev_asize - FUNC_11(VAR_13));

 VAR_10->zcb_removing_size += FUNC_6(VAR_11->svr_allocd_segs);
 FUNC_7(VAR_11->svr_allocd_segs, VAR_5, VAR_12);

 FUNC_9(VAR_9, VAR_3, VAR_0);
}
