
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int zio_alloc_list_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_15__ {int spa_alloc_count; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_16__ {scalar_t__ os_encrypted; TYPE_1__* os_dsl_dataset; } ;
typedef TYPE_3__ objset_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
struct TYPE_14__ {int ds_object; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_2__*,int ,scalar_t__,int *,int,scalar_t__,int *,int ,int *,int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_2__*,int ,int *) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (char*,int ,scalar_t__,int) ;
 int FUNC_23 (int *,int *,int *) ;
 int FUNC_24 (int *) ;

int
FUNC_25(spa_t *VAR_12, objset_t *VAR_13, uint64_t VAR_14, blkptr_t *VAR_15,
    uint64_t VAR_16, boolean_t *VAR_17)
{
 int VAR_18 = 1;
 zio_alloc_list_t VAR_19;

 FUNC_0(VAR_14 > FUNC_20(VAR_12));

 FUNC_15(&VAR_19);





 FUNC_9(VAR_15, VAR_1);
 FUNC_8(VAR_15, VAR_16);
 FUNC_6(VAR_15, 0);







 VAR_18 = FUNC_13(VAR_12, FUNC_17(VAR_12), VAR_16, VAR_15, 1,
     VAR_14, ((void*)0), VAR_3, &VAR_19, ((void*)0),
     FUNC_11(0, 0, 0, VAR_13->os_dsl_dataset->ds_object) %
     VAR_12->spa_alloc_count);
 if (VAR_18 == 0) {
  *VAR_17 = VAR_5;
 } else {
  VAR_18 = FUNC_13(VAR_12, FUNC_19(VAR_12), VAR_16,
      VAR_15, 1, VAR_14, ((void*)0), VAR_3,
      &VAR_19, ((void*)0), FUNC_11(0, 0, 0,
      VAR_13->os_dsl_dataset->ds_object) % VAR_12->spa_alloc_count);
  if (VAR_18 == 0)
   *VAR_17 = VAR_2;
 }
 FUNC_14(&VAR_19);

 if (VAR_18 == 0) {
  FUNC_7(VAR_15, VAR_16);
  FUNC_8(VAR_15, VAR_16);
  FUNC_3(VAR_15, VAR_9);
  FUNC_2(VAR_15,
      FUNC_21(VAR_12) >= VAR_4
      ? VAR_8 : VAR_7);
  FUNC_9(VAR_15, VAR_1);
  FUNC_6(VAR_15, 0);
  FUNC_5(VAR_15, 0);
  FUNC_1(VAR_15, VAR_6);






  if (VAR_13->os_encrypted) {
   uint8_t VAR_20[VAR_10];
   uint8_t VAR_21[VAR_11];

   FUNC_4(VAR_15, VAR_0);
   FUNC_10(FUNC_16(VAR_12,
       FUNC_12(VAR_13), VAR_21));
   FUNC_10(FUNC_24(VAR_20));

   FUNC_23(VAR_15, VAR_21, VAR_20);
  }
 } else {
  FUNC_22("%s: zil block allocation failure: "
      "size %llu, error %d", FUNC_18(VAR_12), VAR_16, VAR_18);
 }

 return (VAR_18);
}
