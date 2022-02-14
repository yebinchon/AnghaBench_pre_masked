
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {TYPE_3__* zl_header; TYPE_2__* zl_spa; } ;
typedef TYPE_4__ zilog_t ;
struct TYPE_26__ {scalar_t__ zh_claim_txg; } ;
typedef TYPE_5__ zil_header_t ;
struct TYPE_27__ {scalar_t__ vdev_islog; } ;
typedef TYPE_6__ vdev_t ;
struct TYPE_28__ {int os_spa; } ;
typedef TYPE_7__ objset_t ;
typedef int dsl_pool_t ;
struct TYPE_29__ {scalar_t__ ds_object; } ;
typedef TYPE_8__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_30__ {int * blk_dva; } ;
typedef TYPE_9__ blkptr_t ;
struct TYPE_24__ {scalar_t__ zh_claim_txg; int zh_log; } ;
struct TYPE_22__ {scalar_t__ ub_checkpoint_txg; } ;
struct TYPE_23__ {TYPE_1__ spa_uberblock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,unsigned long long,int) ;
 int FUNC_4 (TYPE_8__*,TYPE_7__**) ;
 TYPE_4__* FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 unsigned long long FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*) ;
 TYPE_6__* FUNC_11 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__* FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*,int ,int ,void*,unsigned long long,int ) ;

int
FUNC_14(dsl_pool_t *VAR_10, dsl_dataset_t *VAR_11, void *VAR_12)
{
 zilog_t *VAR_13;
 objset_t *VAR_14;
 blkptr_t *VAR_15;
 int VAR_16;

 FUNC_0(VAR_12 == ((void*)0));

 VAR_16 = FUNC_4(VAR_11, &VAR_14);
 if (VAR_16 != 0) {
  FUNC_3(VAR_2, "can't open objset %llu, error %d",
      (unsigned long long)VAR_11->ds_object, VAR_16);
  return (0);
 }

 VAR_13 = FUNC_5(VAR_14);
 VAR_15 = (blkptr_t *)&VAR_13->zl_header->zh_log;

 if (!FUNC_1(VAR_15)) {
  vdev_t *VAR_17;
  boolean_t VAR_18 = VAR_1;
  FUNC_6(VAR_14->os_spa, VAR_7, VAR_5, VAR_6);
  VAR_17 = FUNC_11(VAR_14->os_spa, FUNC_2(&VAR_15->blk_dva[0]));
  if (VAR_17->vdev_islog && FUNC_9(VAR_17))
   VAR_18 = FUNC_10(VAR_17);
  FUNC_7(VAR_14->os_spa, VAR_7, VAR_5);

  if (!VAR_18)
   return (0);
  zil_header_t *VAR_19 = FUNC_12(VAR_13);
  if (VAR_13->zl_spa->spa_uberblock.ub_checkpoint_txg != 0 &&
      VAR_19->zh_claim_txg == 0)
   return (0);
 }
 VAR_16 = FUNC_13(VAR_13, VAR_8, VAR_9, VAR_12,
     VAR_13->zl_header->zh_claim_txg ? -1ULL :
     FUNC_8(VAR_14->os_spa), VAR_0);

 return ((VAR_16 == VAR_3 || VAR_16 == VAR_4) ? 0 : VAR_16);
}
