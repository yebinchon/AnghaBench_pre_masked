
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dsl_dataset_t ;
struct TYPE_6__ {int dcrka_nvl; scalar_t__ dcrka_do_key; int dcrka_ostype; int dcrka_dsobj; } ;
typedef TYPE_1__ dsl_crypto_recv_key_arg_t ;
struct TYPE_7__ {int tx_pool; } ;
typedef TYPE_2__ dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int **) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(void *VAR_1, dmu_tx_t *VAR_2)
{
 dsl_crypto_recv_key_arg_t *VAR_3 = VAR_1;
 dsl_dataset_t *VAR_4;

 FUNC_0(FUNC_3(VAR_2->tx_pool, VAR_3->dcrka_dsobj,
     VAR_0, &VAR_4));
 FUNC_2(VAR_4, VAR_3->dcrka_ostype,
     VAR_3->dcrka_nvl, VAR_2);
 if (VAR_3->dcrka_do_key)
  FUNC_1(VAR_4, VAR_3->dcrka_nvl, VAR_2);
 FUNC_4(VAR_4, VAR_0);
}
