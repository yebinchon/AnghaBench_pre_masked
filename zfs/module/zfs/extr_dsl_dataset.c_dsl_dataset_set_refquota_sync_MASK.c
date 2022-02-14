
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_7__ {scalar_t__ ds_quota; int ds_dbuf; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_8__ {int ddsqra_value; int ddsqra_source; int ddsqra_name; } ;
typedef TYPE_2__ dsl_dataset_set_qr_arg_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int,int,int *,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_dataset_set_qr_arg_t *VAR_4 = VAR_2;
 dsl_pool_t *VAR_5 = FUNC_2(VAR_3);
 dsl_dataset_t *VAR_6 = ((void*)0);
 uint64_t VAR_7;

 FUNC_0(FUNC_3(VAR_5, VAR_4->ddsqra_name, VAR_0, &VAR_6));

 FUNC_6(VAR_6,
     FUNC_7(VAR_1),
     VAR_4->ddsqra_source, sizeof (VAR_4->ddsqra_value), 1,
     &VAR_4->ddsqra_value, VAR_3);

 FUNC_0(FUNC_5(VAR_6,
     FUNC_7(VAR_1), &VAR_7));

 if (VAR_6->ds_quota != VAR_7) {
  FUNC_1(VAR_6->ds_dbuf, VAR_3);
  VAR_6->ds_quota = VAR_7;
 }
 FUNC_4(VAR_6, VAR_0);
}
