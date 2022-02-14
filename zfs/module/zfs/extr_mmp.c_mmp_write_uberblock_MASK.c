
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_22__ {int vdev_guid; int vdev_mmp_pending; scalar_t__ vdev_mmp_kstat_id; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_23__ {scalar_t__ ub_timestamp; int ub_mmp_config; int ub_mmp_delay; int ub_txg; int ub_mmp_magic; } ;
typedef TYPE_2__ uberblock_t ;
struct TYPE_25__ {int mmp_skip_error; int mmp_seq; int mmp_io_lock; scalar_t__ mmp_kstat_id; int * mmp_zio_root; int mmp_delay; TYPE_2__ mmp_ub; TYPE_1__* mmp_last_leaf; } ;
struct TYPE_24__ {TYPE_4__ spa_mmp; } ;
typedef TYPE_3__ spa_t ;
typedef TYPE_4__ mmp_thread_t ;
typedef int hrtime_t ;
typedef int abd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,TYPE_2__*,int) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_19 (TYPE_3__*,int ,int ) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (TYPE_3__*,int ,scalar_t__,int ,TYPE_1__*,int,scalar_t__,int) ;
 int FUNC_22 (TYPE_3__*,scalar_t__) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (int *,TYPE_1__*,int,int *,int ,int ,int ,TYPE_4__*,int) ;
 int FUNC_25 (char*,int ,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_26 (int *) ;
 int * FUNC_27 (int *,TYPE_3__*,int *,int *,int *,int) ;
 int * FUNC_28 (TYPE_3__*,int *,int *,int) ;

__attribute__((used)) static void
FUNC_29(spa_t *VAR_16)
{
 int VAR_17 = VAR_9 | VAR_8;
 mmp_thread_t *VAR_18 = &VAR_16->spa_mmp;
 uberblock_t *VAR_19;
 vdev_t *VAR_20 = ((void*)0);
 int VAR_21, VAR_22;
 uint64_t VAR_23;

 hrtime_t VAR_24 = FUNC_13();
 FUNC_18(VAR_16, VAR_6, VAR_12, VAR_5);
 VAR_24 = FUNC_13() - VAR_24;
 if (VAR_24 > (FUNC_5(VAR_4) / 10))
  FUNC_25("MMP SCL_STATE acquisition pool '%s' took %llu ns "
      "gethrtime %llu", FUNC_23(VAR_16), VAR_24,
      FUNC_13());

 FUNC_16(&VAR_18->mmp_io_lock);

 VAR_22 = FUNC_15(VAR_16);
 if (VAR_22) {
  FUNC_14(VAR_16, VAR_0);
  if (VAR_18->mmp_skip_error == VAR_22) {
   FUNC_22(VAR_16, VAR_18->mmp_kstat_id - 1);
  } else {
   VAR_18->mmp_skip_error = VAR_22;
   FUNC_21(VAR_16, VAR_18->mmp_ub.ub_txg,
       FUNC_12(), VAR_18->mmp_delay, ((void*)0), 0,
       VAR_18->mmp_kstat_id++, VAR_22);
   FUNC_25("MMP error choosing leaf pool '%s' "
       "gethrtime %llu fail_mask %#x", FUNC_23(VAR_16),
       FUNC_13(), VAR_22);
  }
  FUNC_17(&VAR_18->mmp_io_lock);
  FUNC_19(VAR_16, VAR_6, VAR_12);
  return;
 }

 VAR_20 = VAR_16->spa_mmp.mmp_last_leaf;
 if (VAR_18->mmp_skip_error != 0) {
  VAR_18->mmp_skip_error = 0;
  FUNC_25("MMP write after skipping due to unavailable "
      "leaves, pool '%s' gethrtime %llu leaf %#llu",
      FUNC_23(VAR_16), FUNC_13(), VAR_20->vdev_guid);
 }

 if (VAR_18->mmp_zio_root == ((void*)0))
  VAR_18->mmp_zio_root = FUNC_28(VAR_16, ((void*)0), ((void*)0),
      VAR_17 | VAR_11);

 if (VAR_18->mmp_ub.ub_timestamp != FUNC_12()) {





  VAR_18->mmp_ub.ub_timestamp = FUNC_12();
  VAR_18->mmp_seq = 1;
 }

 VAR_19 = &VAR_18->mmp_ub;
 VAR_19->ub_mmp_magic = VAR_3;
 VAR_19->ub_mmp_delay = VAR_18->mmp_delay;
 VAR_19->ub_mmp_config = FUNC_4(VAR_18->mmp_seq) |
     FUNC_3(FUNC_2(VAR_15)) |
     FUNC_1(FUNC_0(
     VAR_14));
 VAR_20->vdev_mmp_pending = FUNC_13();
 VAR_20->vdev_mmp_kstat_id = VAR_18->mmp_kstat_id;

 zio_t *VAR_25 = FUNC_27(VAR_18->mmp_zio_root, VAR_16, ((void*)0), ((void*)0), ((void*)0), VAR_17);
 abd_t *VAR_26 = FUNC_9(FUNC_8(VAR_20), VAR_1);
 FUNC_11(VAR_26, FUNC_8(VAR_20));
 FUNC_10(VAR_26, VAR_19, sizeof (uberblock_t));

 VAR_18->mmp_seq++;
 VAR_18->mmp_kstat_id++;
 FUNC_17(&VAR_18->mmp_io_lock);

 VAR_23 = FUNC_7(VAR_20, FUNC_6(VAR_20) -
     VAR_2 + FUNC_20(VAR_2));

 VAR_21 = FUNC_20(VAR_7);
 FUNC_24(VAR_25, VAR_20, VAR_21, VAR_26, VAR_23,
     FUNC_8(VAR_20), VAR_13, VAR_18,
     VAR_17 | VAR_10);

 (void) FUNC_21(VAR_16, VAR_19->ub_txg, VAR_19->ub_timestamp,
     VAR_19->ub_mmp_delay, VAR_20, VAR_21, VAR_20->vdev_mmp_kstat_id, 0);

 FUNC_26(VAR_25);
}
