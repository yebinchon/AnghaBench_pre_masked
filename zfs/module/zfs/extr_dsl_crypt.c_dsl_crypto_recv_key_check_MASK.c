
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dsl_dataset_t ;
struct TYPE_6__ {scalar_t__ dcrka_dsobj; scalar_t__ dcrka_fromobj; int dcrka_nvl; int dcrka_ostype; } ;
typedef TYPE_1__ dsl_crypto_recv_key_arg_t ;
struct TYPE_7__ {int tx_pool; } ;
typedef TYPE_2__ dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_2__*) ;
 int FUNC_1 (int *,int *,int ,int ,TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__,int ,int **) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(void *VAR_1, dmu_tx_t *VAR_2)
{
 int VAR_3;
 dsl_crypto_recv_key_arg_t *VAR_4 = VAR_1;
 dsl_dataset_t *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

 VAR_3 = FUNC_2(VAR_2->tx_pool, VAR_4->dcrka_dsobj,
     VAR_0, &VAR_5);
 if (VAR_3 != 0)
  goto out;

 if (VAR_4->dcrka_fromobj != 0) {
  VAR_3 = FUNC_2(VAR_2->tx_pool, VAR_4->dcrka_fromobj,
      VAR_0, &VAR_6);
  if (VAR_3 != 0)
   goto out;
 }

 VAR_3 = FUNC_1(VAR_5, VAR_6,
     VAR_4->dcrka_ostype, VAR_4->dcrka_nvl, VAR_2);
 if (VAR_3 != 0)
  goto out;






 VAR_3 = FUNC_0(VAR_5, VAR_4->dcrka_nvl, VAR_2);
 if (VAR_3 != 0)
  goto out;

out:
 if (VAR_5 != ((void*)0))
  FUNC_3(VAR_5, VAR_0);
 if (VAR_6 != ((void*)0))
  FUNC_3(VAR_6, VAR_0);
 return (VAR_3);
}
