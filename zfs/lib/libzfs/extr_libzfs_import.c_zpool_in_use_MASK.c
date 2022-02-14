
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int uint64_t ;
typedef scalar_t__ pool_state_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int cb_guid; int * cb_zhp; int cb_type; int member_0; } ;
typedef TYPE_1__ aux_cbdata_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



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
 int VAR_12 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int **) ;
 scalar_t__ FUNC_4 (int *,int ,char**) ;
 scalar_t__ FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *,char*,int,scalar_t__*) ;
 int FUNC_7 (int) ;
 char* FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int *) ;
 int FUNC_13 (int *,int ,TYPE_1__*) ;
 int * FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 (int,int **,int *) ;

int
FUNC_16(libzfs_handle_t *VAR_13, int VAR_14, pool_state_t *VAR_15, char **VAR_16,
    boolean_t *VAR_17)
{
 nvlist_t *VAR_18;
 char *VAR_19;
 boolean_t VAR_20;
 uint64_t VAR_21, VAR_22;
 zpool_handle_t *VAR_23;
 nvlist_t *VAR_24;
 uint64_t VAR_25, VAR_26;
 aux_cbdata_t VAR_27 = { 0 };
 boolean_t VAR_28;

 *VAR_17 = VAR_0;

 if (FUNC_15(VAR_14, &VAR_18, ((void*)0)) != 0) {
  (void) FUNC_1(VAR_13);
  return (-1);
 }

 if (VAR_18 == ((void*)0))
  return (0);

 FUNC_7(FUNC_5(VAR_18, VAR_8,
     &VAR_25) == 0);
 FUNC_7(FUNC_5(VAR_18, VAR_3,
     &VAR_22) == 0);

 if (VAR_25 != 128 && VAR_25 != 129) {
  FUNC_7(FUNC_4(VAR_18, VAR_7,
      &VAR_19) == 0);
  FUNC_7(FUNC_5(VAR_18, VAR_6,
      &VAR_21) == 0);
 }

 switch (VAR_25) {
 case 130:






  if (FUNC_6(VAR_13, VAR_19, VAR_21, &VAR_28) == 0 && VAR_28 &&
      (VAR_23 = FUNC_14(VAR_13, VAR_19)) != ((void*)0)) {
   if (FUNC_12(VAR_23, VAR_11, ((void*)0)))
    VAR_25 = 131;





   FUNC_9(VAR_23);
  }

  VAR_20 = VAR_1;
  break;

 case 131:







  if (FUNC_6(VAR_13, VAR_19, VAR_21, &VAR_28) != 0) {
   FUNC_2(VAR_18);
   return (-1);
  }

  if (VAR_28) {






   if ((VAR_23 = FUNC_14(VAR_13, VAR_19)) != ((void*)0) &&
       (VAR_24 = FUNC_10(VAR_23, ((void*)0)))
       != ((void*)0)) {
    nvlist_t *VAR_29;

    FUNC_7(FUNC_3(VAR_24,
        VAR_10, &VAR_29) == 0);
    VAR_20 = FUNC_0(VAR_29, VAR_22);
   } else {
    VAR_20 = VAR_0;
   }
   if (VAR_20 && FUNC_5(VAR_18,
       VAR_4, &VAR_26) == 0 && VAR_26)
    VAR_25 = 128;

   if (VAR_23 != ((void*)0))
    FUNC_9(VAR_23);
  } else {
   VAR_25 = VAR_2;
   VAR_20 = VAR_1;
  }
  break;

 case 128:
  VAR_27.cb_zhp = ((void*)0);
  VAR_27.cb_guid = VAR_22;
  VAR_27.cb_type = VAR_9;
  if (FUNC_13(VAR_13, VAR_12, &VAR_27) == 1) {
   VAR_19 = (char *)FUNC_11(VAR_27.cb_zhp);
   VAR_20 = VAR_1;
  } else {
   VAR_20 = VAR_0;
  }
  break;

 case 129:




  VAR_27.cb_zhp = ((void*)0);
  VAR_27.cb_guid = VAR_22;
  VAR_27.cb_type = VAR_5;
  if (FUNC_13(VAR_13, VAR_12, &VAR_27) == 1) {
   VAR_19 = (char *)FUNC_11(VAR_27.cb_zhp);
   VAR_20 = VAR_1;
  } else {
   VAR_20 = VAR_0;
  }
  break;

 default:
  VAR_20 = VAR_0;
 }


 if (VAR_20) {
  if ((*VAR_16 = FUNC_8(VAR_13, VAR_19)) == ((void*)0)) {
   if (VAR_27.cb_zhp)
    FUNC_9(VAR_27.cb_zhp);
   FUNC_2(VAR_18);
   return (-1);
  }
  *VAR_15 = (pool_state_t)VAR_25;
 }

 if (VAR_27.cb_zhp)
  FUNC_9(VAR_27.cb_zhp);

 FUNC_2(VAR_18);
 *VAR_17 = VAR_20;
 return (0);
}
