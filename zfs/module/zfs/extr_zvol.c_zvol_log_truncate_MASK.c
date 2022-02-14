
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * zv_zilog; } ;
typedef TYPE_1__ zvol_state_t ;
typedef int zilog_t ;
typedef void* uint64_t ;
struct TYPE_8__ {void* lr_length; void* lr_offset; int lr_foid; } ;
typedef TYPE_2__ lr_truncate_t ;
struct TYPE_9__ {int itx_sync; int itx_lr; } ;
typedef TYPE_3__ itx_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;

void
FUNC_3(zvol_state_t *VAR_2, dmu_tx_t *VAR_3, uint64_t VAR_4, uint64_t VAR_5,
    boolean_t VAR_6)
{
 itx_t *VAR_7;
 lr_truncate_t *VAR_8;
 zilog_t *VAR_9 = VAR_2->zv_zilog;

 if (FUNC_2(VAR_9, VAR_3))
  return;

 VAR_7 = FUNC_1(VAR_0, sizeof (*VAR_8));
 VAR_8 = (lr_truncate_t *)&VAR_7->itx_lr;
 VAR_8->lr_foid = VAR_1;
 VAR_8->lr_offset = VAR_4;
 VAR_8->lr_length = VAR_5;

 VAR_7->itx_sync = VAR_6;
 FUNC_0(VAR_9, VAR_7, VAR_3);
}
