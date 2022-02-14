
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {size_t vdev_asize; int * vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_25__ {TYPE_1__* spa_root_vdev; int spa_trust_config; } ;
typedef TYPE_3__ spa_t ;
typedef int longlong_t ;
typedef int boolean_t ;
struct TYPE_26__ {int * blk_dva; } ;
typedef TYPE_4__ blkptr_t ;
struct TYPE_23__ {size_t vdev_children; TYPE_2__** vdev_child; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__ const*) ;
 scalar_t__ FUNC_2 (TYPE_4__ const*) ;
 scalar_t__ FUNC_3 (TYPE_4__ const*) ;
 scalar_t__ FUNC_4 (TYPE_4__ const*) ;
 int FUNC_5 (TYPE_4__ const*) ;
 scalar_t__ FUNC_6 (TYPE_4__ const*) ;
 scalar_t__ FUNC_7 (TYPE_4__ const*) ;
 scalar_t__ FUNC_8 (TYPE_4__ const*) ;
 scalar_t__ FUNC_9 (TYPE_4__ const*) ;
 int FUNC_10 (scalar_t__) ;
 size_t FUNC_11 (int *) ;
 size_t FUNC_12 (int *) ;
 size_t FUNC_13 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (TYPE_3__*,int ,TYPE_4__ const*,int ) ;
 int FUNC_15 (TYPE_3__*,int ,TYPE_4__ const*) ;
 int FUNC_16 (TYPE_3__*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 size_t FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (char*,TYPE_4__ const*,int,...) ;

__attribute__((used)) static void
FUNC_19(spa_t *VAR_12, const blkptr_t *VAR_13, boolean_t VAR_14)
{
 if (!FUNC_10(FUNC_7(VAR_13))) {
  FUNC_18("blkptr at %p has invalid TYPE %llu",
      VAR_13, (longlong_t)FUNC_7(VAR_13));
 }
 if (FUNC_2(VAR_13) >= VAR_6 ||
     FUNC_2(VAR_13) <= VAR_7) {
  FUNC_18("blkptr at %p has invalid CHECKSUM %llu",
      VAR_13, (longlong_t)FUNC_2(VAR_13));
 }
 if (FUNC_3(VAR_13) >= VAR_8 ||
     FUNC_3(VAR_13) <= VAR_9) {
  FUNC_18("blkptr at %p has invalid COMPRESS %llu",
      VAR_13, (longlong_t)FUNC_3(VAR_13));
 }
 if (FUNC_4(VAR_13) > VAR_5) {
  FUNC_18("blkptr at %p has invalid LSIZE %llu",
      VAR_13, (longlong_t)FUNC_4(VAR_13));
 }
 if (FUNC_6(VAR_13) > VAR_5) {
  FUNC_18("blkptr at %p has invalid PSIZE %llu",
      VAR_13, (longlong_t)FUNC_6(VAR_13));
 }

 if (FUNC_8(VAR_13)) {
  if (FUNC_1(VAR_13) >= VAR_0) {
   FUNC_18("blkptr at %p has invalid ETYPE %llu",
       VAR_13, (longlong_t)FUNC_1(VAR_13));
  }
 }





 if (!VAR_12->spa_trust_config)
  return;

 if (!VAR_14)
  FUNC_14(VAR_12, VAR_3, VAR_13, VAR_1);
 else
  FUNC_0(FUNC_16(VAR_12, VAR_3, VAR_2));
 for (int VAR_15 = 0; VAR_15 < FUNC_5(VAR_13); VAR_15++) {
  uint64_t VAR_16 = FUNC_13(&VAR_13->blk_dva[VAR_15]);

  if (VAR_16 >= VAR_12->spa_root_vdev->vdev_children) {
   FUNC_18("blkptr at %p DVA %u has invalid "
       "VDEV %llu",
       VAR_13, VAR_15, (longlong_t)VAR_16);
   continue;
  }
  vdev_t *VAR_17 = VAR_12->spa_root_vdev->vdev_child[VAR_16];
  if (VAR_17 == ((void*)0)) {
   FUNC_18("blkptr at %p DVA %u has invalid "
       "VDEV %llu",
       VAR_13, VAR_15, (longlong_t)VAR_16);
   continue;
  }
  if (VAR_17->vdev_ops == &VAR_10) {
   FUNC_18("blkptr at %p DVA %u has hole "
       "VDEV %llu",
       VAR_13, VAR_15, (longlong_t)VAR_16);
   continue;
  }
  if (VAR_17->vdev_ops == &VAR_11) {





   continue;
  }
  uint64_t VAR_18 = FUNC_12(&VAR_13->blk_dva[VAR_15]);
  uint64_t VAR_19 = FUNC_11(&VAR_13->blk_dva[VAR_15]);
  if (FUNC_9(VAR_13))
   VAR_19 = FUNC_17(VAR_17, VAR_4);
  if (VAR_18 + VAR_19 > VAR_17->vdev_asize) {
   FUNC_18("blkptr at %p DVA %u has invalid "
       "OFFSET %llu",
       VAR_13, VAR_15, (longlong_t)VAR_18);
  }
 }
 if (!VAR_14)
  FUNC_15(VAR_12, VAR_3, VAR_13);
}
