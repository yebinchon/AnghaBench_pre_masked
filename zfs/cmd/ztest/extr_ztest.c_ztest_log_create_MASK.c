
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zd_zilog; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef int lr_t ;
struct TYPE_9__ {int lr_common; } ;
typedef TYPE_2__ lr_create_t ;
struct TYPE_10__ {int itx_lr; } ;
typedef TYPE_3__ itx_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(ztest_ds_t *VAR_1, dmu_tx_t *VAR_2, lr_create_t *VAR_3)
{
 char *VAR_4 = (void *)(VAR_3 + 1);
 size_t VAR_5 = FUNC_1(VAR_4) + 1;
 itx_t *VAR_6;

 if (FUNC_4(VAR_1->zd_zilog, VAR_2))
  return;

 VAR_6 = FUNC_3(VAR_0, sizeof (*VAR_3) + VAR_5);
 FUNC_0(&VAR_3->lr_common + 1, &VAR_6->itx_lr + 1,
     sizeof (*VAR_3) + VAR_5 - sizeof (lr_t));

 FUNC_2(VAR_1->zd_zilog, VAR_6, VAR_2);
}
