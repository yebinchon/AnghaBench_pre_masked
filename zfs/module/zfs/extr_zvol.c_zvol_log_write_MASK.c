
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ zv_volblocksize; int zv_dn; TYPE_2__* zv_zilog; } ;
typedef TYPE_1__ zvol_state_t ;
struct TYPE_14__ {scalar_t__ zl_logbias; int zl_spa; } ;
typedef TYPE_2__ zilog_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int ssize_t ;
struct TYPE_15__ {int lr_length; int lr_blkptr; scalar_t__ lr_blkoff; scalar_t__ lr_offset; int lr_foid; } ;
typedef TYPE_3__ lr_write_t ;
typedef scalar_t__ itx_wr_state_t ;
struct TYPE_16__ {int itx_sync; TYPE_1__* itx_private; scalar_t__ itx_wr_state; int itx_lr; } ;
typedef TYPE_4__ itx_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int,TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int *) ;
 scalar_t__ VAR_7 ;

void
FUNC_10(zvol_state_t *VAR_8, dmu_tx_t *VAR_9, uint64_t VAR_10,
    uint64_t VAR_11, int VAR_12)
{
 uint32_t VAR_13 = VAR_8->zv_volblocksize;
 zilog_t *VAR_14 = VAR_8->zv_zilog;
 itx_wr_state_t VAR_15;

 if (FUNC_9(VAR_14, VAR_9))
  return;

 if (VAR_14->zl_logbias == VAR_5)
  VAR_15 = VAR_3;
 else if (!FUNC_4(VAR_14->zl_spa) &&
     VAR_11 >= VAR_13 && VAR_13 > VAR_7)
  VAR_15 = VAR_3;
 else if (VAR_12)
  VAR_15 = VAR_2;
 else
  VAR_15 = VAR_4;

 while (VAR_11) {
  itx_t *VAR_16;
  lr_write_t *VAR_17;
  itx_wr_state_t VAR_18 = VAR_15;
  ssize_t VAR_19 = VAR_11;

  if (VAR_18 == VAR_2 && VAR_11 > FUNC_8(VAR_14))
   VAR_18 = VAR_4;
  else if (VAR_18 == VAR_3)
   VAR_19 = FUNC_1(VAR_13 - FUNC_2(VAR_10, VAR_13), VAR_11);

  VAR_16 = FUNC_6(VAR_1, sizeof (*VAR_17) +
      (VAR_18 == VAR_2 ? VAR_19 : 0));
  VAR_17 = (lr_write_t *)&VAR_16->itx_lr;
  if (VAR_18 == VAR_2 && FUNC_3(VAR_8->zv_dn,
      VAR_10, VAR_19, VAR_17+1, VAR_0) != 0) {
   FUNC_7(VAR_16);
   VAR_16 = FUNC_6(VAR_1, sizeof (*VAR_17));
   VAR_17 = (lr_write_t *)&VAR_16->itx_lr;
   VAR_18 = VAR_4;
  }

  VAR_16->itx_wr_state = VAR_18;
  VAR_17->lr_foid = VAR_6;
  VAR_17->lr_offset = VAR_10;
  VAR_17->lr_length = VAR_19;
  VAR_17->lr_blkoff = 0;
  FUNC_0(&VAR_17->lr_blkptr);

  VAR_16->itx_private = VAR_8;
  VAR_16->itx_sync = VAR_12;

  (void) FUNC_5(VAR_14, VAR_16, VAR_9);

  VAR_10 += VAR_19;
  VAR_11 -= VAR_19;
 }
}
