
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zd_zilog; int zd_os; } ;
typedef TYPE_1__ ztest_ds_t ;
struct TYPE_11__ {scalar_t__ lr_length; int lr_common; int lr_offset; int lr_foid; } ;
typedef TYPE_2__ lr_write_t ;
typedef int lr_t ;
typedef scalar_t__ itx_wr_state_t ;
struct TYPE_12__ {int itx_sync; int itx_lr; scalar_t__ itx_wr_state; TYPE_1__* itx_private; } ;
typedef TYPE_3__ itx_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,TYPE_2__*,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(ztest_ds_t *VAR_6, dmu_tx_t *VAR_7, lr_write_t *VAR_8)
{
 itx_t *VAR_9;
 itx_wr_state_t VAR_10 = FUNC_7(VAR_5);

 if (FUNC_6(VAR_6->zd_zilog, VAR_7))
  return;

 if (VAR_8->lr_length > FUNC_5(VAR_6->zd_zilog))
  VAR_10 = VAR_3;

 VAR_9 = FUNC_3(VAR_1,
     sizeof (*VAR_8) + (VAR_10 == VAR_2 ? VAR_8->lr_length : 0));

 if (VAR_10 == VAR_2 &&
     FUNC_1(VAR_6->zd_os, VAR_8->lr_foid, VAR_8->lr_offset, VAR_8->lr_length,
     ((lr_write_t *)&VAR_9->itx_lr) + 1, VAR_0) != 0) {
  FUNC_4(VAR_9);
  VAR_9 = FUNC_3(VAR_1, sizeof (*VAR_8));
  VAR_10 = VAR_4;
 }
 VAR_9->itx_private = VAR_6;
 VAR_9->itx_wr_state = VAR_10;
 VAR_9->itx_sync = (FUNC_7(8) == 0);

 FUNC_0(&VAR_8->lr_common + 1, &VAR_9->itx_lr + 1,
     sizeof (*VAR_8) - sizeof (lr_t));

 FUNC_2(VAR_6->zd_zilog, VAR_9, VAR_7);
}
