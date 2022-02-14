
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_18__ ;


struct TYPE_38__ {int zp_copies; size_t zp_checksum; int zp_dedup; scalar_t__ zp_dedup_verify; } ;
struct TYPE_37__ {scalar_t__ io_txg; int io_flags; int io_size; int io_abd; int io_bookmark; int io_priority; int io_orig_size; int io_orig_abd; scalar_t__ io_bp_override; int io_pipeline; int io_stage; TYPE_2__ io_prop; TYPE_5__* io_bp; int * io_spa; } ;
typedef TYPE_1__ zio_t ;
typedef TYPE_2__ zio_prop_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int ddt_t ;
struct TYPE_39__ {scalar_t__ ddp_phys_birth; } ;
typedef TYPE_3__ ddt_phys_t ;
struct TYPE_40__ {TYPE_1__** dde_lead_zio; TYPE_3__* dde_phys; } ;
typedef TYPE_4__ ddt_entry_t ;
struct TYPE_41__ {scalar_t__ blk_birth; } ;
typedef TYPE_5__ blkptr_t ;
struct TYPE_36__ {int ci_flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 size_t FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (TYPE_3__*,TYPE_5__*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_4__* FUNC_11 (int *,TYPE_5__*,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_5__*) ;
 int * FUNC_14 (int *,TYPE_5__*) ;
 size_t FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*,TYPE_1__*) ;
 TYPE_18__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_17 (TYPE_1__*,int *,TYPE_4__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*,int ,int ,int ,int *) ;
 TYPE_1__* FUNC_21 (TYPE_1__*,int *,scalar_t__,TYPE_5__*,int ,int ,int ,TYPE_2__*,int ,int *,int *,int ,TYPE_4__*,int ,int ,int *) ;

__attribute__((used)) static zio_t *
FUNC_22(zio_t *VAR_9)
{
 spa_t *VAR_10 = VAR_9->io_spa;
 blkptr_t *VAR_11 = VAR_9->io_bp;
 uint64_t VAR_12 = VAR_9->io_txg;
 zio_prop_t *VAR_13 = &VAR_9->io_prop;
 int VAR_14 = VAR_13->zp_copies;
 zio_t *VAR_15 = ((void*)0);
 ddt_t *VAR_16 = FUNC_14(VAR_10, VAR_11);
 ddt_entry_t *VAR_17;
 ddt_phys_t *VAR_18;

 FUNC_0(FUNC_3(VAR_11));
 FUNC_0(FUNC_2(VAR_11) == VAR_13->zp_checksum);
 FUNC_0(FUNC_4(VAR_11) || VAR_9->io_bp_override);
 FUNC_0(!(VAR_9->io_bp_override && (VAR_9->io_flags & VAR_3)));

 FUNC_9(VAR_16);
 VAR_17 = FUNC_11(VAR_16, VAR_11, VAR_1);
 VAR_18 = &VAR_17->dde_phys[VAR_14];

 if (VAR_13->zp_dedup_verify && FUNC_17(VAR_9, VAR_16, VAR_17)) {






  if (!(VAR_6[VAR_13->zp_checksum].ci_flags &
      VAR_2)) {
   VAR_13->zp_checksum = FUNC_15(VAR_10);
   FUNC_19(VAR_9);
   VAR_9->io_stage = VAR_4;
   FUNC_6(VAR_11);
  } else {
   VAR_13->zp_dedup = VAR_0;
   FUNC_5(VAR_11, VAR_0);
  }
  FUNC_0(!FUNC_3(VAR_11));
  VAR_9->io_pipeline = VAR_5;
  FUNC_10(VAR_16);
  return (VAR_9);
 }

 if (VAR_18->ddp_phys_birth != 0 || VAR_17->dde_lead_zio[VAR_14] != ((void*)0)) {
  if (VAR_18->ddp_phys_birth != 0)
   FUNC_8(VAR_18, VAR_11, VAR_12);
  if (VAR_17->dde_lead_zio[VAR_14] != ((void*)0))
   FUNC_16(VAR_9, VAR_17->dde_lead_zio[VAR_14]);
  else
   FUNC_12(VAR_18);
 } else if (VAR_9->io_bp_override) {
  FUNC_0(VAR_11->blk_birth == VAR_12);
  FUNC_0(FUNC_1(VAR_11, VAR_9->io_bp_override));
  FUNC_13(VAR_18, VAR_11);
  FUNC_12(VAR_18);
 } else {
  VAR_15 = FUNC_21(VAR_9, VAR_10, VAR_12, VAR_11, VAR_9->io_orig_abd,
      VAR_9->io_orig_size, VAR_9->io_orig_size, VAR_13,
      VAR_8, ((void*)0), ((void*)0),
      VAR_7, VAR_17, VAR_9->io_priority,
      FUNC_7(VAR_9), &VAR_9->io_bookmark);

  FUNC_20(VAR_15, VAR_9->io_abd, VAR_9->io_size, 0, ((void*)0));
  VAR_17->dde_lead_zio[VAR_14] = VAR_15;
 }

 FUNC_10(VAR_16);

 if (VAR_15)
  FUNC_18(VAR_15);

 return (VAR_9);
}
