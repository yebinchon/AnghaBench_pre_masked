
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_9__ {int dd_crypto_obj; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_10__ {TYPE_1__* tx_pool; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_8__ {int * dp_meta_objset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int ,int ,int,TYPE_3__*) ;

uint64_t
FUNC_4(dsl_dir_t *VAR_1, dmu_tx_t *VAR_2)
{
 objset_t *VAR_3 = VAR_2->tx_pool->dp_meta_objset;

 FUNC_0(FUNC_2(VAR_2));

 FUNC_1(FUNC_3(VAR_3, VAR_1->dd_crypto_obj,
     VAR_0, 1, VAR_2));

 return (VAR_1->dd_crypto_obj);
}
