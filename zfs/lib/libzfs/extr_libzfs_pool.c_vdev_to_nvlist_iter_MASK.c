
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;


 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,int ***,size_t*) ;
 int FUNC_2 (int *,char*,char**) ;
 scalar_t__ FUNC_3 (int *,char*,scalar_t__*) ;
 int * FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char**) ;
 int FUNC_8 (int *,scalar_t__*) ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,int ) ;
 char* FUNC_13 (char*,char) ;
 scalar_t__ FUNC_14 (char*,char**,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*,char*,scalar_t__) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static nvlist_t *
FUNC_18(nvlist_t *VAR_11, nvlist_t *VAR_12, boolean_t *VAR_13,
    boolean_t *VAR_14, boolean_t *VAR_15)
{
 uint_t VAR_16, VAR_17;
 nvlist_t **VAR_18;
 nvlist_t *VAR_19;
 uint64_t VAR_20;
 char *VAR_21;
 nvpair_t *VAR_22 = FUNC_4(VAR_12, ((void*)0));


 if (VAR_12 == ((void*)0) || VAR_22 == ((void*)0))
  return (((void*)0));


 VAR_21 = FUNC_5(VAR_22);

 switch (FUNC_6(VAR_22)) {
 case 128:
  if (FUNC_9(VAR_21, VAR_2) == 0) {
   uint64_t VAR_23, VAR_24;

   FUNC_15(FUNC_8(VAR_22, &VAR_23) == 0);
   FUNC_15(FUNC_3(VAR_11, VAR_2,
       &VAR_24) == 0);
   if (VAR_24 == VAR_23)
    return (VAR_11);
  }
  break;

 case 129: {
  char *VAR_25, *VAR_26;

  FUNC_15(FUNC_7(VAR_22, &VAR_25) == 0);
  if (FUNC_2(VAR_11, VAR_21, &VAR_26) != 0)
   break;
  if (FUNC_9(VAR_21, VAR_6) == 0) {
   uint64_t VAR_27 = 0;

   (void) FUNC_3(VAR_11, VAR_9,
       &VAR_27);
   if (FUNC_16(VAR_25, VAR_26, VAR_27) == 0)
    return (VAR_11);

  } else if (FUNC_9(VAR_21, VAR_8) == 0 && VAR_26) {
   char *VAR_28, *VAR_29, *VAR_30, *VAR_31;
   uint64_t VAR_32, VAR_33;






   if ((VAR_28 = FUNC_10(VAR_25)) == ((void*)0))
    return (((void*)0));

   if ((VAR_31 = FUNC_13(VAR_28, '-')) == ((void*)0)) {
    FUNC_0(VAR_28);
    break;
   }
   VAR_29 = VAR_31 + 1;
   *VAR_31 = '\0';




   if (FUNC_12(VAR_26, VAR_28, FUNC_11(VAR_26)) != 0) {
    FUNC_0(VAR_28);
    break;
   }

   FUNC_15(FUNC_17(VAR_28));
   FUNC_15(FUNC_3(VAR_11, VAR_3,
       &VAR_32) == 0);

   VAR_10 = 0;
   VAR_33 = FUNC_14(VAR_29, &VAR_30, 10);

   FUNC_0(VAR_28);
   if (VAR_10 != 0)
    return (((void*)0));




   if (VAR_33 == VAR_32)
    return (VAR_11);
  }




  if (FUNC_9(VAR_25, VAR_26) == 0)
   return (VAR_11);
  break;
 }

 default:
  break;
 }

 if (FUNC_1(VAR_11, VAR_1,
     &VAR_18, &VAR_17) != 0)
  return (((void*)0));

 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  if ((VAR_19 = FUNC_18(VAR_18[VAR_16], VAR_12,
      VAR_13, VAR_14, ((void*)0))) != ((void*)0)) {






   if (VAR_15 != ((void*)0) &&
       FUNC_3(VAR_18[VAR_16],
       VAR_4, &VAR_20) == 0 &&
       VAR_20) {
    *VAR_15 = VAR_0;
   }
   return (VAR_19);
  }
 }

 if (FUNC_1(VAR_11, VAR_7,
     &VAR_18, &VAR_17) == 0) {
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
   if ((VAR_19 = FUNC_18(VAR_18[VAR_16], VAR_12,
       VAR_13, VAR_14, ((void*)0))) != ((void*)0)) {
    *VAR_13 = VAR_0;
    return (VAR_19);
   }
  }
 }

 if (FUNC_1(VAR_11, VAR_5,
     &VAR_18, &VAR_17) == 0) {
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
   if ((VAR_19 = FUNC_18(VAR_18[VAR_16], VAR_12,
       VAR_13, VAR_14, ((void*)0))) != ((void*)0)) {
    *VAR_14 = VAR_0;
    return (VAR_19);
   }
  }
 }

 return (((void*)0));
}
