
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int z_id; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
typedef int uint64_t ;
struct TYPE_9__ {int lr_link_obj; int lr_doid; } ;
typedef TYPE_2__ lr_link_t ;
struct TYPE_10__ {int itx_lr; } ;
typedef TYPE_3__ itx_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int *,int *) ;

void
FUNC_5(zilog_t *VAR_0, dmu_tx_t *VAR_1, uint64_t VAR_2,
    znode_t *VAR_3, znode_t *VAR_4, char *VAR_5)
{
 itx_t *VAR_6;
 lr_link_t *VAR_7;
 size_t VAR_8 = FUNC_1(VAR_5) + 1;

 if (FUNC_4(VAR_0, VAR_1))
  return;

 VAR_6 = FUNC_3(VAR_2, sizeof (*VAR_7) + VAR_8);
 VAR_7 = (lr_link_t *)&VAR_6->itx_lr;
 VAR_7->lr_doid = VAR_3->z_id;
 VAR_7->lr_link_obj = VAR_4->z_id;
 FUNC_0(VAR_5, (char *)(VAR_7 + 1), VAR_8);

 FUNC_2(VAR_0, VAR_6, VAR_1);
}
