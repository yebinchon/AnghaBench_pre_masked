
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {char* fi_uname; } ;
typedef TYPE_1__ zfeature_info_t ;
typedef int u_longlong_t ;
typedef size_t spa_feature_t ;
typedef int propname ;
typedef int nvlist_t ;
typedef int buf ;
typedef scalar_t__ boolean_t ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (char*,char*,int **,scalar_t__) ;
 int FUNC_1 (char*,char*,int **,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_21 ;
 int FUNC_4 (int,char**,char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,int *,scalar_t__,int,scalar_t__,scalar_t__,int,char**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,char**) ;
 int FUNC_10 (int *,char*) ;
 int * FUNC_11 (char*) ;
 char* VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_12 (int *,char*,int *,int ,char*,int ) ;
 int FUNC_13 (char*,char*) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,char*,...) ;
 TYPE_1__* VAR_25 ;
 int VAR_26 ;
 char* FUNC_16 (char*,char) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 char* FUNC_18 (scalar_t__) ;
 int FUNC_19 (char*,char**,int) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *,int *,int ) ;
 int * FUNC_24 (int ,char*,int ) ;
 char* FUNC_25 (int ) ;
 int FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (int ,char*,int *,int *,int *) ;
 int FUNC_28 (char*) ;
 char* FUNC_29 (int ) ;

int
FUNC_30(int VAR_27, char **VAR_28)
{
 boolean_t VAR_29 = VAR_0;
 boolean_t VAR_30 = VAR_0;
 boolean_t VAR_31 = VAR_1;
 int VAR_32;
 nvlist_t *VAR_33 = ((void*)0);
 char *VAR_34;
 char *VAR_35 = ((void*)0);
 int VAR_36 = 1;
 char *VAR_37 = ((void*)0);
 char *VAR_38 = ((void*)0);
 nvlist_t *VAR_39 = ((void*)0);
 nvlist_t *VAR_40 = ((void*)0);
 char *VAR_41;


 while ((VAR_32 = FUNC_4(VAR_27, VAR_28, ":fndR:m:o:O:t:")) != -1) {
  switch (VAR_32) {
  case 'f':
   VAR_29 = VAR_1;
   break;
  case 'n':
   VAR_30 = VAR_1;
   break;
  case 'd':
   VAR_31 = VAR_0;
   break;
  case 'R':
   VAR_37 = VAR_22;
   if (FUNC_0(FUNC_29(
       VAR_16), VAR_22, &VAR_40, VAR_1))
    goto errout;
   if (FUNC_1(FUNC_29(
       VAR_17), "none", &VAR_40, VAR_1))
    goto errout;
   break;
  case 'm':

   VAR_38 = VAR_22;
   break;
  case 'o':
   if ((VAR_41 = FUNC_16(VAR_22, '=')) == ((void*)0)) {
    (void) FUNC_3(VAR_26, "%s", FUNC_5("missing "
        "'=' for -o option\n"));
    goto errout;
   }
   *VAR_41 = '\0';
   VAR_41++;

   if (FUNC_0(VAR_22, VAR_41, &VAR_40, VAR_1))
    goto errout;





   if (FUNC_28(VAR_22) == VAR_19) {
    char *VAR_42;
    u_longlong_t VAR_43;

    VAR_43 = FUNC_19(VAR_41, &VAR_42, 10);
    if (*VAR_42 == '\0' &&
        VAR_43 < VAR_6) {
     VAR_31 = VAR_0;
    }
   }
   if (FUNC_28(VAR_22) == VAR_16)
    VAR_37 = VAR_41;
   break;
  case 'O':
   if ((VAR_41 = FUNC_16(VAR_22, '=')) == ((void*)0)) {
    (void) FUNC_3(VAR_26, "%s", FUNC_5("missing "
        "'=' for -O option\n"));
    goto errout;
   }
   *VAR_41 = '\0';
   VAR_41++;






   if (0 == FUNC_17(VAR_22,
       FUNC_25(VAR_14))) {
    VAR_38 = VAR_41;
   } else if (FUNC_0(VAR_22, VAR_41, &VAR_39,
       VAR_0)) {
    goto errout;
   }
   break;
  case 't':



   if (FUNC_16(VAR_22, '/') != ((void*)0)) {
    (void) FUNC_3(VAR_26, FUNC_5("cannot create "
        "'%s': invalid character '/' in temporary "
        "name\n"), VAR_22);
    (void) FUNC_3(VAR_26, "%s", FUNC_5("use 'zfs "
        "create' to create a dataset\n"));
    goto errout;
   }

   if (FUNC_0(FUNC_29(
       VAR_18), VAR_22, &VAR_40, VAR_1))
    goto errout;
   if (FUNC_1(FUNC_29(
       VAR_17), "none", &VAR_40, VAR_1))
    goto errout;
   VAR_35 = VAR_22;
   break;
  case ':':
   (void) FUNC_3(VAR_26, FUNC_5("missing argument for "
       "'%c' option\n"), VAR_24);
   goto badusage;
  case '?':
   (void) FUNC_3(VAR_26, FUNC_5("invalid option '%c'\n"),
       VAR_24);
   goto badusage;
  }
 }

 VAR_27 -= VAR_23;
 VAR_28 += VAR_23;


 if (VAR_27 < 1) {
  (void) FUNC_3(VAR_26, "%s", FUNC_5("missing pool name argument\n"));
  goto badusage;
 }
 if (VAR_27 < 2) {
  (void) FUNC_3(VAR_26, "%s", FUNC_5("missing vdev specification\n"));
  goto badusage;
 }

 VAR_34 = VAR_28[0];





 if (FUNC_16(VAR_34, '/') != ((void*)0)) {
  (void) FUNC_3(VAR_26, FUNC_5("cannot create '%s': invalid "
      "character '/' in pool name\n"), VAR_34);
  (void) FUNC_3(VAR_26, "%s", FUNC_5("use 'zfs create' to "
      "create a dataset\n"));
  goto errout;
 }


 VAR_33 = FUNC_7(((void*)0), VAR_40, VAR_29, !VAR_29, VAR_0, VAR_30,
     VAR_27 - 1, VAR_28 + 1);
 if (VAR_33 == ((void*)0))
  goto errout;


 if (!FUNC_21(VAR_33)) {
  (void) FUNC_3(VAR_26, "%s", FUNC_5("invalid vdev "
      "specification: at least one toplevel vdev must be "
      "specified\n"));
  goto errout;
 }

 if (VAR_37 != ((void*)0) && VAR_37[0] != '/') {
  (void) FUNC_3(VAR_26, FUNC_5("invalid alternate root '%s': "
      "must be an absolute path\n"), VAR_37);
  goto errout;
 }





 if (VAR_38 == ((void*)0) ||
     (FUNC_17(VAR_38, VAR_12) != 0 &&
     FUNC_17(VAR_38, VAR_13) != 0)) {
  char VAR_44[VAR_4];
  DIR *VAR_45;

  if (VAR_38 && VAR_38[0] != '/') {
   (void) FUNC_3(VAR_26, FUNC_5("invalid mountpoint "
       "'%s': must be an absolute path, 'legacy', or "
       "'none'\n"), VAR_38);
   goto errout;
  }

  if (VAR_38 == ((void*)0)) {
   if (VAR_37 != ((void*)0))
    (void) FUNC_15(VAR_44, sizeof (VAR_44), "%s/%s",
        VAR_37, VAR_34);
   else
    (void) FUNC_15(VAR_44, sizeof (VAR_44), "/%s",
        VAR_34);
  } else {
   if (VAR_37 != ((void*)0))
    (void) FUNC_15(VAR_44, sizeof (VAR_44), "%s%s",
        VAR_37, VAR_38);
   else
    (void) FUNC_15(VAR_44, sizeof (VAR_44), "%s",
        VAR_38);
  }

  if ((VAR_45 = FUNC_11(VAR_44)) == ((void*)0) && VAR_20 != VAR_2) {
   (void) FUNC_3(VAR_26, FUNC_5("mountpoint '%s' : "
       "%s\n"), VAR_44, FUNC_18(VAR_20));
   (void) FUNC_3(VAR_26, "%s", FUNC_5("use '-m' "
       "option to provide a different default\n"));
   goto errout;
  } else if (VAR_45) {
   int VAR_46 = 0;

   while (VAR_46 < 3 && FUNC_14(VAR_45) != ((void*)0))
    VAR_46++;
   (void) FUNC_2(VAR_45);

   if (VAR_46 > 2) {
    (void) FUNC_3(VAR_26, FUNC_5("mountpoint "
        "'%s' exists and is not empty\n"), VAR_44);
    (void) FUNC_3(VAR_26, "%s", FUNC_5("use '-m' "
        "option to provide a "
        "different default\n"));
    goto errout;
   }
  }
 }





 if (VAR_38 != ((void*)0)) {
  VAR_36 = FUNC_0(FUNC_25(VAR_14),
      VAR_38, &VAR_39, VAR_0);
  if (VAR_36 != 0)
   goto errout;
 }

 VAR_36 = 1;
 if (VAR_30) {





  (void) FUNC_13(FUNC_5("would create '%s' with the "
      "following layout:\n\n"), VAR_34);

  FUNC_12(((void*)0), VAR_34, VAR_33, 0, "", 0);
  FUNC_12(((void*)0), "dedup", VAR_33, 0,
      VAR_7, 0);
  FUNC_12(((void*)0), "special", VAR_33, 0,
      VAR_9, 0);
  FUNC_12(((void*)0), "logs", VAR_33, 0,
      VAR_8, 0);

  VAR_36 = 0;
 } else {



  spa_feature_t VAR_47;
  for (VAR_47 = 0; VAR_47 < VAR_5; VAR_47++) {
   char VAR_48[VAR_4];
   char *VAR_49;
   zfeature_info_t *VAR_50 = &VAR_25[VAR_47];

   (void) FUNC_15(VAR_48, sizeof (VAR_48),
       "feature@%s", VAR_50->fi_uname);







   if (!FUNC_9(VAR_40, VAR_48, &VAR_49)) {
    if (FUNC_17(VAR_49, VAR_10) == 0)
     (void) FUNC_10(VAR_40,
         VAR_48);
   } else if (VAR_31) {
    VAR_36 = FUNC_0(VAR_48,
        VAR_11, &VAR_40, VAR_1);
    if (VAR_36 != 0)
     goto errout;
   }
  }

  VAR_36 = 1;
  if (FUNC_27(VAR_21, VAR_34,
      VAR_33, VAR_40, VAR_39) == 0) {
   zfs_handle_t *VAR_51 = FUNC_24(VAR_21,
       VAR_35 ? VAR_35 : VAR_34, VAR_15);
   if (VAR_51 != ((void*)0)) {
    if (FUNC_23(VAR_51, ((void*)0), 0) == 0)
     VAR_36 = FUNC_26(VAR_51);
    FUNC_22(VAR_51);
   }
  } else if (FUNC_6(VAR_21) == VAR_3) {
   (void) FUNC_3(VAR_26, "%s", FUNC_5("pool name may have "
       "been omitted\n"));
  }
 }

errout:
 FUNC_8(VAR_33);
 FUNC_8(VAR_39);
 FUNC_8(VAR_40);
 return (VAR_36);
badusage:
 FUNC_8(VAR_39);
 FUNC_8(VAR_40);
 FUNC_20(VAR_0);
 return (2);
}
