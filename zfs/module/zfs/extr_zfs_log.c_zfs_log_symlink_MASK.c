
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int z_sa_hdl; int z_mode; int z_id; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
typedef int uint64_t ;
struct TYPE_12__ {int * lr_crtime; int lr_gen; int lr_mode; int lr_gid; int lr_uid; int lr_foid; int lr_doid; } ;
typedef TYPE_2__ lr_create_t ;
struct TYPE_13__ {int itx_lr; } ;
typedef TYPE_3__ itx_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 (int ,int ,int *,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (int *,int *) ;

void
FUNC_13(zilog_t *VAR_0, dmu_tx_t *VAR_1, uint64_t VAR_2,
    znode_t *VAR_3, znode_t *VAR_4, char *VAR_5, char *VAR_6)
{
 itx_t *VAR_7;
 lr_create_t *VAR_8;
 size_t VAR_9 = FUNC_9(VAR_5) + 1;
 size_t VAR_10 = FUNC_9(VAR_6) + 1;

 if (FUNC_12(VAR_0, VAR_1))
  return;

 VAR_7 = FUNC_11(VAR_2, sizeof (*VAR_8) + VAR_9 + VAR_10);
 VAR_8 = (lr_create_t *)&VAR_7->itx_lr;
 VAR_8->lr_doid = VAR_3->z_id;
 VAR_8->lr_foid = VAR_4->z_id;
 VAR_8->lr_uid = FUNC_1(FUNC_5(VAR_4));
 VAR_8->lr_gid = FUNC_0(FUNC_4(VAR_4));
 VAR_8->lr_mode = VAR_4->z_mode;
 (void) FUNC_8(VAR_4->z_sa_hdl, FUNC_3(FUNC_6(VAR_4)), &VAR_8->lr_gen,
     sizeof (uint64_t));
 (void) FUNC_8(VAR_4->z_sa_hdl, FUNC_2(FUNC_6(VAR_4)),
     VAR_8->lr_crtime, sizeof (uint64_t) * 2);
 FUNC_7(VAR_5, (char *)(VAR_8 + 1), VAR_9);
 FUNC_7(VAR_6, (char *)(VAR_8 + 1) + VAR_9, VAR_10);

 FUNC_10(VAR_0, VAR_7, VAR_1);
}
