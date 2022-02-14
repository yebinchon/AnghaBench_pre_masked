
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint_t ;
typedef int uint64_t ;
struct stat64 {scalar_t__ st_size; } ;
struct TYPE_9__ {char* zprl_type; int zprl_children; int zprl_parity; int member_0; } ;
typedef TYPE_1__ replication_level_t ;
typedef int nvlist_t ;
typedef long long int64_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,struct stat64*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__*,TYPE_1__**,TYPE_1__**) ;
 scalar_t__ FUNC_6 (long long) ;
 scalar_t__ FUNC_7 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_8 (int *,int ,char**) ;
 int FUNC_9 (int *,int ,int*) ;
 int FUNC_10 (char*,int ) ;
 TYPE_1__* FUNC_11 (int) ;
 int FUNC_12 (char*,struct stat64*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (int ,...) ;
 int FUNC_15 (int) ;

__attribute__((used)) static replication_level_t *
FUNC_16(nvlist_t *VAR_14, boolean_t VAR_15)
{
 nvlist_t **VAR_16;
 uint_t VAR_17, VAR_18;
 nvlist_t **VAR_19;
 uint_t VAR_20, VAR_21;
 nvlist_t *VAR_22;
 char *VAR_23;
 replication_level_t VAR_24 = {0};
 replication_level_t VAR_25;
 replication_level_t *VAR_26;
 replication_level_t *VAR_27, *VAR_28;
 boolean_t VAR_29;

 VAR_26 = FUNC_11(sizeof (replication_level_t));

 FUNC_15(FUNC_7(VAR_14, VAR_8,
     &VAR_16, &VAR_18) == 0);

 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
  uint64_t VAR_30 = VAR_0;

  VAR_22 = VAR_16[VAR_17];





  (void) FUNC_9(VAR_22, VAR_9, &VAR_30);
  if (VAR_30)
   continue;


  FUNC_15(FUNC_8(VAR_22, VAR_12, &VAR_23) == 0);
  if (FUNC_13(VAR_23, VAR_4) == 0)
   continue;

  if (FUNC_7(VAR_22, VAR_8,
      &VAR_19, &VAR_21) != 0) {



   VAR_25.zprl_type = VAR_23;
   VAR_25.zprl_children = 1;
   VAR_25.zprl_parity = 0;
  } else {
   int64_t VAR_31;
   VAR_25.zprl_type = VAR_23;
   VAR_25.zprl_children = 0;

   if (FUNC_13(VAR_23, VAR_5) == 0) {
    FUNC_15(FUNC_9(VAR_22,
        VAR_10,
        &VAR_25.zprl_parity) == 0);
    FUNC_0(VAR_25.zprl_parity != 0);
   } else {
    VAR_25.zprl_parity = 0;
   }






   VAR_23 = ((void*)0);
   VAR_29 = 0;
   VAR_31 = -1LL;
   for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
    nvlist_t *VAR_32 = VAR_19[VAR_20];
    char *VAR_33;
    struct stat64 VAR_34;
    int64_t VAR_35 = -1LL;
    char *VAR_36;
    int VAR_37, VAR_38;

    VAR_25.zprl_children++;

    FUNC_15(FUNC_8(VAR_32,
        VAR_12, &VAR_36) == 0);







    while (FUNC_13(VAR_36,
        VAR_6) == 0 ||
        FUNC_13(VAR_36, VAR_7) == 0) {
     nvlist_t **VAR_39;
     uint_t VAR_40;

     FUNC_15(FUNC_7(VAR_32,
         VAR_8, &VAR_39,
         &VAR_40) == 0);
     FUNC_0(VAR_40 == 2);
     VAR_32 = VAR_39[0];

     FUNC_15(FUNC_8(VAR_32,
         VAR_12,
         &VAR_36) == 0);
    }

    FUNC_15(FUNC_8(VAR_32,
        VAR_11, &VAR_33) == 0);





    if (!VAR_29 && VAR_23 != ((void*)0) &&
        FUNC_13(VAR_23, VAR_36) != 0) {
     if (VAR_26 != ((void*)0))
      FUNC_2(VAR_26);
     VAR_26 = ((void*)0);
     if (VAR_15)
      FUNC_14(FUNC_4(
          "mismatched replication "
          "level: %s contains both "
          "files and devices\n"),
          VAR_25.zprl_type);
     else
      return (((void*)0));
     VAR_29 = VAR_1;
    }
    if ((VAR_37 = FUNC_10(VAR_33, VAR_3)) >= 0) {
     VAR_38 = FUNC_3(VAR_37, &VAR_34);
     (void) FUNC_1(VAR_37);
    } else {
     VAR_38 = FUNC_12(VAR_33, &VAR_34);
    }

    if (VAR_38 != 0 ||
        VAR_34.st_size == 0 ||
        VAR_34.st_size == VAR_2)
     continue;

    VAR_35 = VAR_34.st_size;







    if (!VAR_29 &&
        (VAR_31 != -1LL &&
        (FUNC_6(VAR_35 - VAR_31) >
        VAR_13))) {
     if (VAR_26 != ((void*)0))
      FUNC_2(VAR_26);
     VAR_26 = ((void*)0);
     if (VAR_15)
      FUNC_14(FUNC_4(
          "%s contains devices of "
          "different sizes\n"),
          VAR_25.zprl_type);
     else
      return (((void*)0));
     VAR_29 = VAR_1;
    }

    VAR_23 = VAR_36;
    VAR_31 = VAR_35;
   }
  }






  if (VAR_24.zprl_type != ((void*)0)) {
   if (FUNC_5(&VAR_24, &VAR_25, &VAR_27, &VAR_28) ||
       FUNC_5(&VAR_25, &VAR_24, &VAR_27, &VAR_28)) {




    if (VAR_27->zprl_parity !=
        VAR_28->zprl_children - 1) {
     if (VAR_26 != ((void*)0))
      FUNC_2(VAR_26);
     VAR_26 = ((void*)0);
     if (VAR_15)
      FUNC_14(FUNC_4(
          "mismatched replication "
          "level: "
          "%s and %s vdevs with "
          "different redundancy, "
          "%llu vs. %llu (%llu-way) "
          "are present\n"),
          VAR_27->zprl_type,
          VAR_28->zprl_type,
          VAR_27->zprl_parity,
          VAR_28->zprl_children - 1,
          VAR_28->zprl_children);
     else
      return (((void*)0));
    }
   } else if (FUNC_13(VAR_24.zprl_type, VAR_25.zprl_type) !=
       0) {
    if (VAR_26 != ((void*)0))
     FUNC_2(VAR_26);
    VAR_26 = ((void*)0);
    if (VAR_15)
     FUNC_14(FUNC_4(
         "mismatched replication level: "
         "both %s and %s vdevs are "
         "present\n"),
         VAR_24.zprl_type, VAR_25.zprl_type);
    else
     return (((void*)0));
   } else if (VAR_24.zprl_parity != VAR_25.zprl_parity) {
    if (VAR_26)
     FUNC_2(VAR_26);
    VAR_26 = ((void*)0);
    if (VAR_15)
     FUNC_14(FUNC_4(
         "mismatched replication level: "
         "both %llu and %llu device parity "
         "%s vdevs are present\n"),
         VAR_24.zprl_parity,
         VAR_25.zprl_parity,
         VAR_25.zprl_type);
    else
     return (((void*)0));
   } else if (VAR_24.zprl_children != VAR_25.zprl_children) {
    if (VAR_26)
     FUNC_2(VAR_26);
    VAR_26 = ((void*)0);
    if (VAR_15)
     FUNC_14(FUNC_4(
         "mismatched replication level: "
         "both %llu-way and %llu-way %s "
         "vdevs are present\n"),
         VAR_24.zprl_children,
         VAR_25.zprl_children,
         VAR_25.zprl_type);
    else
     return (((void*)0));
   }
  }
  VAR_24 = VAR_25;
 }

 if (VAR_26 != ((void*)0))
  *VAR_26 = VAR_25;

 return (VAR_26);
}
