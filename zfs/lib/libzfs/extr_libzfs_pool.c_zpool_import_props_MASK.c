
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int zlp_rewind; } ;
typedef TYPE_1__ zpool_load_policy_t ;
typedef int zpool_handle_t ;
struct TYPE_14__ {char* member_0; int zc_nvlist_conf_size; int zc_cookie; void* zc_guid; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef void* uint64_t ;
struct TYPE_15__ {int import; int create; } ;
typedef TYPE_3__ prop_flags_t ;
typedef int nvlist_t ;
typedef void* mmp_state_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int desc ;
typedef int aux ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_25 ;
 char* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int **) ;
 scalar_t__ FUNC_6 (int *,int ,char**) ;
 scalar_t__ FUNC_7 (int *,int ,void**) ;
 int FUNC_8 (int *,int *,int *,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,char*,...) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_14 (int *,TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int *,TYPE_2__*,int **) ;
 scalar_t__ FUNC_17 (int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_18 (int *,TYPE_2__*,int *) ;
 int FUNC_19 (int *,int ,char*) ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (int *,int ,char*,char const*) ;
 int FUNC_22 (int *,int ,TYPE_2__*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,char*,int,int *) ;
 int FUNC_25 (int *,TYPE_1__*) ;
 int FUNC_26 (int *,int ,char const*) ;
 scalar_t__ FUNC_27 (int *,char*,int **) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,char*,int,int *) ;
 int FUNC_30 (int *,int,char*) ;
 int * FUNC_31 (int *,char*,int *,void*,TYPE_3__,char*) ;

int
FUNC_32(libzfs_handle_t *VAR_26, nvlist_t *VAR_27, const char *VAR_28,
    nvlist_t *VAR_29, int VAR_30)
{
 zfs_cmd_t VAR_31 = {"\0"};
 zpool_load_policy_t VAR_32;
 nvlist_t *VAR_33 = ((void*)0);
 nvlist_t *VAR_34 = ((void*)0);
 nvlist_t *VAR_35 = ((void*)0);
 char *VAR_36;
 char *VAR_37;
 int VAR_38;
 int VAR_39 = 0;
 char VAR_40[1024];

 FUNC_12(FUNC_6(VAR_27, VAR_20,
     &VAR_37) == 0);

 (void) FUNC_10(VAR_40, sizeof (VAR_40), FUNC_0(VAR_11,
     "cannot import pool '%s'"), VAR_37);

 if (VAR_28 != ((void*)0)) {
  if (!FUNC_26(VAR_26, VAR_0, VAR_28))
   return (FUNC_21(VAR_26, VAR_7,
       FUNC_0(VAR_11, "cannot import '%s'"),
       VAR_28));
  VAR_36 = (char *)VAR_28;
 } else {
  VAR_36 = VAR_37;
 }

 if (VAR_29 != ((void*)0)) {
  uint64_t VAR_41;
  prop_flags_t VAR_42 = { .create = VAR_0, .import = VAR_1 };

  FUNC_12(FUNC_7(VAR_27, VAR_22,
      &VAR_41) == 0);

  if ((VAR_29 = FUNC_31(VAR_26, VAR_37,
      VAR_29, VAR_41, VAR_42, VAR_40)) == ((void*)0))
   return (-1);
  if (FUNC_18(VAR_26, &VAR_31, VAR_29) != 0) {
   FUNC_4(VAR_29);
   return (-1);
  }
  FUNC_4(VAR_29);
 }

 (void) FUNC_11(VAR_31.zc_name, VAR_36, sizeof (VAR_31.zc_name));

 FUNC_12(FUNC_7(VAR_27, VAR_19,
     &VAR_31.zc_guid) == 0);

 if (FUNC_17(VAR_26, &VAR_31, VAR_27) != 0) {
  FUNC_15(&VAR_31);
  return (-1);
 }
 if (FUNC_13(VAR_26, &VAR_31, VAR_31.zc_nvlist_conf_size * 2) != 0) {
  FUNC_15(&VAR_31);
  return (-1);
 }

 VAR_31.zc_cookie = VAR_30;
 while ((VAR_38 = FUNC_22(VAR_26, VAR_12, &VAR_31)) != 0 &&
     VAR_25 == VAR_2) {
  if (FUNC_14(VAR_26, &VAR_31) != 0) {
   FUNC_15(&VAR_31);
   return (-1);
  }
 }
 if (VAR_38 != 0)
  VAR_39 = VAR_25;

 (void) FUNC_16(VAR_26, &VAR_31, &VAR_33);

 FUNC_15(&VAR_31);

 FUNC_25(VAR_27, &VAR_32);

 if (VAR_39) {
  char VAR_43[1024];
  char VAR_44[256];





  if (VAR_32.zlp_rewind & VAR_24) {
   FUNC_29(VAR_26, VAR_28 ? VAR_37 : VAR_36,
       VAR_1, VAR_33);
   FUNC_4(VAR_33);
   return (-1);
  }

  if (VAR_28 == ((void*)0))
   (void) FUNC_10(VAR_43, sizeof (VAR_43),
       FUNC_0(VAR_11, "cannot import '%s'"),
       VAR_36);
  else
   (void) FUNC_10(VAR_43, sizeof (VAR_43),
       FUNC_0(VAR_11, "cannot import '%s' as '%s'"),
       VAR_37, VAR_36);

  switch (VAR_39) {
  case 131:
   if (VAR_33 != ((void*)0) && FUNC_5(VAR_33,
       VAR_14, &VAR_34) == 0 &&
       FUNC_3(VAR_34, VAR_21)) {
    (void) FUNC_9(FUNC_0(VAR_11, "This "
        "pool uses the following feature(s) not "
        "supported by this system:\n"));
    FUNC_28(VAR_33);
    if (FUNC_3(VAR_34,
        VAR_13)) {
     (void) FUNC_9(FUNC_0(VAR_11,
         "All unsupported features are only "
         "required for writing to the pool."
         "\nThe pool can be imported using "
         "'-o readonly=on'.\n"));
    }
   }



   (void) FUNC_19(VAR_26, VAR_5, VAR_43);
   break;

  case 129:
   if (VAR_33 != ((void*)0) && FUNC_5(VAR_33,
       VAR_14, &VAR_34) == 0) {
    char *VAR_45 = "<unknown>";
    uint64_t VAR_46 = 0;
    mmp_state_t VAR_47;

    VAR_47 = FUNC_2(VAR_34,
        VAR_18);

    if (FUNC_3(VAR_34,
        VAR_17))
     VAR_45 = FUNC_1(VAR_34,
         VAR_17);

    if (FUNC_3(VAR_34,
        VAR_16))
     VAR_46 = FUNC_2(VAR_34,
         VAR_16);

    if (VAR_47 == VAR_9) {
     (void) FUNC_10(VAR_44, sizeof (VAR_44),
         FUNC_0(VAR_11, "pool is imp"
         "orted on host '%s' (hostid=%lx).\n"
         "Export the pool on the other "
         "system, then run 'zpool import'."),
         VAR_45, (unsigned long) VAR_46);
    } else if (VAR_47 == VAR_10) {
     (void) FUNC_10(VAR_44, sizeof (VAR_44),
         FUNC_0(VAR_11, "pool has "
         "the multihost property on and "
         "the\nsystem's hostid is not set. "
         "Set a unique system hostid with "
         "the zgenhostid(8) command.\n"));
    }

    (void) FUNC_20(VAR_26, VAR_44);
   }
   (void) FUNC_19(VAR_26, VAR_3, VAR_43);
   break;

  case 133:
   (void) FUNC_19(VAR_26, VAR_6, VAR_43);
   break;

  case 128:
   FUNC_20(VAR_26, FUNC_0(VAR_11,
       "one or more devices is read only"));
   (void) FUNC_19(VAR_26, VAR_4, VAR_43);
   break;

  case 130:
   if (VAR_33 && FUNC_5(VAR_33,
       VAR_14, &VAR_34) == 0 &&
       FUNC_5(VAR_34,
       VAR_15, &VAR_35) == 0) {
    (void) FUNC_9(FUNC_0(VAR_11,
        "The devices below are missing or "
        "corrupted, use '-m' to import the pool "
        "anyway:\n"));
    FUNC_8(VAR_26, ((void*)0), VAR_35, 2);
    (void) FUNC_9("\n");
   }
   (void) FUNC_30(VAR_26, VAR_39, VAR_43);
   break;

  case 134:
   (void) FUNC_30(VAR_26, VAR_39, VAR_43);
   break;

  case 135:
   FUNC_20(VAR_26, FUNC_0(VAR_11,
       "one or more devices are already in use\n"));
   (void) FUNC_19(VAR_26, VAR_4, VAR_43);
   break;
  case 132:
   FUNC_20(VAR_26, FUNC_0(VAR_11,
       "new name of at least one dataset is longer than "
       "the maximum allowable length"));
   (void) FUNC_19(VAR_26, VAR_8, VAR_43);
   break;
  default:
   (void) FUNC_30(VAR_26, VAR_39, VAR_43);
   FUNC_24(VAR_26,
       VAR_28 ? VAR_37 : VAR_36, -VAR_39, VAR_33);
   break;
  }

  FUNC_4(VAR_33);
  VAR_38 = -1;
 } else {
  zpool_handle_t *VAR_48;




  if (FUNC_27(VAR_26, VAR_36, &VAR_48) != 0)
   VAR_38 = -1;
  else if (VAR_48 != ((void*)0))
   FUNC_23(VAR_48);
  if (VAR_32.zlp_rewind &
      (VAR_23 | VAR_24)) {
   FUNC_29(VAR_26, VAR_28 ? VAR_37 : VAR_36,
       ((VAR_32.zlp_rewind & VAR_24) != 0), VAR_33);
  }
  FUNC_4(VAR_33);
  return (0);
 }

 return (VAR_38);
}
