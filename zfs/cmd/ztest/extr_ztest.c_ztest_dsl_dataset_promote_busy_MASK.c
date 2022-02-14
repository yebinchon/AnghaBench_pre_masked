
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zd_name; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int ,char*,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,char*,char*,int ) ;
 scalar_t__ FUNC_8 (char*,char) ;
 char* FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int ,int ,int ,int ,int **) ;
 int FUNC_12 (char*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_13 (int ) ;

void
FUNC_14(ztest_ds_t *VAR_9, uint64_t VAR_10)
{
 objset_t *VAR_11;
 char *VAR_12;
 char *VAR_13;
 char *VAR_14;
 char *VAR_15;
 char *VAR_16;
 char *VAR_17 = VAR_9->zd_name;
 int VAR_18;

 VAR_12 = FUNC_9(VAR_7, VAR_6);
 VAR_13 = FUNC_9(VAR_7, VAR_6);
 VAR_14 = FUNC_9(VAR_7, VAR_6);
 VAR_15 = FUNC_9(VAR_7, VAR_6);
 VAR_16 = FUNC_9(VAR_7, VAR_6);

 (void) FUNC_5(&VAR_8);

 FUNC_12(VAR_17, VAR_10);

 (void) FUNC_7(VAR_12, VAR_7,
     "%s@s1_%llu", VAR_17, (u_longlong_t)VAR_10);
 (void) FUNC_7(VAR_13, VAR_7,
     "%s/c1_%llu", VAR_17, (u_longlong_t)VAR_10);
 (void) FUNC_7(VAR_14, VAR_7,
     "%s@s2_%llu", VAR_13, (u_longlong_t)VAR_10);
 (void) FUNC_7(VAR_15, VAR_7,
     "%s/c2_%llu", VAR_17, (u_longlong_t)VAR_10);
 (void) FUNC_7(VAR_16, VAR_7,
     "%s@s3_%llu", VAR_13, (u_longlong_t)VAR_10);

 VAR_18 = FUNC_2(VAR_17, FUNC_8(VAR_12, '@') + 1);
 if (VAR_18 && VAR_18 != VAR_3) {
  if (VAR_18 == VAR_4) {
   FUNC_13(VAR_5);
   goto out;
  }
  FUNC_4(0, "dmu_take_snapshot(%s) = %d", VAR_12, VAR_18);
 }

 VAR_18 = FUNC_0(VAR_13, VAR_12);
 if (VAR_18) {
  if (VAR_18 == VAR_4) {
   FUNC_13(VAR_5);
   goto out;
  }
  FUNC_4(0, "dmu_objset_create(%s) = %d", VAR_13, VAR_18);
 }

 VAR_18 = FUNC_2(VAR_13, FUNC_8(VAR_14, '@') + 1);
 if (VAR_18 && VAR_18 != VAR_3) {
  if (VAR_18 == VAR_4) {
   FUNC_13(VAR_5);
   goto out;
  }
  FUNC_4(0, "dmu_open_snapshot(%s) = %d", VAR_14, VAR_18);
 }

 VAR_18 = FUNC_2(VAR_13, FUNC_8(VAR_16, '@') + 1);
 if (VAR_18 && VAR_18 != VAR_3) {
  if (VAR_18 == VAR_4) {
   FUNC_13(VAR_5);
   goto out;
  }
  FUNC_4(0, "dmu_open_snapshot(%s) = %d", VAR_16, VAR_18);
 }

 VAR_18 = FUNC_0(VAR_15, VAR_16);
 if (VAR_18) {
  if (VAR_18 == VAR_4) {
   FUNC_13(VAR_5);
   goto out;
  }
  FUNC_4(0, "dmu_objset_create(%s) = %d", VAR_15, VAR_18);
 }

 VAR_18 = FUNC_11(VAR_14, VAR_1, VAR_0, VAR_0,
     VAR_5, &VAR_11);
 if (VAR_18)
  FUNC_4(0, "dmu_objset_own(%s) = %d", VAR_14, VAR_18);
 VAR_18 = FUNC_3(VAR_15, ((void*)0));
 if (VAR_18 == VAR_4) {
  FUNC_1(VAR_11, VAR_0, VAR_5);
  FUNC_13(VAR_5);
  goto out;
 }
 if (VAR_18 != VAR_2)
  FUNC_4(0, "dsl_dataset_promote(%s), %d, not EBUSY", VAR_15,
      VAR_18);
 FUNC_1(VAR_11, VAR_0, VAR_5);

out:
 FUNC_12(VAR_17, VAR_10);

 (void) FUNC_6(&VAR_8);

 FUNC_10(VAR_12, VAR_7);
 FUNC_10(VAR_13, VAR_7);
 FUNC_10(VAR_14, VAR_7);
 FUNC_10(VAR_15, VAR_7);
 FUNC_10(VAR_16, VAR_7);
}
