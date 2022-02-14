
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zb_objset; } ;
typedef TYPE_1__ zbookmark_phys_t ;
typedef int uint_t ;
typedef int uint8_t ;
typedef int spa_t ;
struct TYPE_8__ {int dck_key; } ;
typedef TYPE_2__ dsl_crypto_key_t ;
typedef int dmu_object_type_t ;
typedef scalar_t__ boolean_t ;
typedef int abd_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,TYPE_2__*,int ) ;
 int FUNC_9 (int *,int ,int ,TYPE_2__**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int ,int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (scalar_t__,int *,int ,scalar_t__,int *,int *,int *,int ,int *,int *,scalar_t__*) ;
 int FUNC_14 (int *,TYPE_1__ const*,int ,int ) ;
 scalar_t__ VAR_9 ;

int
FUNC_15(boolean_t VAR_10, spa_t *VAR_11, const zbookmark_phys_t *VAR_12,
    dmu_object_type_t VAR_13, boolean_t VAR_14, boolean_t VAR_15, uint8_t *VAR_16,
    uint8_t *VAR_17, uint8_t *VAR_18, uint_t VAR_19, abd_t *VAR_20, abd_t *VAR_21,
    boolean_t *VAR_22)
{
 int VAR_23;
 dsl_crypto_key_t *VAR_24 = ((void*)0);
 uint8_t *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);

 FUNC_0(FUNC_7(VAR_11, VAR_5));


 VAR_23 = FUNC_9(VAR_11, VAR_12->zb_objset, VAR_4, &VAR_24);
 if (VAR_23 != 0) {
  VAR_23 = FUNC_1(VAR_2);
  return (VAR_23);
 }

 if (VAR_10) {
  VAR_25 = FUNC_3(VAR_20, VAR_19);
  VAR_26 = FUNC_2(VAR_21, VAR_19);
 } else {
  VAR_25 = FUNC_2(VAR_20, VAR_19);
  VAR_26 = FUNC_3(VAR_21, VAR_19);
 }
 if (VAR_10 && VAR_13 != VAR_1 && !VAR_14) {
  VAR_23 = FUNC_12(&VAR_24->dck_key, VAR_16);
  if (VAR_23 != 0)
   goto error;

  VAR_23 = FUNC_10(VAR_17);
  if (VAR_23 != 0)
   goto error;
 } else if (VAR_10 && VAR_14) {
  VAR_23 = FUNC_11(&VAR_24->dck_key,
      VAR_25, VAR_19, VAR_17, VAR_16);
  if (VAR_23 != 0)
   goto error;
 }


 VAR_23 = FUNC_13(VAR_10, &VAR_24->dck_key, VAR_13, VAR_15, VAR_16, VAR_17,
     VAR_18, VAR_19, VAR_25, VAR_26, VAR_22);







 if (VAR_9 && !VAR_10 && VAR_13 != VAR_0 && VAR_23 == 0)
  VAR_23 = FUNC_14(VAR_11, VAR_12, VAR_13, VAR_3);
 if (VAR_23 != 0)
  goto error;

 if (VAR_10) {
  FUNC_4(VAR_20, VAR_25, VAR_19);
  FUNC_5(VAR_21, VAR_26, VAR_19);
 } else {
  FUNC_5(VAR_20, VAR_25, VAR_19);
  FUNC_4(VAR_21, VAR_26, VAR_19);
 }

 FUNC_8(VAR_11, VAR_24, VAR_4);

 return (0);

error:
 if (VAR_10) {

  FUNC_6(VAR_16, VAR_8);
  FUNC_6(VAR_17, VAR_6);
  FUNC_6(VAR_18, VAR_7);
  FUNC_4(VAR_20, VAR_25, VAR_19);
  FUNC_5(VAR_21, VAR_26, VAR_19);
 } else {
  FUNC_5(VAR_20, VAR_25, VAR_19);
  FUNC_4(VAR_21, VAR_26, VAR_19);
 }

 FUNC_8(VAR_11, VAR_24, VAR_4);

 return (VAR_23);
}
