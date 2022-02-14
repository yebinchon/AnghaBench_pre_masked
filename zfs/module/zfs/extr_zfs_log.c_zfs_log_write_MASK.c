
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ z_sync_cnt; int z_id; scalar_t__ z_unlinked; scalar_t__ z_blksz; int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_17__ {scalar_t__ zl_logbias; int zl_spa; } ;
typedef TYPE_2__ zilog_t ;
typedef int (* zil_callback_t ) (void*) ;
typedef scalar_t__ uint32_t ;
typedef int ssize_t ;
typedef int offset_t ;
struct TYPE_18__ {int lr_length; int lr_blkptr; scalar_t__ lr_blkoff; int lr_offset; int lr_foid; } ;
typedef TYPE_3__ lr_write_t ;
typedef scalar_t__ itx_wr_state_t ;
struct TYPE_19__ {void* itx_callback_data; int (* itx_callback ) (void*) ;int itx_sync; int itx_private; scalar_t__ itx_wr_state; int itx_lr; } ;
typedef TYPE_4__ itx_t ;
typedef int dmu_tx_t ;
typedef int dmu_buf_impl_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int ,int,TYPE_3__*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,void*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_2__*,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_14 (int,int) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int *) ;

void
FUNC_18(zilog_t *VAR_10, dmu_tx_t *VAR_11, int VAR_12,
    znode_t *VAR_13, offset_t VAR_14, ssize_t VAR_15, int VAR_16,
    zil_callback_t VAR_17, void *VAR_18)
{
 dmu_buf_impl_t *VAR_19 = (dmu_buf_impl_t *)FUNC_8(VAR_13->z_sa_hdl);
 uint32_t VAR_20 = VAR_13->z_blksz;
 itx_wr_state_t VAR_21;
 uintptr_t VAR_22;

 if (FUNC_17(VAR_10, VAR_11) || VAR_13->z_unlinked ||
     FUNC_12(VAR_13)) {
  if (VAR_17 != ((void*)0))
   VAR_17(VAR_18);
  return;
 }

 if (VAR_10->zl_logbias == VAR_7)
  VAR_21 = VAR_5;
 else if (!FUNC_9(VAR_10->zl_spa) &&
     VAR_15 >= VAR_9)
  VAR_21 = VAR_5;
 else if (VAR_16 & (VAR_3 | VAR_2))
  VAR_21 = VAR_4;
 else
  VAR_21 = VAR_6;

 if ((VAR_22 = (uintptr_t)FUNC_10(VAR_8)) != 0) {
  (void) FUNC_11(VAR_8, (void *)(VAR_22 - 1));
 }

 while (VAR_15) {
  itx_t *VAR_23;
  lr_write_t *VAR_24;
  itx_wr_state_t VAR_25 = VAR_21;
  ssize_t VAR_26 = VAR_15;







  if (VAR_25 == VAR_4 &&
      VAR_15 > FUNC_16(VAR_10))
   VAR_25 = VAR_6;
  else if (VAR_25 == VAR_5)
   VAR_26 = FUNC_4(VAR_20 - FUNC_5(VAR_14, VAR_20), VAR_15);

  VAR_23 = FUNC_14(VAR_12, sizeof (*VAR_24) +
      (VAR_25 == VAR_4 ? VAR_26 : 0));
  VAR_24 = (lr_write_t *)&VAR_23->itx_lr;

  FUNC_2(VAR_19);
  if (VAR_25 == VAR_4 && FUNC_7(FUNC_1(VAR_19),
      VAR_14, VAR_26, VAR_24 + 1, VAR_1) != 0) {
   FUNC_15(VAR_23);
   VAR_23 = FUNC_14(VAR_12, sizeof (*VAR_24));
   VAR_24 = (lr_write_t *)&VAR_23->itx_lr;
   VAR_25 = VAR_6;
  }
  FUNC_3(VAR_19);

  VAR_23->itx_wr_state = VAR_25;
  VAR_24->lr_foid = VAR_13->z_id;
  VAR_24->lr_offset = VAR_14;
  VAR_24->lr_length = VAR_26;
  VAR_24->lr_blkoff = 0;
  FUNC_0(&VAR_24->lr_blkptr);

  VAR_23->itx_private = FUNC_6(VAR_13);

  if (!(VAR_16 & (VAR_3 | VAR_2)) && (VAR_13->z_sync_cnt == 0) &&
      (VAR_22 == 0))
   VAR_23->itx_sync = VAR_0;

  VAR_23->itx_callback = VAR_17;
  VAR_23->itx_callback_data = VAR_18;
  FUNC_13(VAR_10, VAR_23, VAR_11);

  VAR_14 += VAR_26;
  VAR_15 -= VAR_26;
 }
}
