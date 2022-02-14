
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* member_0; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_9__ {int import; int create; } ;
typedef TYPE_2__ prop_flags_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;





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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_16 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,char**) ;
 int FUNC_8 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char const*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_13 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_14 (int *,int *,int *,int *,int ,int **,int *) ;
 int FUNC_15 (int *,int ,char*) ;
 int FUNC_16 (int *,char*,...) ;
 int FUNC_17 (int *,int ,TYPE_1__*) ;
 int FUNC_18 (int ,char*,int) ;
 int FUNC_19 (int ) ;
 int * FUNC_20 (int *,int ,int *,int,int *,int *,int ,char*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int ,char const*) ;
 int FUNC_23 (int *,int,char*) ;
 int * FUNC_24 (int *,char const*,int *,int ,TYPE_2__,char*) ;

int
FUNC_25(libzfs_handle_t *VAR_17, const char *VAR_18, nvlist_t *VAR_19,
    nvlist_t *VAR_20, nvlist_t *VAR_21)
{
 zfs_cmd_t VAR_22 = {"\0"};
 nvlist_t *VAR_23 = ((void*)0);
 nvlist_t *VAR_24 = ((void*)0);
 nvlist_t *VAR_25 = ((void*)0);
 uint8_t *VAR_26 = ((void*)0);
 uint_t VAR_27 = 0;
 char VAR_28[1024];
 int VAR_29 = -1;

 (void) FUNC_8(VAR_28, sizeof (VAR_28), FUNC_0(VAR_9,
     "cannot create '%s'"), VAR_18);

 if (!FUNC_22(VAR_17, VAR_0, VAR_18))
  return (FUNC_15(VAR_17, VAR_5, VAR_28));

 if (FUNC_12(VAR_17, &VAR_22, VAR_19) != 0)
  return (-1);

 if (VAR_20) {
  prop_flags_t VAR_30 = { .create = VAR_1, .import = VAR_0 };

  if ((VAR_24 = FUNC_24(VAR_17, VAR_18, VAR_20,
      VAR_8, VAR_30, VAR_28)) == ((void*)0)) {
   goto create_failed;
  }
 }

 if (VAR_21) {
  uint64_t VAR_31;
  char *VAR_32;

  VAR_31 = ((FUNC_7(VAR_21,
      FUNC_19(VAR_12), &VAR_32) == 0) &&
      FUNC_9(VAR_32, "on") == 0);

  if ((VAR_23 = FUNC_20(VAR_17, VAR_13,
      VAR_21, VAR_31, ((void*)0), ((void*)0), VAR_1, VAR_28)) == ((void*)0)) {
   goto create_failed;
  }

  if (FUNC_5(VAR_23,
      FUNC_19(VAR_11)) &&
      !FUNC_21(VAR_19)) {
   FUNC_16(VAR_17, FUNC_0(VAR_9,
       "%s property requires a special vdev"),
       FUNC_19(VAR_11));
   (void) FUNC_15(VAR_17, VAR_3, VAR_28);
   goto create_failed;
  }

  if (!VAR_24 &&
      (FUNC_4(&VAR_24, VAR_6, 0) != 0)) {
   goto create_failed;
  }
  if (FUNC_14(VAR_17, ((void*)0), VAR_23, VAR_20, VAR_1,
      &VAR_26, &VAR_27) != 0) {
   FUNC_15(VAR_17, VAR_4, VAR_28);
   goto create_failed;
  }
  if (FUNC_2(VAR_24,
      VAR_15, VAR_23) != 0) {
   goto create_failed;
  }
  if (VAR_26 != ((void*)0)) {
   if (FUNC_4(&VAR_25, VAR_6, 0) != 0)
    goto create_failed;

   if (FUNC_3(VAR_25, "wkeydata",
       VAR_26, VAR_27) != 0)
    goto create_failed;

   if (FUNC_2(VAR_24, VAR_14,
       VAR_25) != 0)
    goto create_failed;
  }
 }

 if (VAR_24 && FUNC_13(VAR_17, &VAR_22, VAR_24) != 0)
  goto create_failed;

 (void) FUNC_10(VAR_22.zc_name, VAR_18, sizeof (VAR_22.zc_name));

 if ((VAR_29 = FUNC_17(VAR_17, VAR_10, &VAR_22)) != 0) {

  FUNC_11(&VAR_22);
  FUNC_6(VAR_24);
  FUNC_6(VAR_23);
  FUNC_6(VAR_25);
  if (VAR_26 != ((void*)0))
   FUNC_1(VAR_26);

  switch (VAR_16) {
  case 132:







   FUNC_16(VAR_17, FUNC_0(VAR_9,
       "one or more vdevs refer to the same device, or "
       "one of\nthe devices is part of an active md or "
       "lvm device"));
   return (FUNC_15(VAR_17, VAR_2, VAR_28));

  case 128:
   FUNC_16(VAR_17, FUNC_0(VAR_9,
       "record size invalid"));
   return (FUNC_15(VAR_17, VAR_3, VAR_28));

  case 129:






   {
    char VAR_33[64];

    FUNC_18(VAR_7, VAR_33,
        sizeof (VAR_33));

    FUNC_16(VAR_17, FUNC_0(VAR_9,
        "one or more devices is less than the "
        "minimum size (%s)"), VAR_33);
   }
   return (FUNC_15(VAR_17, VAR_2, VAR_28));

  case 131:
   FUNC_16(VAR_17, FUNC_0(VAR_9,
       "one or more devices is out of space"));
   return (FUNC_15(VAR_17, VAR_2, VAR_28));

  case 130:
   FUNC_16(VAR_17, FUNC_0(VAR_9,
       "cache device must be a disk or disk slice"));
   return (FUNC_15(VAR_17, VAR_2, VAR_28));

  default:
   return (FUNC_23(VAR_17, VAR_16, VAR_28));
  }
 }

create_failed:
 FUNC_11(&VAR_22);
 FUNC_6(VAR_24);
 FUNC_6(VAR_23);
 FUNC_6(VAR_25);
 if (VAR_26 != ((void*)0))
  FUNC_1(VAR_26);
 return (VAR_29);
}
