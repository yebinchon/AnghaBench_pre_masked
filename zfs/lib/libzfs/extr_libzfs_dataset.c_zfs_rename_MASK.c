
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char const* zfs_name; int * zfs_hdl; int zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_12__ {char* member_0; char* zc_name; char* zc_value; scalar_t__ zc_cookie; int zc_objset_type; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int prop_changelist_t ;
typedef int parent ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char const*) ;
 scalar_t__ FUNC_7 (int *,char const*,int *,int ,int *) ;
 char* FUNC_8 (int ,char*) ;
 scalar_t__ VAR_22 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*,int,char*,char const*) ;
 char* FUNC_13 (char const*,char) ;
 scalar_t__ FUNC_14 (char const*,char const*) ;
 int FUNC_15 (char*,char const*,int) ;
 int FUNC_16 (char*,char const*,int) ;
 scalar_t__ FUNC_17 (char const*,char const*,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int *,int ,char*) ;
 int FUNC_21 (int *,char*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (int *,int ,TYPE_2__*) ;
 TYPE_1__* FUNC_24 (int *,char*,int ) ;
 scalar_t__ FUNC_25 (TYPE_1__*,int ) ;
 int FUNC_26 (int *,scalar_t__,char*) ;
 char* FUNC_27 (int *,char const*) ;
 int FUNC_28 (int *,char const*,int ,int ) ;

int
FUNC_29(zfs_handle_t *VAR_23, const char *VAR_24, boolean_t VAR_25,
    boolean_t VAR_26)
{
 int VAR_27 = 0;
 zfs_cmd_t VAR_28 = {"\0"};
 char *VAR_29;
 prop_changelist_t *VAR_30 = ((void*)0);
 char VAR_31[VAR_17];
 libzfs_handle_t *VAR_32 = VAR_23->zfs_hdl;
 char VAR_33[1024];


 if (FUNC_14(VAR_23->zfs_name, VAR_24) == 0)
  return (0);

 (void) FUNC_12(VAR_33, sizeof (VAR_33), FUNC_8(VAR_15,
     "cannot rename to '%s'"), VAR_24);


 if (!FUNC_28(VAR_32, VAR_23->zfs_name, VAR_23->zfs_type, VAR_1))
  return (FUNC_20(VAR_32, VAR_11, VAR_33));




 if (VAR_23->zfs_type == VAR_21) {
  if ((FUNC_13(VAR_24, '@') == ((void*)0)) ||
      *VAR_24 == '@') {




   (void) FUNC_16(VAR_31, VAR_23->zfs_name,
       sizeof (VAR_31));
   VAR_29 = FUNC_13(VAR_31, '@');
   if (FUNC_13(VAR_24, '@') == ((void*)0))
    *(++VAR_29) = '\0';
   else
    *VAR_29 = '\0';
   (void) FUNC_15(VAR_31, VAR_24, sizeof (VAR_31));
   VAR_24 = VAR_31;
  } else {



   VAR_29 = FUNC_13(VAR_24, '@');
   if (FUNC_17(VAR_23->zfs_name, VAR_24, VAR_29 - VAR_24)
       != 0 || VAR_23->zfs_name[VAR_29 - VAR_24] != '@') {
    FUNC_21(VAR_32, FUNC_8(VAR_15,
        "snapshots must be part of same "
        "dataset"));
    return (FUNC_20(VAR_32, VAR_8,
        VAR_33));
   }
  }

  if (!FUNC_28(VAR_32, VAR_24, VAR_23->zfs_type, VAR_1))
   return (FUNC_20(VAR_32, VAR_11, VAR_33));
 } else {
  if (VAR_25) {
   FUNC_21(VAR_32, FUNC_8(VAR_15,
       "recursive rename must be a snapshot"));
   return (FUNC_20(VAR_32, VAR_7, VAR_33));
  }

  if (!FUNC_28(VAR_32, VAR_24, VAR_23->zfs_type, VAR_1))
   return (FUNC_20(VAR_32, VAR_11, VAR_33));


  if (FUNC_7(VAR_32, VAR_24, ((void*)0), VAR_0, ((void*)0)) != 0)
   return (-1);


  FUNC_18((VAR_29 = FUNC_13(VAR_24, '/')) != ((void*)0));
  if (FUNC_17(VAR_23->zfs_name, VAR_24, VAR_29 - VAR_24) != 0 ||
      VAR_23->zfs_name[VAR_29 - VAR_24] != '/') {
   FUNC_21(VAR_32, FUNC_8(VAR_15,
       "datasets must be within same pool"));
   return (FUNC_20(VAR_32, VAR_8, VAR_33));
  }


  if (FUNC_11(VAR_23->zfs_name, VAR_24)) {
   FUNC_21(VAR_32, FUNC_8(VAR_15,
       "New dataset name cannot be a descendant of "
       "current dataset name"));
   return (FUNC_20(VAR_32, VAR_11, VAR_33));
  }
 }

 (void) FUNC_12(VAR_33, sizeof (VAR_33),
     FUNC_8(VAR_15, "cannot rename '%s'"), VAR_23->zfs_name);

 if (FUNC_10() == VAR_13 &&
     FUNC_25(VAR_23, VAR_19)) {
  FUNC_21(VAR_32, FUNC_8(VAR_15,
      "dataset is used in a non-global zone"));
  return (FUNC_20(VAR_32, VAR_12, VAR_33));
 }

 if (VAR_25) {
  zfs_handle_t *VAR_34;
  char *VAR_35 = FUNC_27(VAR_23->zfs_hdl, VAR_23->zfs_name);
  if (VAR_35 == ((void*)0)) {
   VAR_27 = -1;
   goto error;
  }
  VAR_29 = FUNC_13(VAR_35, '@');
  *VAR_29 = '\0';
  VAR_34 = FUNC_24(VAR_23->zfs_hdl, VAR_35, VAR_20);
  FUNC_9(VAR_35);
  if (VAR_34 == ((void*)0)) {
   VAR_27 = -1;
   goto error;
  }
  FUNC_19(VAR_34);
 } else if (VAR_23->zfs_type != VAR_21) {
  if ((VAR_30 = FUNC_2(VAR_23, VAR_18,
      VAR_2,
      VAR_26 ? VAR_14 : 0)) == ((void*)0))
   return (-1);

  if (FUNC_3(VAR_30)) {
   FUNC_21(VAR_32, FUNC_8(VAR_15,
       "child dataset with inherited mountpoint is used "
       "in a non-global zone"));
   (void) FUNC_20(VAR_32, VAR_12, VAR_33);
   VAR_27 = -1;
   goto error;
  }

  if ((VAR_27 = FUNC_5(VAR_30)) != 0)
   goto error;
 }

 if (FUNC_0(VAR_23))
  VAR_28.zc_objset_type = VAR_4;
 else
  VAR_28.zc_objset_type = VAR_3;

 (void) FUNC_16(VAR_28.zc_name, VAR_23->zfs_name, sizeof (VAR_28.zc_name));
 (void) FUNC_16(VAR_28.zc_value, VAR_24, sizeof (VAR_28.zc_value));

 VAR_28.zc_cookie = VAR_25;

 if ((VAR_27 = FUNC_23(VAR_23->zfs_hdl, VAR_16, &VAR_28)) != 0) {




  (void) FUNC_12(VAR_33, sizeof (VAR_33), FUNC_8(VAR_15,
      "cannot rename '%s'"), VAR_28.zc_name);

  if (VAR_25 && VAR_22 == VAR_6) {
   FUNC_21(VAR_32, FUNC_8(VAR_15,
       "a child dataset already has a snapshot "
       "with the new name"));
   (void) FUNC_20(VAR_32, VAR_10, VAR_33);
  } else if (VAR_22 == VAR_5) {
   FUNC_21(VAR_32, FUNC_8(VAR_15,
       "cannot move encrypted child outside of "
       "its encryption root"));
   (void) FUNC_20(VAR_32, VAR_9, VAR_33);
  } else {
   (void) FUNC_26(VAR_23->zfs_hdl, VAR_22, VAR_33);
  }





  if (VAR_30 != ((void*)0))
   (void) FUNC_4(VAR_30);
 } else {
  if (VAR_30 != ((void*)0)) {
   FUNC_6(VAR_30, FUNC_22(VAR_23), VAR_24);
   VAR_27 = FUNC_4(VAR_30);
  }
 }

error:
 if (VAR_30 != ((void*)0)) {
  FUNC_1(VAR_30);
 }
 return (VAR_27);
}
