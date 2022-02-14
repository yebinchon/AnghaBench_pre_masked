
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_18__ {int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_19__ {scalar_t__ dd_crypto_obj; int dd_object; int dd_dbuf; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_20__ {void** ds_feature; int ds_object; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_21__ {TYPE_1__* tx_pool; } ;
typedef TYPE_4__ dmu_tx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int *,scalar_t__,int,int,int,int *,int *,int *,int *,int,int,int,TYPE_4__*) ;
 int FUNC_3 (int ,size_t,void*,TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,int*) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int,scalar_t__,char*,TYPE_4__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int **,int *) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (int *,int,int ,int,int,scalar_t__*,TYPE_4__*) ;
 scalar_t__ FUNC_11 (int *,int ,int ,int ,TYPE_4__*) ;
 int FUNC_12 (int *,scalar_t__,int ,int,int,int*,TYPE_4__*) ;
 int FUNC_13 (int ) ;

void
FUNC_14(dsl_dataset_t *VAR_19, nvlist_t *VAR_20, dmu_tx_t *VAR_21)
{
 dsl_pool_t *VAR_22 = VAR_21->tx_pool;
 objset_t *VAR_23 = VAR_22->dp_meta_objset;
 dsl_dir_t *VAR_24 = VAR_19->ds_dir;
 uint_t VAR_25;
 uint64_t VAR_26, VAR_27 = 1;
 uint8_t *VAR_28, *VAR_29, *VAR_30, *VAR_31;
 uint64_t VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 uint64_t VAR_37 = VAR_17;
 char *VAR_38 = "prompt";


 VAR_32 = FUNC_7(VAR_20, VAR_4);
 VAR_33 = FUNC_7(VAR_20, VAR_5);
 VAR_34 = FUNC_7(VAR_20,
     FUNC_13(VAR_13));
 VAR_35 = FUNC_7(VAR_20,
     FUNC_13(VAR_15));
 VAR_36 = FUNC_7(VAR_20,
     FUNC_13(VAR_16));
 FUNC_0(FUNC_8(VAR_20, VAR_9,
     &VAR_28, &VAR_25));
 FUNC_0(FUNC_8(VAR_20, VAR_6,
     &VAR_29, &VAR_25));
 FUNC_0(FUNC_8(VAR_20, VAR_7, &VAR_30, &VAR_25));
 FUNC_0(FUNC_8(VAR_20, VAR_8, &VAR_31, &VAR_25));


 if (VAR_24->dd_crypto_obj == 0) {

  FUNC_1(VAR_24->dd_dbuf, VAR_21);
  FUNC_5(VAR_24, VAR_21);


  VAR_24->dd_crypto_obj = FUNC_11(VAR_23,
      VAR_2, VAR_3, 0, VAR_21);
  FUNC_0(FUNC_12(VAR_21->tx_pool->dp_meta_objset,
      VAR_24->dd_crypto_obj, VAR_10,
      sizeof (uint64_t), 1, &VAR_27, VAR_21));
  FUNC_0(FUNC_12(VAR_21->tx_pool->dp_meta_objset,
      VAR_24->dd_crypto_obj, VAR_11,
      sizeof (uint64_t), 1, &VAR_37, VAR_21));

  FUNC_3(VAR_19->ds_object,
      VAR_12, (void *)VAR_0, VAR_21);
  VAR_19->ds_feature[VAR_12] = (void *)VAR_0;


  FUNC_0(FUNC_10(VAR_23, VAR_24->dd_object, VAR_1,
      sizeof (uint64_t), 1, &VAR_24->dd_crypto_obj, VAR_21));






  FUNC_6(VAR_19,
      FUNC_13(VAR_14),
      VAR_18, 1, FUNC_9(VAR_38) + 1,
      VAR_38, VAR_21);

  VAR_26 = VAR_24->dd_object;
 } else {
  FUNC_0(FUNC_4(VAR_24, &VAR_26));
 }


 FUNC_2(VAR_23, VAR_24->dd_crypto_obj, VAR_32,
     VAR_26, VAR_33, VAR_30, VAR_31, VAR_28, VAR_29, VAR_34, VAR_36,
     VAR_35, VAR_21);
}
