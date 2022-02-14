
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int zlp_rewind; } ;
typedef TYPE_1__ zpool_load_policy_t ;
struct TYPE_14__ {char const* zpool_name; int zpool_config_size; int * zpool_hdl; } ;
typedef TYPE_2__ zpool_handle_t ;
struct TYPE_15__ {char* member_0; int zc_cookie; int zc_name; int zc_guid; } ;
typedef TYPE_3__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int ,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*,int **) ;
 scalar_t__ FUNC_10 (int *,TYPE_3__*,int *) ;
 int FUNC_11 (int *,int ,char*) ;
 int FUNC_12 (int *,int ,TYPE_3__*) ;
 int * FUNC_13 (TYPE_2__*,char const*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_14 (int *,TYPE_1__*) ;
 int FUNC_15 (int *,int ,int,int *) ;
 int FUNC_16 (int *,scalar_t__,char*) ;

int
FUNC_17(zpool_handle_t *VAR_11, const char *VAR_12, nvlist_t *VAR_13)
{
 zfs_cmd_t VAR_14 = {"\0"};
 char VAR_15[1024];
 nvlist_t *VAR_16;
 zpool_load_policy_t VAR_17;
 boolean_t VAR_18, VAR_19;
 libzfs_handle_t *VAR_20 = VAR_11->zpool_hdl;
 nvlist_t *VAR_21 = ((void*)0);
 int VAR_22;

 if (VAR_12)
  (void) FUNC_3(VAR_15, sizeof (VAR_15),
      FUNC_0(VAR_5, "cannot clear errors for %s"),
      VAR_12);
 else
  (void) FUNC_3(VAR_15, sizeof (VAR_15),
      FUNC_0(VAR_5, "cannot clear errors for %s"),
      VAR_11->zpool_name);

 (void) FUNC_4(VAR_14.zc_name, VAR_11->zpool_name, sizeof (VAR_14.zc_name));
 if (VAR_12) {
  if ((VAR_16 = FUNC_13(VAR_11, VAR_12, &VAR_18,
      &VAR_19, ((void*)0))) == ((void*)0))
   return (FUNC_11(VAR_20, VAR_4, VAR_15));





  if (VAR_18)
   return (FUNC_11(VAR_20, VAR_3, VAR_15));

  FUNC_5(FUNC_2(VAR_16, VAR_7,
      &VAR_14.zc_guid) == 0);
 }

 FUNC_14(VAR_13, &VAR_17);
 VAR_14.zc_cookie = VAR_17.zlp_rewind;

 if (FUNC_6(VAR_20, &VAR_14, VAR_11->zpool_config_size * 2) != 0)
  return (-1);

 if (FUNC_10(VAR_20, &VAR_14, VAR_13) != 0)
  return (-1);

 while ((VAR_22 = FUNC_12(VAR_20, VAR_6, &VAR_14)) != 0 &&
     VAR_10 == VAR_1) {
  if (FUNC_7(VAR_20, &VAR_14) != 0) {
   FUNC_8(&VAR_14);
   return (-1);
  }
 }

 if (!VAR_22 || ((VAR_17.zlp_rewind & VAR_9) &&
     VAR_10 != VAR_2 && VAR_10 != VAR_0)) {
  if (VAR_17.zlp_rewind &
      (VAR_8 | VAR_9)) {
   (void) FUNC_9(VAR_20, &VAR_14, &VAR_21);
   FUNC_15(VAR_20, VAR_14.zc_name,
       ((VAR_17.zlp_rewind & VAR_9) != 0),
       VAR_21);
   FUNC_1(VAR_21);
  }
  FUNC_8(&VAR_14);
  return (0);
 }

 FUNC_8(&VAR_14);
 return (FUNC_16(VAR_20, VAR_10, VAR_15));
}
