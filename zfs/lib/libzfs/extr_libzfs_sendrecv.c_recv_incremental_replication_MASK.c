
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* member_0; char* zc_name; void* zc_cookie; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int tryname ;
struct TYPE_11__ {scalar_t__ verbose; scalar_t__ isprefix; int force; scalar_t__ dryrun; } ;
typedef TYPE_2__ recvflags_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int name ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,scalar_t__,char**) ;
 int FUNC_4 (int *,char const*,char*,int *,int,void*,int,int,int,int,int,void*,int **,int **) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *,char*,int **) ;
 scalar_t__ FUNC_11 (int *,char*,char**) ;
 scalar_t__ FUNC_12 (int *,char*,scalar_t__*) ;
 int * FUNC_13 (int *,int *) ;
 char* FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int **) ;
 scalar_t__ FUNC_16 (int *,scalar_t__*) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (int *,char*,scalar_t__,char*,TYPE_2__*) ;
 int FUNC_19 (int *,char*,char*,TYPE_2__*) ;
 int FUNC_20 (int *,char*,char*,scalar_t__,char*,TYPE_2__*) ;
 int FUNC_21 (char*,int,char*,char*,char*) ;
 int FUNC_22 (char*,char*,int ) ;
 scalar_t__ FUNC_23 (char const*,char*) ;
 scalar_t__ FUNC_24 (char const*) ;
 char* FUNC_25 (char*,char) ;
 int FUNC_26 (TYPE_1__*) ;
 scalar_t__ FUNC_27 (int *,TYPE_1__*,int *) ;
 int FUNC_28 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_29(libzfs_handle_t *VAR_6, const char *VAR_7,
    recvflags_t *VAR_8, nvlist_t *VAR_9, avl_tree_t *VAR_10,
    nvlist_t *VAR_11)
{
 nvlist_t *VAR_12, *VAR_13 = ((void*)0);
 avl_tree_t *VAR_14;
 nvpair_t *VAR_15, *VAR_16;
 char *VAR_17;
 char VAR_18[VAR_5];
 char VAR_19[32];
 int VAR_20;
 boolean_t VAR_21, VAR_22, VAR_23;
 char *VAR_24, *VAR_25;

 FUNC_0(0 == FUNC_11(VAR_9, "fromsnap", &VAR_17));

 VAR_23 = (FUNC_9(VAR_9, "not_recursive") ==
     VAR_2);

 if (VAR_8->dryrun)
  return (0);

again:
 VAR_21 = VAR_22 = VAR_0;

 FUNC_0(0 == FUNC_6(&VAR_13, VAR_3, 0));

 if ((VAR_20 = FUNC_4(VAR_6, VAR_7, VAR_17, ((void*)0),
     VAR_23, VAR_1, VAR_0, VAR_23, VAR_0, VAR_0,
     VAR_0, VAR_1, &VAR_12, &VAR_14)) != 0)
  return (VAR_20);




 for (VAR_15 = FUNC_13(VAR_12, ((void*)0));
     VAR_15; VAR_15 = VAR_16) {
  nvlist_t *VAR_26, *VAR_27;
  nvlist_t *VAR_28 = ((void*)0);
  nvpair_t *VAR_29, *VAR_30;
  uint64_t VAR_31 = 0;
  uint64_t VAR_32 = 0;
  uint64_t VAR_33 = 0;
  uint64_t VAR_34, VAR_35;
  char *VAR_36, *VAR_37;

  VAR_16 = FUNC_13(VAR_12, VAR_15);

  FUNC_0(0 == FUNC_15(VAR_15, &VAR_26));
  FUNC_0(0 == FUNC_10(VAR_26, "snaps", &VAR_27));
  FUNC_0(0 == FUNC_11(VAR_26, "name", &VAR_36));
  FUNC_0(0 == FUNC_12(VAR_26, "parentfromsnap",
      &VAR_34));
  (void) FUNC_12(VAR_26, "origin", &VAR_32);





  for (VAR_29 = FUNC_13(VAR_27, ((void*)0));
      VAR_29; VAR_29 = FUNC_13(VAR_27, VAR_29)) {
   uint64_t VAR_38;

   FUNC_0(0 == FUNC_16(VAR_29, &VAR_38));
   VAR_28 = FUNC_3(VAR_10, VAR_38, ((void*)0));

   if (VAR_28 != ((void*)0))
    break;
  }


  (void) FUNC_12(VAR_28, "origin",
      &VAR_33);
  if (VAR_28 && VAR_32 != VAR_33) {
   switch (FUNC_1(VAR_6, VAR_14,
       VAR_33, VAR_32)) {
   case 1: {

    nvlist_t *VAR_39;
    char *VAR_40;

    VAR_39 = FUNC_3(VAR_14, VAR_32,
        ((void*)0));
    FUNC_0(0 == FUNC_11(VAR_39,
        "name", &VAR_40));
    VAR_20 = FUNC_19(VAR_6, VAR_36, VAR_40,
        VAR_8);
    if (VAR_20 == 0)
     VAR_22 = VAR_1;
    break;
   }
   default:
    break;
   case -1:
    FUNC_2(VAR_14);
    FUNC_8(VAR_12);
    return (-1);
   }





   VAR_21 = VAR_1;
   continue;
  }

  for (VAR_29 = FUNC_13(VAR_27, ((void*)0));
      VAR_29; VAR_29 = VAR_30) {
   uint64_t VAR_41;
   char *VAR_42;
   nvlist_t *VAR_43, *VAR_44;

   VAR_30 = FUNC_13(VAR_27, VAR_29);

   FUNC_0(0 == FUNC_16(VAR_29, &VAR_41));
   VAR_43 = FUNC_3(VAR_10, VAR_41,
       &VAR_42);


   if (VAR_43 == ((void*)0)) {
    char VAR_45[VAR_5];

    if (!VAR_8->force)
     continue;

    (void) FUNC_21(VAR_45, sizeof (VAR_45), "%s@%s",
        VAR_36, FUNC_14(VAR_29));

    VAR_20 = FUNC_18(VAR_6, VAR_45,
        FUNC_24(VAR_36)+1, VAR_18, VAR_8);
    if (VAR_20)
     VAR_21 = VAR_1;
    else
     VAR_22 = VAR_1;
    FUNC_22(VAR_19, "%llu",
        (u_longlong_t)VAR_41);
    FUNC_5(VAR_13, VAR_19);
    continue;
   }

   VAR_28 = VAR_43;

   if (0 == FUNC_10(VAR_28, "snapprops",
       &VAR_44) && 0 == FUNC_10(VAR_44,
       VAR_42, &VAR_44)) {
    zfs_cmd_t VAR_46 = {"\0"};

    VAR_46.zc_cookie = VAR_1;
    (void) FUNC_21(VAR_46.zc_name, sizeof (VAR_46.zc_name),
        "%s@%s", VAR_36, FUNC_14(VAR_29));
    if (FUNC_27(VAR_6, &VAR_46,
        VAR_44) == 0) {
     (void) FUNC_28(VAR_6,
         VAR_4, &VAR_46);
     FUNC_26(&VAR_46);
    }
   }


   if (FUNC_23(FUNC_14(VAR_29),
       VAR_42) != 0) {
    char VAR_47[VAR_5];
    char VAR_48[VAR_5];

    (void) FUNC_21(VAR_47, sizeof (VAR_47), "%s@%s",
        VAR_36, FUNC_14(VAR_29));
    (void) FUNC_21(VAR_48, sizeof (VAR_47), "%s@%s",
        VAR_36, VAR_42);

    VAR_20 = FUNC_20(VAR_6, VAR_47, VAR_48,
        FUNC_24(VAR_36)+1, VAR_18, VAR_8);
    if (VAR_20)
     VAR_21 = VAR_1;
    else
     VAR_22 = VAR_1;
   }

   if (FUNC_23(VAR_42, VAR_17) == 0)
    VAR_31 = VAR_41;
  }


  if (VAR_28 == ((void*)0)) {
   if (!VAR_8->force)
    continue;

   VAR_20 = FUNC_18(VAR_6, VAR_36, FUNC_24(VAR_7)+1,
       VAR_18, VAR_8);
   if (VAR_20)
    VAR_21 = VAR_1;
   else
    VAR_22 = VAR_1;
   FUNC_22(VAR_19, "%llu",
       (u_longlong_t)VAR_34);
   FUNC_5(VAR_13, VAR_19);
   continue;
  }

  if (VAR_31 == 0) {
   if (VAR_8->verbose) {
    (void) FUNC_17("local fs %s does not have "
        "fromsnap (%s in stream); must have "
        "been deleted locally; ignoring\n",
        VAR_36, VAR_17);
   }
   continue;
  }

  FUNC_0(0 == FUNC_11(VAR_28,
      "name", &VAR_37));
  FUNC_0(0 == FUNC_12(VAR_28,
      "parentfromsnap", &VAR_35));

  VAR_24 = FUNC_25(VAR_36, '/');
  VAR_25 = FUNC_25(VAR_37, '/');
  if (VAR_35 != 0 &&
      VAR_34 != 0 &&
      VAR_35 != VAR_34) {
   FUNC_22(VAR_19, "%llu",
       (u_longlong_t)VAR_34);
   if (FUNC_7(VAR_13, VAR_19)) {
    VAR_22 = VAR_1;
    VAR_21 = VAR_1;
    goto doagain;
   }
  }






  if ((VAR_35 != 0 &&
      VAR_34 != 0 &&
      VAR_35 != VAR_34) ||
      ((VAR_8->isprefix || FUNC_23(VAR_7, VAR_36) != 0) &&
      (VAR_24 != ((void*)0)) && (VAR_25 != ((void*)0)) && FUNC_23(VAR_24, VAR_25) != 0)) {
   nvlist_t *VAR_49;
   char VAR_50[VAR_5];

   VAR_49 = FUNC_3(VAR_14,
       VAR_35, ((void*)0));







   if (VAR_49 != ((void*)0)) {
    char *VAR_51;

    FUNC_0(0 == FUNC_11(VAR_49, "name",
        &VAR_51));
    (void) FUNC_21(VAR_50, sizeof (VAR_50),
        "%s%s", VAR_51, FUNC_25(VAR_37, '/'));
   } else {
    VAR_50[0] = '\0';
    if (VAR_8->verbose) {
     (void) FUNC_17("local fs %s new parent "
         "not found\n", VAR_36);
    }
   }

   VAR_18[0] = '\0';

   VAR_20 = FUNC_20(VAR_6, VAR_36, VAR_50,
       FUNC_24(VAR_7)+1, VAR_18, VAR_8);

   if (VAR_11 != ((void*)0) && VAR_18[0] != '\0') {
    FUNC_0(0 == FUNC_5(VAR_11,
        VAR_18));
   }

   if (VAR_20)
    VAR_21 = VAR_1;
   else
    VAR_22 = VAR_1;
  }
 }

doagain:
 FUNC_2(VAR_14);
 FUNC_8(VAR_12);
 FUNC_8(VAR_13);

 if (VAR_21 && VAR_22) {

  if (VAR_8->verbose)
   (void) FUNC_17("another pass:\n");
  goto again;
 }

 return (VAR_21 || VAR_20 != 0);
}
