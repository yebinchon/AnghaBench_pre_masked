
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int z_id; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
typedef int uint64_t ;
struct TYPE_10__ {int lr_tdoid; int lr_sdoid; } ;
typedef TYPE_2__ lr_rename_t ;
struct TYPE_11__ {int itx_oid; int itx_lr; } ;
typedef TYPE_3__ itx_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int *,int *) ;

void
FUNC_5(zilog_t *VAR_0, dmu_tx_t *VAR_1, uint64_t VAR_2,
    znode_t *VAR_3, char *VAR_4, znode_t *VAR_5, char *VAR_6, znode_t *VAR_7)
{
 itx_t *VAR_8;
 lr_rename_t *VAR_9;
 size_t VAR_10 = FUNC_1(VAR_4) + 1;
 size_t VAR_11 = FUNC_1(VAR_6) + 1;

 if (FUNC_4(VAR_0, VAR_1))
  return;

 VAR_8 = FUNC_3(VAR_2, sizeof (*VAR_9) + VAR_10 + VAR_11);
 VAR_9 = (lr_rename_t *)&VAR_8->itx_lr;
 VAR_9->lr_sdoid = VAR_3->z_id;
 VAR_9->lr_tdoid = VAR_5->z_id;
 FUNC_0(VAR_4, (char *)(VAR_9 + 1), VAR_10);
 FUNC_0(VAR_6, (char *)(VAR_9 + 1) + VAR_10, VAR_11);
 VAR_8->itx_oid = VAR_7->z_id;

 FUNC_2(VAR_0, VAR_8, VAR_1);
}
