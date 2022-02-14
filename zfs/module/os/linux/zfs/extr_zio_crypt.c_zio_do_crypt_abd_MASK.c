
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_crypt_key_t ;
typedef int uint_t ;
typedef int uint8_t ;
typedef int dmu_object_type_t ;
typedef scalar_t__ boolean_t ;
typedef int abd_t ;


 void* FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,void*,int ) ;
 int FUNC_3 (int *,void*,int ) ;
 int FUNC_4 (scalar_t__,int *,int ,scalar_t__,int *,int *,int *,int ,void*,void*,scalar_t__*) ;

int
FUNC_5(boolean_t VAR_0, zio_crypt_key_t *VAR_1, dmu_object_type_t VAR_2,
    boolean_t VAR_3, uint8_t *VAR_4, uint8_t *VAR_5, uint8_t *VAR_6,
    uint_t VAR_7, abd_t *VAR_8, abd_t *VAR_9, boolean_t *VAR_10)
{
 int VAR_11;
 void *VAR_12, *VAR_13;

 if (VAR_0) {
  VAR_12 = FUNC_1(VAR_8, VAR_7);
  VAR_13 = FUNC_0(VAR_9, VAR_7);
 } else {
  VAR_12 = FUNC_0(VAR_8, VAR_7);
  VAR_13 = FUNC_1(VAR_9, VAR_7);
 }

 VAR_11 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_12, VAR_13, VAR_10);
 if (VAR_11 != 0)
  goto error;

 if (VAR_0) {
  FUNC_2(VAR_8, VAR_12, VAR_7);
  FUNC_3(VAR_9, VAR_13, VAR_7);
 } else {
  FUNC_3(VAR_8, VAR_12, VAR_7);
  FUNC_2(VAR_9, VAR_13, VAR_7);
 }

 return (0);

error:
 if (VAR_0) {
  FUNC_2(VAR_8, VAR_12, VAR_7);
  FUNC_3(VAR_9, VAR_13, VAR_7);
 } else {
  FUNC_3(VAR_8, VAR_12, VAR_7);
  FUNC_2(VAR_9, VAR_13, VAR_7);
 }

 return (VAR_11);
}
