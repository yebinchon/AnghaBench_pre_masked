
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_11__ {scalar_t__ ds_reserved; int ds_dir; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_12__ {int ddsqra_value; int ddsqra_source; int ddsqra_name; } ;
typedef TYPE_3__ dsl_dataset_set_qr_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_13__ {scalar_t__ ds_referenced_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,TYPE_2__**) ;
 TYPE_5__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,int ,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(void *VAR_6, dmu_tx_t *VAR_7)
{
 dsl_dataset_set_qr_arg_t *VAR_8 = VAR_6;
 dsl_pool_t *VAR_9 = FUNC_1(VAR_7);
 dsl_dataset_t *VAR_10;
 int VAR_11;
 uint64_t VAR_12;

 if (FUNC_6(VAR_9->dp_spa) < VAR_4)
  return (FUNC_0(VAR_2));

 VAR_11 = FUNC_2(VAR_9, VAR_8->ddsqra_name, VAR_3, &VAR_10);
 if (VAR_11 != 0)
  return (VAR_11);

 if (VAR_10->ds_is_snapshot) {
  FUNC_4(VAR_10, VAR_3);
  return (FUNC_0(VAR_0));
 }

 VAR_11 = FUNC_5(VAR_10->ds_dir,
     FUNC_7(VAR_5),
     VAR_8->ddsqra_source, VAR_8->ddsqra_value, &VAR_12);
 if (VAR_11 != 0) {
  FUNC_4(VAR_10, VAR_3);
  return (VAR_11);
 }

 if (VAR_12 == 0) {
  FUNC_4(VAR_10, VAR_3);
  return (0);
 }

 if (VAR_12 < FUNC_3(VAR_10)->ds_referenced_bytes ||
     VAR_12 < VAR_10->ds_reserved) {
  FUNC_4(VAR_10, VAR_3);
  return (FUNC_0(VAR_1));
 }

 FUNC_4(VAR_10, VAR_3);
 return (0);
}
