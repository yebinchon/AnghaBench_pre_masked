
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_9__ {int dd_pool; scalar_t__ dd_parent; int dd_lock; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_10__ {int ddsqra_value; int ddsqra_source; int ddsqra_name; } ;
typedef TYPE_2__ dsl_dir_set_qr_arg_t ;
struct TYPE_11__ {TYPE_1__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_12__ {scalar_t__ dd_used_bytes; scalar_t__ dd_reserved; scalar_t__ dd_quota; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,TYPE_3__**) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (scalar_t__,int *,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ,int ,int ,scalar_t__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

int
FUNC_13(void *VAR_5, dmu_tx_t *VAR_6)
{
 dsl_dir_set_qr_arg_t *VAR_7 = VAR_5;
 dsl_pool_t *VAR_8 = FUNC_3(VAR_6);
 dsl_dataset_t *VAR_9;
 dsl_dir_t *VAR_10;
 uint64_t VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_8, VAR_7->ddsqra_name, VAR_2, &VAR_9);
 if (VAR_14 != 0)
  return (VAR_14);
 VAR_10 = VAR_9->ds_dir;





 if (!FUNC_2(VAR_6)) {
  FUNC_5(VAR_9, VAR_2);
  return (0);
 }

 VAR_14 = FUNC_9(VAR_9->ds_dir,
     FUNC_12(VAR_3),
     VAR_7->ddsqra_source, VAR_7->ddsqra_value, &VAR_11);
 if (VAR_14 != 0) {
  FUNC_5(VAR_9, VAR_2);
  return (VAR_14);
 }

 FUNC_10(&VAR_10->dd_lock);
 VAR_12 = FUNC_6(VAR_10)->dd_used_bytes;
 FUNC_11(&VAR_10->dd_lock);

 if (VAR_10->dd_parent) {
  VAR_13 = FUNC_7(VAR_10->dd_parent,
      ((void*)0), 0, VAR_1);
 } else {
  VAR_13 = FUNC_8(VAR_10->dd_pool,
      VAR_4) - VAR_12;
 }

 if (FUNC_0(VAR_12, VAR_11) > FUNC_0(VAR_12, FUNC_6(VAR_10)->dd_reserved)) {
  uint64_t VAR_15 = FUNC_0(VAR_12, VAR_11) -
      FUNC_0(VAR_12, FUNC_6(VAR_10)->dd_reserved);

  if (VAR_15 > VAR_13 ||
      (FUNC_6(VAR_10)->dd_quota > 0 &&
      VAR_11 > FUNC_6(VAR_10)->dd_quota))
   VAR_14 = FUNC_1(VAR_0);
 }

 FUNC_5(VAR_9, VAR_2);
 return (VAR_14);
}
