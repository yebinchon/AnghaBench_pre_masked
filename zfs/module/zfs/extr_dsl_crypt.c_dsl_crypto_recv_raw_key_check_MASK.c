
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_11__ {TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_12__ {TYPE_1__* tx_pool; } ;
typedef TYPE_4__ dmu_tx_t ;
typedef int boolean_t ;
struct TYPE_13__ {int ds_flags; } ;
struct TYPE_10__ {int dd_crypto_obj; } ;
struct TYPE_9__ {int * dp_meta_objset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
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
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 TYPE_5__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int ,scalar_t__*) ;
 int FUNC_4 (int *,int ,int **,scalar_t__*) ;
 int FUNC_5 (int *,int ,int ,int,int,scalar_t__*) ;
 int FUNC_6 (int ) ;

int
FUNC_7(dsl_dataset_t *VAR_25, nvlist_t *VAR_26, dmu_tx_t *VAR_27)
{
 int VAR_28;
 objset_t *VAR_29 = VAR_27->tx_pool->dp_meta_objset;
 uint8_t *VAR_30 = ((void*)0);
 uint_t VAR_31;
 uint64_t VAR_32, VAR_33, VAR_34;
 boolean_t VAR_35 = VAR_0;

 FUNC_0(FUNC_2(VAR_25)->ds_flags & VAR_8);






 VAR_28 = FUNC_3(VAR_26, VAR_1, &VAR_32);
 if (VAR_28 != 0 || VAR_32 >= VAR_22 ||
     VAR_32 <= VAR_24)
  return (FUNC_1(VAR_10));

 VAR_28 = FUNC_3(VAR_26, VAR_2, &VAR_32);
 if (VAR_28 != 0)
  return (FUNC_1(VAR_10));





 if (VAR_25->ds_dir->dd_crypto_obj != 0) {
  VAR_28 = FUNC_5(VAR_29, VAR_25->ds_dir->dd_crypto_obj,
      VAR_2, 8, 1, &VAR_33);
  if (VAR_28 != 0)
   return (VAR_28);
  if (VAR_32 != VAR_33)
   return (FUNC_1(VAR_9));
 }

 VAR_28 = FUNC_4(VAR_26, VAR_6,
     &VAR_30, &VAR_31);
 if (VAR_28 != 0 || VAR_31 != VAR_12)
  return (FUNC_1(VAR_10));

 VAR_28 = FUNC_4(VAR_26, VAR_3,
     &VAR_30, &VAR_31);
 if (VAR_28 != 0 || VAR_31 != VAR_13)
  return (FUNC_1(VAR_10));

 VAR_28 = FUNC_4(VAR_26, VAR_4, &VAR_30, &VAR_31);
 if (VAR_28 != 0 || VAR_31 != VAR_14)
  return (FUNC_1(VAR_10));

 VAR_28 = FUNC_4(VAR_26, VAR_5, &VAR_30, &VAR_31);
 if (VAR_28 != 0 || VAR_31 != VAR_15)
  return (FUNC_1(VAR_10));







 VAR_28 = FUNC_3(VAR_26, VAR_7, &VAR_34);
 if (VAR_28 != 0 || VAR_34 != VAR_23)
  return (FUNC_1(VAR_11));

 VAR_28 = FUNC_3(VAR_26, FUNC_6(VAR_19),
     &VAR_32);
 if (VAR_28 != 0 || VAR_32 >= VAR_16 ||
     VAR_32 == VAR_17)
  return (FUNC_1(VAR_10));

 VAR_35 = (VAR_32 == VAR_18);





 VAR_28 = FUNC_3(VAR_26, FUNC_6(VAR_20),
     &VAR_32);
 if (VAR_28 != 0 || (VAR_35 == (VAR_32 == 0)))
  return (FUNC_1(VAR_10));

 VAR_28 = FUNC_3(VAR_26, FUNC_6(VAR_21),
     &VAR_32);
 if (VAR_28 != 0 || (VAR_35 == (VAR_32 == 0)))
  return (FUNC_1(VAR_10));

 return (0);
}
