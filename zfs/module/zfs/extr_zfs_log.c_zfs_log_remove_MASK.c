
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
struct TYPE_9__ {int lr_doid; } ;
typedef TYPE_2__ lr_remove_t ;
struct TYPE_10__ {int itx_oid; int itx_lr; } ;
typedef TYPE_3__ itx_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_5 (int,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int *) ;

void
FUNC_8(zilog_t *VAR_2, dmu_tx_t *VAR_3, uint64_t VAR_4,
    znode_t *VAR_5, char *VAR_6, uint64_t VAR_7, boolean_t VAR_8)
{
 itx_t *VAR_9;
 lr_remove_t *VAR_10;
 size_t VAR_11 = FUNC_2(VAR_6) + 1;

 if (FUNC_7(VAR_2, VAR_3) || FUNC_3(VAR_5))
  return;

 VAR_9 = FUNC_5(VAR_4, sizeof (*VAR_10) + VAR_11);
 VAR_10 = (lr_remove_t *)&VAR_9->itx_lr;
 VAR_10->lr_doid = VAR_5->z_id;
 FUNC_1(VAR_6, (char *)(VAR_10 + 1), VAR_11);

 VAR_9->itx_oid = VAR_7;
 if (VAR_8) {
  FUNC_0((VAR_4 & ~VAR_0) == VAR_1);
  FUNC_6(VAR_2, VAR_7);
 }
 FUNC_4(VAR_2, VAR_9, VAR_3);
}
