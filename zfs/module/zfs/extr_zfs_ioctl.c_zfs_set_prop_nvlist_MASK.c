
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zprop_source_t ;
typedef scalar_t__ zfs_prop_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;



 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*,char const*,scalar_t__) ;
 int FUNC_4 (char const*,char const*,scalar_t__,int ) ;
 int FUNC_5 (char const*,char const*,scalar_t__,char*) ;
 scalar_t__ FUNC_6 (char const*,scalar_t__,int *) ;
 int FUNC_7 (int *,char const*,int) ;
 int * FUNC_8 () ;
 int * FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int ,int **) ;
 int * FUNC_17 (int *,int *) ;
 char* FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (char const*,int *,int ) ;
 scalar_t__ FUNC_21 (char const*) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__,int ,char const**) ;
 int FUNC_24 (char const*,scalar_t__,int *) ;
 scalar_t__ FUNC_25 (char const*) ;
 scalar_t__ FUNC_26 (char const*) ;

int
FUNC_27(const char *VAR_10, zprop_source_t VAR_11, nvlist_t *VAR_12,
    nvlist_t *VAR_13)
{
 nvpair_t *VAR_14;
 nvpair_t *VAR_15;
 int VAR_16 = 0;
 uint64_t VAR_17;
 char *VAR_18;

 nvlist_t *VAR_19 = FUNC_8();
 nvlist_t *VAR_20 = FUNC_8();
retry:
 VAR_14 = ((void*)0);
 while ((VAR_14 = FUNC_17(VAR_12, VAR_14)) != ((void*)0)) {
  const char *VAR_21 = FUNC_18(VAR_14);
  zfs_prop_t VAR_22 = FUNC_21(VAR_21);
  int VAR_23 = 0;


  VAR_15 = VAR_14;
  if (FUNC_19(VAR_14) == VAR_2) {
   nvlist_t *VAR_24;
   VAR_24 = FUNC_10(VAR_14);
   if (FUNC_16(VAR_24, VAR_9,
       &VAR_15) != 0)
    VAR_23 = FUNC_1(VAR_6);
  }


  if (VAR_23 == 0 && VAR_11 == VAR_8) {

   if (FUNC_19(VAR_15) != VAR_1)
    VAR_23 = FUNC_1(VAR_6);
  } else if (VAR_23 == 0 && VAR_22 == VAR_7) {
   if (FUNC_25(VAR_21)) {
    if (FUNC_19(VAR_15) != VAR_3)
     VAR_23 = FUNC_1(VAR_6);
   } else if (FUNC_26(VAR_21)) {
    if (FUNC_19(VAR_15) !=
        VAR_5)
     VAR_23 = FUNC_1(VAR_6);
   } else {
    VAR_23 = FUNC_1(VAR_6);
   }
  } else if (VAR_23 == 0) {
   if (FUNC_19(VAR_15) == VAR_3) {
    if (FUNC_22(VAR_22) != 128)
     VAR_23 = FUNC_1(VAR_6);
   } else if (FUNC_19(VAR_15) == VAR_4) {
    const char *VAR_25;

    VAR_17 = FUNC_12(VAR_15);

    switch (FUNC_22(VAR_22)) {
    case 129:
     break;
    case 128:
     VAR_23 = FUNC_1(VAR_6);
     break;
    case 130:
     if (FUNC_23(VAR_22,
         VAR_17, &VAR_25) != 0)
      VAR_23 = FUNC_1(VAR_6);
     break;
    default:
     FUNC_2(VAR_0,
         "unknown property type");
    }
   } else {
    VAR_23 = FUNC_1(VAR_6);
   }
  }


  if (VAR_23 == 0)
   VAR_23 = FUNC_20(VAR_10, VAR_14, FUNC_0());

  if (VAR_23 == 0) {
   if (VAR_11 == VAR_8)
    VAR_23 = -1;
   else
    VAR_23 = FUNC_24(VAR_10, VAR_11,
        VAR_14);
   if (VAR_23 == -1) {




    VAR_23 = FUNC_13(VAR_19, VAR_14);
   } else if (VAR_23 != 0 && VAR_12 != VAR_20) {





    VAR_23 = FUNC_13(VAR_20, VAR_14);
   }
  }

  if (VAR_23 != 0) {
   if (VAR_13 != ((void*)0))
    FUNC_7(VAR_13, VAR_21, VAR_23);
   VAR_16 = VAR_23;
  }
 }

 if (VAR_12 != VAR_20 && !FUNC_14(VAR_20)) {
  VAR_12 = VAR_20;
  goto retry;
 }

 if (!FUNC_14(VAR_19) &&
     FUNC_6(VAR_10, VAR_11, VAR_19) != 0) {




  VAR_14 = ((void*)0);
  while ((VAR_14 = FUNC_17(VAR_19, VAR_14)) != ((void*)0)) {
   const char *VAR_26 = FUNC_18(VAR_14);
   int VAR_27 = 0;

   VAR_15 = VAR_14;
   if (FUNC_19(VAR_14) == VAR_2) {
    nvlist_t *VAR_28;
    VAR_28 = FUNC_10(VAR_14);
    VAR_15 = FUNC_9(VAR_28,
        VAR_9);
   }

   if (FUNC_19(VAR_15) == VAR_3) {
    VAR_18 = FUNC_11(VAR_15);
    VAR_27 = FUNC_5(VAR_10, VAR_26,
        VAR_11, VAR_18);
   } else if (FUNC_19(VAR_15) == VAR_1) {
    VAR_27 = FUNC_3(VAR_10, VAR_26,
        VAR_11);
   } else {
    VAR_17 = FUNC_12(VAR_15);
    VAR_27 = FUNC_4(VAR_10, VAR_26, VAR_11,
        VAR_17);
   }

   if (VAR_27 != 0) {
    if (VAR_13 != ((void*)0)) {
     FUNC_7(VAR_13, VAR_26,
         VAR_27);
    }
    VAR_16 = VAR_27;
   }
  }
 }
 FUNC_15(VAR_19);
 FUNC_15(VAR_20);

 return (VAR_16);
}
