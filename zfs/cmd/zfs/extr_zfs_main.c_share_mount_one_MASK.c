
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct mnttab {char* mnt_mntopts; } ;
typedef int smbshareopts ;
typedef int shareopts ;
typedef int mountpoint ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
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
 scalar_t__ VAR_23 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_24 ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct mnttab*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_25 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,char const*,int) ;
 scalar_t__ FUNC_16 (int *,int ,char*,int,int *,int *,int ,int ) ;
 scalar_t__ FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int
FUNC_21(zfs_handle_t *VAR_26, int VAR_27, int VAR_28, char *VAR_29,
    boolean_t VAR_30, const char *VAR_31)
{
 char VAR_32[VAR_11];
 char VAR_33[VAR_11];
 char VAR_34[VAR_11];
 const char *VAR_35 = VAR_27 == 128 ? "share" : "mount";
 struct mnttab VAR_36;
 uint64_t VAR_37, VAR_38;
 boolean_t VAR_39, VAR_40;

 FUNC_0(FUNC_11(VAR_26) & VAR_22);







 VAR_37 = FUNC_17(VAR_26, VAR_21);

 if (VAR_37 && FUNC_3() == VAR_3) {
  if (!VAR_30)
   return (0);

  (void) FUNC_1(VAR_25, FUNC_2("cannot %s '%s': "
      "dataset is exported to a local zone\n"), VAR_35,
      FUNC_10(VAR_26));
  return (1);

 } else if (!VAR_37 && FUNC_3() != VAR_3) {
  if (!VAR_30)
   return (0);

  (void) FUNC_1(VAR_25, FUNC_2("cannot %s '%s': "
      "permission denied\n"), VAR_35,
      FUNC_10(VAR_26));
  return (1);
 }






 FUNC_9(FUNC_16(VAR_26, VAR_16, VAR_32,
     sizeof (VAR_32), ((void*)0), ((void*)0), 0, VAR_0) == 0);
 FUNC_9(FUNC_16(VAR_26, VAR_19, VAR_33,
     sizeof (VAR_33), ((void*)0), ((void*)0), 0, VAR_0) == 0);
 FUNC_9(FUNC_16(VAR_26, VAR_20, VAR_34,
     sizeof (VAR_34), ((void*)0), ((void*)0), 0, VAR_0) == 0);

 if (VAR_27 == 128 && FUNC_7(VAR_33, "off") == 0 &&
     FUNC_7(VAR_34, "off") == 0) {
  if (!VAR_30)
   return (0);

  (void) FUNC_1(VAR_25, FUNC_2("cannot share '%s': "
      "legacy share\n"), FUNC_10(VAR_26));
  (void) FUNC_1(VAR_25, "%s", FUNC_2("use share(1M) to "
      "share this filesystem, or set "
      "sharenfs property on\n"));
  return (1);
 }






 if (FUNC_7(VAR_32, "legacy") == 0) {
  if (!VAR_30)
   return (0);

  (void) FUNC_1(VAR_25, FUNC_2("cannot %s '%s': "
      "legacy mountpoint\n"), VAR_35, FUNC_10(VAR_26));
  (void) FUNC_1(VAR_25, FUNC_2("use %s(1M) to "
      "%s this filesystem\n"), VAR_35, VAR_35);
  return (1);
 }

 if (FUNC_7(VAR_32, "none") == 0) {
  if (!VAR_30)
   return (0);

  (void) FUNC_1(VAR_25, FUNC_2("cannot %s '%s': no "
      "mountpoint set\n"), VAR_35, FUNC_10(VAR_26));
  return (1);
 }
 VAR_38 = FUNC_17(VAR_26, VAR_12);
 if (VAR_38 == VAR_9) {
  if (!VAR_30)
   return (0);

  (void) FUNC_1(VAR_25, FUNC_2("cannot %s '%s': "
      "'canmount' property is set to 'off'\n"), VAR_35,
      FUNC_10(VAR_26));
  return (1);
 } else if (VAR_38 == VAR_8 && !VAR_30) {
  return (0);
 }





 if ((VAR_28 & VAR_6) == 0 &&
     FUNC_17(VAR_26, VAR_13) != VAR_23 &&
     FUNC_17(VAR_26, VAR_15) ==
     VAR_10) {
  if (!VAR_30)
   return (0);

  (void) FUNC_1(VAR_25, FUNC_2("cannot %s '%s': "
      "encryption key not loaded\n"), VAR_35, FUNC_10(VAR_26));
  return (1);
 }





 if (FUNC_17(VAR_26, VAR_14) &&
     FUNC_16(VAR_26, VAR_17,
     ((void*)0), 0, ((void*)0), ((void*)0), 0, VAR_1) == 0) {
  if (!VAR_30)
   return (0);

  (void) FUNC_1(VAR_25, FUNC_2("cannot %s '%s': "
      "Contains partially-completed state from "
      "\"zfs receive -s\", which can be resumed with "
      "\"zfs send -t\"\n"),
      VAR_35, FUNC_10(VAR_26));
  return (1);
 }

 if (FUNC_17(VAR_26, VAR_18) && !(VAR_28 & VAR_7)) {
  if (!VAR_30)
   return (0);

  (void) FUNC_1(VAR_25, FUNC_2("cannot %s '%s': "
      "Dataset is not complete, was created by receiving "
      "a redacted zfs send stream.\n"), VAR_35,
      FUNC_10(VAR_26));
  return (1);
 }
 switch (VAR_27) {
 case 128:

  VAR_39 = FUNC_13(VAR_26, ((void*)0));
  VAR_40 = FUNC_14(VAR_26, ((void*)0));

  if ((VAR_39 && VAR_40) ||
      (VAR_39 && FUNC_7(VAR_33, "on") == 0 &&
      FUNC_7(VAR_34, "off") == 0) ||
      (VAR_40 && FUNC_7(VAR_34, "on") == 0 &&
      FUNC_7(VAR_33, "off") == 0)) {
   if (!VAR_30)
    return (0);

   (void) FUNC_1(VAR_25, FUNC_2("cannot share "
       "'%s': filesystem already shared\n"),
       FUNC_10(VAR_26));
   return (1);
  }

  if (!FUNC_12(VAR_26, ((void*)0)) &&
      FUNC_15(VAR_26, ((void*)0), VAR_28) != 0)
   return (1);

  if (VAR_29 == ((void*)0)) {
   if (FUNC_20(VAR_26) != 0)
    return (1);
  } else if (FUNC_7(VAR_29, "nfs") == 0) {
   if (FUNC_18(VAR_26))
    return (1);
  } else if (FUNC_7(VAR_29, "smb") == 0) {
   if (FUNC_19(VAR_26))
    return (1);
  } else {
   (void) FUNC_1(VAR_25, FUNC_2("cannot share "
       "'%s': invalid share type '%s' "
       "specified\n"),
       FUNC_10(VAR_26), VAR_29);
   return (1);
  }

  break;

 case 129:
  if (VAR_31 == ((void*)0))
   VAR_36.mnt_mntopts = "";
  else
   VAR_36.mnt_mntopts = (char *)VAR_31;

  if (!FUNC_4(&VAR_36, VAR_5) &&
      FUNC_12(VAR_26, ((void*)0))) {
   if (!VAR_30)
    return (0);

   (void) FUNC_1(VAR_25, FUNC_2("cannot mount "
       "'%s': filesystem already mounted\n"),
       FUNC_10(VAR_26));
   return (1);
  }

  if (FUNC_15(VAR_26, VAR_31, VAR_28) != 0) {



   if (!VAR_30 &&
       FUNC_5(VAR_24) == VAR_2) {
    FUNC_8(10 * VAR_4);
    FUNC_6(VAR_24, VAR_0);

    if (FUNC_12(VAR_26, ((void*)0))) {
     (void) FUNC_1(VAR_25, FUNC_2(
         "Ignoring previous 'already "
         "mounted' error for '%s'\n"),
         FUNC_10(VAR_26));
     return (0);
    }
   }
   return (1);
  }
  break;
 }

 return (0);
}
