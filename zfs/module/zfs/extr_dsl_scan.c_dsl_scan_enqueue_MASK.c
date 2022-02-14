
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_16__ {int vdev_scan_io_queue_lock; int * vdev_scan_io_queue; } ;
typedef TYPE_2__ vdev_t ;
typedef int spa_t ;
typedef int dva_t ;
struct TYPE_17__ {TYPE_1__* dp_scan; int * dp_spa; } ;
typedef TYPE_3__ dsl_pool_t ;
struct TYPE_18__ {int * blk_dva; } ;
typedef TYPE_4__ blkptr_t ;
struct TYPE_15__ {int scn_is_sorted; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__ const*) ;
 int FUNC_2 (TYPE_4__ const*) ;
 scalar_t__ FUNC_3 (TYPE_4__ const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__ const*,int,int const*,int *) ;
 int * FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_4__ const*,int,int,int const*) ;
 TYPE_2__* FUNC_10 (int *,int ) ;

__attribute__((used)) static void
FUNC_11(dsl_pool_t *VAR_0, const blkptr_t *VAR_1, int VAR_2,
    const zbookmark_phys_t *VAR_3)
{
 spa_t *VAR_4 = VAR_0->dp_spa;

 FUNC_0(!FUNC_2(VAR_1));





 if (!VAR_0->dp_scan->scn_is_sorted || FUNC_3(VAR_1)) {
  FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0));
  return;
 }

 for (int VAR_5 = 0; VAR_5 < FUNC_1(VAR_1); VAR_5++) {
  dva_t VAR_6;
  vdev_t *VAR_7;

  VAR_6 = VAR_1->blk_dva[VAR_5];
  VAR_7 = FUNC_10(VAR_4, FUNC_4(&VAR_6));
  FUNC_0(VAR_7 != ((void*)0));

  FUNC_5(&VAR_7->vdev_scan_io_queue_lock);
  if (VAR_7->vdev_scan_io_queue == ((void*)0))
   VAR_7->vdev_scan_io_queue = FUNC_8(VAR_7);
  FUNC_0(VAR_0->dp_scan != ((void*)0));
  FUNC_9(VAR_7->vdev_scan_io_queue, VAR_1,
      VAR_5, VAR_2, VAR_3);
  FUNC_6(&VAR_7->vdev_scan_io_queue_lock);
 }
}
