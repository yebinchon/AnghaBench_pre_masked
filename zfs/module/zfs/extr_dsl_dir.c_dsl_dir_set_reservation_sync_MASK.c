
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int longlong_t ;
struct TYPE_11__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_12__ {scalar_t__ ddsqra_value; int ddsqra_source; int ddsqra_name; } ;
typedef TYPE_2__ dsl_dir_set_qr_arg_t ;
struct TYPE_13__ {int ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,TYPE_3__**) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,scalar_t__,int *) ;
 int FUNC_5 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int,int,scalar_t__*,int *) ;
 int FUNC_7 (TYPE_3__*,char*,int *,char*,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_3, dmu_tx_t *VAR_4)
{
 dsl_dir_set_qr_arg_t *VAR_5 = VAR_3;
 dsl_pool_t *VAR_6 = FUNC_1(VAR_4);
 dsl_dataset_t *VAR_7;
 uint64_t VAR_8;

 FUNC_0(FUNC_2(VAR_6, VAR_5->ddsqra_name, VAR_0, &VAR_7));

 if (FUNC_8(VAR_6->dp_spa) >= VAR_1) {
  FUNC_6(VAR_7,
      FUNC_9(VAR_2),
      VAR_5->ddsqra_source, sizeof (VAR_5->ddsqra_value), 1,
      &VAR_5->ddsqra_value, VAR_4);

  FUNC_0(FUNC_5(VAR_7,
      FUNC_9(VAR_2), &VAR_8));
 } else {
  VAR_8 = VAR_5->ddsqra_value;
  FUNC_7(VAR_7, "set", VAR_4, "%s=%lld",
      FUNC_9(VAR_2),
      (longlong_t)VAR_8);
 }

 FUNC_4(VAR_7->ds_dir, VAR_8, VAR_4);
 FUNC_3(VAR_7, VAR_0);
}
