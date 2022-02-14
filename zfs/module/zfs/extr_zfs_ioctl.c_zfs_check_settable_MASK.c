
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int spa_feature_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int) ;
 int VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 char* VAR_22 ;
 char* VAR_23 ;
 char const* VAR_24 ;
 char* VAR_25 ;
 int VAR_26 ;






 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;



 size_t VAR_31 ;
 size_t VAR_32 ;

 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (char const*,int **,int ) ;
 int * FUNC_12 (char const*,char) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*,char const*,int ) ;
 int FUNC_15 (char const*,int ) ;
 int FUNC_16 (char const*) ;
 int VAR_41 ;
 int FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (char const*) ;
 int FUNC_20 (char const*,int,int *,int ) ;
 int FUNC_21 (char const*,char const*,int *) ;
 char** VAR_42 ;
 int FUNC_22 (int) ;
 int FUNC_23 (char const*,int ) ;

__attribute__((used)) static int
FUNC_24(const char *VAR_43, nvpair_t *VAR_44, cred_t *VAR_45)
{
 const char *VAR_46 = FUNC_5(VAR_44);
 boolean_t VAR_47 = (FUNC_12(VAR_43, '@') != ((void*)0));
 zfs_prop_t VAR_48 = FUNC_17(VAR_46);
 uint64_t VAR_49;
 int VAR_50;

 if (VAR_48 == VAR_39) {
  if (FUNC_18(VAR_46)) {
   if ((VAR_50 = FUNC_21(VAR_43,
       VAR_24, VAR_45)))
    return (VAR_50);
   return (0);
  }

  if (!VAR_47 && FUNC_19(VAR_46)) {
   const char *VAR_51 = ((void*)0);
   const char *VAR_52 =
       VAR_42[VAR_32];
   const char *VAR_53 =
       VAR_42[VAR_28];
   const char *VAR_54 =
       VAR_42[VAR_31];
   const char *VAR_55 =
       VAR_42[VAR_27];
   const char *VAR_56 =
       VAR_42[VAR_30];
   const char *VAR_57 = VAR_42[ VAR_29];


   if (FUNC_14(VAR_46, VAR_52,
       FUNC_13(VAR_52)) == 0) {
    VAR_51 = VAR_25;
   } else if (FUNC_14(VAR_46, VAR_54,
       FUNC_13(VAR_54)) == 0) {
    VAR_51 = VAR_23;
   } else if (FUNC_14(VAR_46, VAR_53,
       FUNC_13(VAR_53)) == 0) {
    VAR_51 = VAR_20;
   } else if (FUNC_14(VAR_46, VAR_55,
       FUNC_13(VAR_55)) == 0) {
    VAR_51 = VAR_19;
   } else if (FUNC_14(VAR_46, VAR_56,
       FUNC_13(VAR_56)) == 0) {
    VAR_51 = VAR_22;
   } else if (FUNC_14(VAR_46, VAR_57,
       FUNC_13(VAR_57)) == 0) {
    VAR_51 = VAR_21;
   } else {

    return (FUNC_2(VAR_3));
   }

   if ((VAR_50 = FUNC_21(VAR_43, VAR_51, VAR_45)))
    return (VAR_50);
   return (0);
  }

  return (FUNC_2(VAR_3));
 }

 if (VAR_47)
  return (FUNC_2(VAR_3));

 if (FUNC_6(VAR_44) == VAR_0) {




  nvlist_t *VAR_58;
  FUNC_3(FUNC_7(VAR_44, &VAR_58) == 0);
  FUNC_3(FUNC_4(VAR_58, VAR_40,
      &VAR_44) == 0);
 }




 switch (VAR_48) {
 case 135:





  if (FUNC_8(VAR_44, &VAR_49) == 0) {
   if (VAR_49 >= VAR_34 &&
       VAR_49 <= VAR_35 &&
       FUNC_15(VAR_43,
       VAR_15)) {
    return (FUNC_2(VAR_4));
   }

   if (VAR_49 == VAR_37 &&
       FUNC_15(VAR_43,
       VAR_17))
    return (FUNC_2(VAR_4));

   if (VAR_49 == VAR_36) {
    spa_t *VAR_59;

    if ((VAR_50 = FUNC_11(VAR_43, &VAR_59, VAR_6)) != 0)
     return (VAR_50);

    if (!FUNC_10(VAR_59,
        VAR_9)) {
     FUNC_9(VAR_59, VAR_6);
     return (FUNC_2(VAR_4));
    }
    FUNC_9(VAR_59, VAR_6);
   }
   if (FUNC_16(VAR_43) &&
       !FUNC_0(VAR_49)) {
    return (FUNC_2(VAR_5));
   }
  }
  break;

 case 134:
  if (FUNC_15(VAR_43, VAR_14))
   return (FUNC_2(VAR_4));
  break;

 case 128:
 case 131:

  if (FUNC_8(VAR_44, &VAR_49) == 0 &&
      VAR_49 > VAR_12) {
   spa_t *VAR_60;





   if (VAR_49 > VAR_41 ||
       VAR_49 > VAR_11)
    return (FUNC_2(VAR_5));

   if ((VAR_50 = FUNC_11(VAR_43, &VAR_60, VAR_6)) != 0)
    return (VAR_50);

   if (!FUNC_10(VAR_60,
       VAR_7)) {
    FUNC_9(VAR_60, VAR_6);
    return (FUNC_2(VAR_4));
   }
   FUNC_9(VAR_60, VAR_6);
  }
  break;

 case 132:

  if (FUNC_8(VAR_44, &VAR_49) == 0 &&
      VAR_49 != VAR_26) {
   spa_t *VAR_61;






   if (FUNC_16(VAR_43) &&
       VAR_49 != VAR_26) {
    return (FUNC_2(VAR_2));
   }

   if ((VAR_50 = FUNC_11(VAR_43, &VAR_61, VAR_6)) != 0)
    return (VAR_50);

   if (!FUNC_10(VAR_61,
       VAR_8)) {
    FUNC_9(VAR_61, VAR_6);
    return (FUNC_2(VAR_4));
   }
   FUNC_9(VAR_61, VAR_6);
  }
  break;

 case 129:






  break;

 case 130:
  if (FUNC_23(VAR_43, VAR_38))
   return (FUNC_2(VAR_4));
  break;

 case 137:
  if (FUNC_6(VAR_44) == VAR_1 &&
      FUNC_8(VAR_44, &VAR_49) == 0) {
   if (VAR_49 == VAR_18 &&
       FUNC_15(VAR_43,
       VAR_16))
    return (FUNC_2(VAR_4));
  }
  break;
 case 136:
 case 133:
 {
  spa_feature_t VAR_62;
  spa_t *VAR_63;
  int VAR_64;


  if (VAR_48 == 133 &&
      FUNC_15(VAR_43, VAR_13))
   return (FUNC_2(VAR_4));

  if (FUNC_6(VAR_44) == VAR_1 &&
      FUNC_8(VAR_44, &VAR_49) == 0) {

   VAR_62 = FUNC_22(
       VAR_49 & VAR_33);
   if (VAR_62 == VAR_10)
    break;

   if ((VAR_64 = FUNC_11(VAR_43, &VAR_63, VAR_6)) != 0)
    return (VAR_64);

   if (!FUNC_10(VAR_63, VAR_62)) {
    FUNC_9(VAR_63, VAR_6);
    return (FUNC_2(VAR_4));
   }
   FUNC_9(VAR_63, VAR_6);
  }
  break;
 }

 default:
  break;
 }

 return (FUNC_20(VAR_43, VAR_48, VAR_44, FUNC_1()));
}
