
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
struct TYPE_10__ {char const* zfs_name; int * zfs_hdl; int zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_11__ {char* member_0; int zc_value; int zc_name; int zc_cookie; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int prop_changelist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ,char*) ;
 int VAR_13 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,int,char*,char const*,char const*) ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_16 (char const*) ;
 scalar_t__ FUNC_17 (TYPE_1__*,int ) ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 char* FUNC_20 (scalar_t__) ;
 int FUNC_21 (char const*) ;
 int FUNC_22 (scalar_t__,int ,int ) ;
 int FUNC_23 (int *,int ,char*) ;

int
FUNC_24(zfs_handle_t *VAR_14, const char *VAR_15, boolean_t VAR_16)
{
 zfs_cmd_t VAR_17 = {"\0"};
 int VAR_18;
 prop_changelist_t *VAR_19;
 libzfs_handle_t *VAR_20 = VAR_14->zfs_hdl;
 char VAR_21[1024];
 zfs_prop_t VAR_22;

 (void) FUNC_8(VAR_21, sizeof (VAR_21), FUNC_5(VAR_8,
     "cannot inherit %s for '%s'"), VAR_15, VAR_14->zfs_name);

 VAR_17.zc_cookie = VAR_16;
 if ((VAR_22 = FUNC_16(VAR_15)) == VAR_12) {




  if (!FUNC_21(VAR_15)) {
   FUNC_11(VAR_20, FUNC_5(VAR_8,
       "invalid property"));
   return (FUNC_10(VAR_20, VAR_1, VAR_21));
  }

  (void) FUNC_9(VAR_17.zc_name, VAR_14->zfs_name, sizeof (VAR_17.zc_name));
  (void) FUNC_9(VAR_17.zc_value, VAR_15, sizeof (VAR_17.zc_value));

  if (FUNC_12(VAR_14->zfs_hdl, VAR_9, &VAR_17) != 0)
   return (FUNC_23(VAR_20, VAR_13, VAR_21));

  return (0);
 }




 if (FUNC_19(VAR_22))
  return (FUNC_10(VAR_20, VAR_3, VAR_21));

 if (!FUNC_18(VAR_22) && !VAR_16)
  return (FUNC_10(VAR_20, VAR_2, VAR_21));




 if (!FUNC_22(VAR_22, VAR_14->zfs_type, VAR_0))
  return (FUNC_10(VAR_20, VAR_4, VAR_21));




 VAR_15 = FUNC_20(VAR_22);
 (void) FUNC_9(VAR_17.zc_name, VAR_14->zfs_name, sizeof (VAR_17.zc_name));
 (void) FUNC_9(VAR_17.zc_value, VAR_15, sizeof (VAR_17.zc_value));

 if (VAR_22 == VAR_10 && FUNC_7() == VAR_6 &&
     FUNC_17(VAR_14, VAR_11)) {
  FUNC_11(VAR_20, FUNC_5(VAR_8,
      "dataset is used in a non-global zone"));
  return (FUNC_10(VAR_20, VAR_5, VAR_21));
 }




 if ((VAR_19 = FUNC_1(VAR_14, VAR_22, 0, 0)) == ((void*)0))
  return (-1);

 if (VAR_22 == VAR_10 && FUNC_2(VAR_19)) {
  FUNC_11(VAR_20, FUNC_5(VAR_8,
      "child dataset with inherited mountpoint is used "
      "in a non-global zone"));
  VAR_18 = FUNC_10(VAR_20, VAR_5, VAR_21);
  goto error;
 }

 if ((VAR_18 = FUNC_4(VAR_19)) != 0)
  goto error;

 if ((VAR_18 = FUNC_12(VAR_14->zfs_hdl, VAR_9, &VAR_17)) != 0) {
  return (FUNC_23(VAR_20, VAR_13, VAR_21));
 } else {

  if ((VAR_18 = FUNC_3(VAR_19)) != 0)
   goto error;




  (void) FUNC_6(VAR_14);






  if (FUNC_14(VAR_22) &&
      FUNC_13(VAR_14, ((void*)0)))
   VAR_18 = FUNC_15(VAR_14, VAR_7, 0);
 }

error:
 FUNC_0(VAR_19);
 return (VAR_18);
}
