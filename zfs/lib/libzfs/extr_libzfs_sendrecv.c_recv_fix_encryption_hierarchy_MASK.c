
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* dds_origin; } ;
struct TYPE_11__ {TYPE_1__ zfs_dmustats; } ;
typedef TYPE_2__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int keylocation ;
typedef int boolean_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,char const*,scalar_t__,int ,char*) ;
 int FUNC_2 (char*,int ,int *,int *,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*,int **) ;
 scalar_t__ FUNC_5 (int *,int ,char**) ;
 int * FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 scalar_t__ FUNC_8 (int *,scalar_t__*) ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int*,int *) ;
 TYPE_2__* FUNC_13 (int *,char*,int ) ;
 int FUNC_14 (TYPE_2__*,int ,char*,int,int *,int *,int ,int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_2__*,int ,char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_19(libzfs_handle_t *VAR_11, const char *VAR_12,
    nvlist_t *VAR_13, avl_tree_t *VAR_14)
{
 int VAR_15;
 nvpair_t *VAR_16 = ((void*)0);
 nvlist_t *VAR_17;

 FUNC_0(0 == FUNC_4(VAR_13, "fss", &VAR_17));

 while ((VAR_16 = FUNC_6(VAR_17, VAR_16)) != ((void*)0)) {
  zfs_handle_t *VAR_18 = ((void*)0);
  uint64_t VAR_19;
  nvlist_t *VAR_20, *VAR_21, *VAR_22 = ((void*)0);
  nvpair_t *VAR_23 = ((void*)0);
  boolean_t VAR_24, VAR_25, VAR_26;
  char *VAR_27;
  char *VAR_28 = ((void*)0);
  char VAR_29[VAR_5];
  char VAR_30[VAR_6];

  VAR_29[0] = '\0';
  FUNC_0(0 == FUNC_7(VAR_16, &VAR_22));
  FUNC_0(0 == FUNC_4(VAR_22, "snaps", &VAR_20));
  FUNC_0(0 == FUNC_4(VAR_22, "props", &VAR_21));
  VAR_26 = FUNC_3(VAR_22, "is_encroot");


  VAR_15 = VAR_4;
  while ((VAR_23 = FUNC_6(VAR_20, VAR_23)) != ((void*)0)) {
   uint64_t VAR_31;

   FUNC_0(0 == FUNC_8(VAR_23, &VAR_31));
   VAR_15 = FUNC_1(VAR_11, VAR_12, VAR_31, VAR_0,
       VAR_30);
   if (VAR_15 == 0)
    break;
  }

  if (VAR_15 != 0)
   continue;

  VAR_27 = FUNC_9(VAR_30, '@');
  if (VAR_27 != ((void*)0))
   *VAR_27 = '\0';

  VAR_18 = FUNC_13(VAR_11, VAR_30, VAR_9);
  if (VAR_18 == ((void*)0)) {
   VAR_15 = VAR_4;
   goto error;
  }

  VAR_19 = FUNC_15(VAR_18, VAR_7);
  VAR_25 = VAR_18->zfs_dmustats.dds_origin[0] != '\0';
  (void) FUNC_12(VAR_18, &VAR_24, ((void*)0));


  if (VAR_19 == VAR_10) {
   FUNC_11(VAR_18);
   continue;
  }






  if (VAR_26) {
   if (!VAR_25 && !VAR_24) {
    VAR_15 = FUNC_2(VAR_30,
        VAR_3, ((void*)0), ((void*)0), 0);
    if (VAR_15 != 0) {
     FUNC_11(VAR_18);
     goto error;
    }
   }

   FUNC_0(0 == FUNC_5(VAR_21,
       FUNC_17(VAR_8),
       &VAR_28));





   FUNC_18(VAR_18);
   VAR_15 = FUNC_14(VAR_18, VAR_8,
       VAR_29, sizeof (VAR_29), ((void*)0), ((void*)0),
       0, VAR_1);
   if (VAR_15 != 0) {
    FUNC_11(VAR_18);
    goto error;
   }

   if (FUNC_10(VAR_29, VAR_28) != 0) {
    VAR_15 = FUNC_16(VAR_18,
        FUNC_17(VAR_8),
        VAR_28);
    if (VAR_15 != 0) {
     FUNC_11(VAR_18);
     goto error;
    }
   }
  }







  if (!VAR_26 && VAR_24 &&
      FUNC_10(VAR_12, VAR_30) != 0) {
   VAR_15 = FUNC_2(VAR_30, VAR_2,
       ((void*)0), ((void*)0), 0);
   if (VAR_15 != 0) {
    FUNC_11(VAR_18);
    goto error;
   }
  }

  FUNC_11(VAR_18);
 }

 return (0);

error:
 return (VAR_15);
}
