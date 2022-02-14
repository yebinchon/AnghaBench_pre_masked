
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zc_name; scalar_t__ zc_nvlist_conf_size; scalar_t__ zc_nvlist_src_size; int zc_iflags; int zc_nvlist_src; int zc_nvlist_conf; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int dsl_crypto_params_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int *,int *,int **) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,scalar_t__,int ,int **) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *,int **,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int **) ;
 scalar_t__ FUNC_10 (int *,int ,char**) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (char*,int *,int *,int *,int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int *,int *,int *) ;
 int FUNC_16 (char*,int ,int *,int *) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int
FUNC_18(zfs_cmd_t *VAR_12)
{
 int VAR_13;
 nvlist_t *VAR_14, *VAR_15 = ((void*)0);
 nvlist_t *VAR_16 = ((void*)0);
 nvlist_t *VAR_17 = ((void*)0);
 dsl_crypto_params_t *VAR_18 = ((void*)0);
 char *VAR_19 = VAR_12->zc_name;
 boolean_t VAR_20 = VAR_1;

 if ((VAR_13 = FUNC_5(VAR_12->zc_nvlist_conf, VAR_12->zc_nvlist_conf_size,
     VAR_12->zc_iflags, &VAR_14)))
  return (VAR_13);

 if (VAR_12->zc_nvlist_src_size != 0 && (VAR_13 =
     FUNC_5(VAR_12->zc_nvlist_src, VAR_12->zc_nvlist_src_size,
     VAR_12->zc_iflags, &VAR_15))) {
  FUNC_8(VAR_14);
  return (VAR_13);
 }

 if (VAR_15) {
  nvlist_t *VAR_21 = ((void*)0);
  nvlist_t *VAR_22 = ((void*)0);
  uint64_t VAR_23 = VAR_6;
  char *VAR_24;

  (void) FUNC_11(VAR_15,
      FUNC_17(VAR_9), &VAR_23);
  if (!FUNC_1(VAR_23)) {
   VAR_13 = FUNC_0(VAR_3);
   goto pool_props_bad;
  }
  (void) FUNC_9(VAR_15, VAR_10, &VAR_21);
  if (VAR_21) {
   VAR_13 = FUNC_7(VAR_21, &VAR_16, VAR_4);
   if (VAR_13 != 0)
    goto pool_props_bad;
   (void) FUNC_12(VAR_15, VAR_10);
  }

  (void) FUNC_9(VAR_15, VAR_7,
      &VAR_22);
  VAR_13 = FUNC_3(VAR_2,
      VAR_16, VAR_22, &VAR_18);
  if (VAR_13 != 0)
   goto pool_props_bad;
  (void) FUNC_12(VAR_15, VAR_7);

  FUNC_2(FUNC_6(&VAR_17, VAR_5, VAR_4) == 0);
  VAR_13 = FUNC_15(VAR_23, VAR_16,
      VAR_17, ((void*)0));
  if (VAR_13 != 0)
   goto pool_props_bad;

  if (FUNC_10(VAR_15,
      FUNC_17(VAR_8), &VAR_24) == 0)
   VAR_19 = VAR_24;
 }

 VAR_13 = FUNC_13(VAR_12->zc_name, VAR_14, VAR_15, VAR_17, VAR_18);




 if (!VAR_13 && (VAR_13 = FUNC_16(VAR_19,
     VAR_11, VAR_16, ((void*)0))) != 0) {
  (void) FUNC_14(VAR_19);
  VAR_20 = VAR_0;
 }

pool_props_bad:
 FUNC_8(VAR_16);
 FUNC_8(VAR_17);
 FUNC_8(VAR_14);
 FUNC_8(VAR_15);
 FUNC_4(VAR_18, VAR_20 && !!VAR_13);

 return (VAR_13);
}
