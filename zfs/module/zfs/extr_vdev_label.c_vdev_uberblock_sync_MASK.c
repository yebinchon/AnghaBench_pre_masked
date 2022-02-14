
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_14__ {size_t vdev_children; scalar_t__ vdev_state; scalar_t__ vdev_copy_uberblocks; int vdev_spa; TYPE_1__* vdev_ops; struct TYPE_14__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_15__ {int ub_txg; } ;
typedef TYPE_3__ uberblock_t ;
typedef int abd_t ;
struct TYPE_13__ {int vdev_op_leaf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int * FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,TYPE_3__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_2__*,int,int *,int ,int ,int ,size_t*,int) ;
 int VAR_6 ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(zio_t *VAR_7, uint64_t *VAR_8,
    uberblock_t *VAR_9, vdev_t *VAR_10, int VAR_11)
{
 for (uint64_t VAR_12 = 0; VAR_12 < VAR_10->vdev_children; VAR_12++) {
  FUNC_11(VAR_7, VAR_8,
      VAR_9, VAR_10->vdev_child[VAR_12], VAR_11);
 }

 if (!VAR_10->vdev_ops->vdev_op_leaf)
  return;

 if (!FUNC_10(VAR_10))
  return;


 if (VAR_10->vdev_state == VAR_4 &&
     VAR_10->vdev_copy_uberblocks == VAR_1) {
  FUNC_8(VAR_10);
  VAR_10->vdev_copy_uberblocks = VAR_0;
 }

 int VAR_13 = FUNC_7(VAR_10->vdev_spa) ? VAR_2 : 0;
 int VAR_14 = VAR_9->ub_txg % (FUNC_0(VAR_10) - VAR_13);


 abd_t *VAR_15 = FUNC_3(FUNC_2(VAR_10), VAR_1);
 FUNC_6(VAR_15, FUNC_2(VAR_10));
 FUNC_4(VAR_15, VAR_9, sizeof (uberblock_t));

 for (int VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
  FUNC_9(VAR_7, VAR_10, VAR_16, VAR_15,
      FUNC_1(VAR_10, VAR_14), FUNC_2(VAR_10),
      VAR_6, VAR_8,
      VAR_11 | VAR_5);

 FUNC_5(VAR_15);
}
