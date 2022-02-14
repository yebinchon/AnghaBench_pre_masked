
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_12__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_13__ {scalar_t__ ds_reserved; scalar_t__ ds_quota; int ds_dir; int ds_lock; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_14__ {int ddsqra_value; int ddsqra_source; int ddsqra_name; } ;
typedef TYPE_3__ dsl_dataset_set_qr_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {scalar_t__ ds_unique_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int ,TYPE_2__**) ;
 TYPE_6__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(void *VAR_7, dmu_tx_t *VAR_8)
{
 dsl_dataset_set_qr_arg_t *VAR_9 = VAR_7;
 dsl_pool_t *VAR_10 = FUNC_4(VAR_8);
 dsl_dataset_t *VAR_11;
 int VAR_12;
 uint64_t VAR_13, VAR_14;

 if (FUNC_13(VAR_10->dp_spa) < VAR_5)
  return (FUNC_2(VAR_3));

 VAR_12 = FUNC_5(VAR_10, VAR_9->ddsqra_name, VAR_4, &VAR_11);
 if (VAR_12 != 0)
  return (VAR_12);

 if (VAR_11->ds_is_snapshot) {
  FUNC_8(VAR_11, VAR_4);
  return (FUNC_2(VAR_1));
 }

 VAR_12 = FUNC_10(VAR_11->ds_dir,
     FUNC_14(VAR_6),
     VAR_9->ddsqra_source, VAR_9->ddsqra_value, &VAR_13);
 if (VAR_12 != 0) {
  FUNC_8(VAR_11, VAR_4);
  return (VAR_12);
 }





 if (!FUNC_3(VAR_8)) {
  FUNC_8(VAR_11, VAR_4);
  return (0);
 }

 FUNC_11(&VAR_11->ds_lock);
 if (!FUNC_0(VAR_11))
  FUNC_7(VAR_11);
 VAR_14 = FUNC_6(VAR_11)->ds_unique_bytes;
 FUNC_12(&VAR_11->ds_lock);

 if (FUNC_1(VAR_14, VAR_13) > FUNC_1(VAR_14, VAR_11->ds_reserved)) {
  uint64_t VAR_15 = FUNC_1(VAR_14, VAR_13) -
      FUNC_1(VAR_14, VAR_11->ds_reserved);

  if (VAR_15 >
      FUNC_9(VAR_11->ds_dir, ((void*)0), 0, VAR_0) ||
      (VAR_11->ds_quota > 0 && VAR_13 > VAR_11->ds_quota)) {
   FUNC_8(VAR_11, VAR_4);
   return (FUNC_2(VAR_2));
  }
 }

 FUNC_8(VAR_11, VAR_4);
 return (0);
}
