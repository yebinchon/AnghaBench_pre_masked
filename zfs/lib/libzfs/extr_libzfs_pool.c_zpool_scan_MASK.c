
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zpool_config; int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_7__ {char* member_0; int zc_name; scalar_t__ zc_flags; scalar_t__ zc_cookie; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef scalar_t__ pool_scrub_cmd_t ;
struct TYPE_8__ {scalar_t__ pss_func; } ;
typedef TYPE_3__ pool_scan_stat_t ;
typedef scalar_t__ pool_scan_func_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int *,int ,int **,int *) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int ,char*) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_2__*) ;
 int FUNC_9 (int *,int,char*) ;

int
FUNC_10(zpool_handle_t *VAR_19, pool_scan_func_t VAR_20, pool_scrub_cmd_t VAR_21)
{
 zfs_cmd_t VAR_22 = {"\0"};
 char VAR_23[1024];
 int VAR_24;
 libzfs_handle_t *VAR_25 = VAR_19->zpool_hdl;

 (void) FUNC_5(VAR_22.zc_name, VAR_19->zpool_name, sizeof (VAR_22.zc_name));
 VAR_22.zc_cookie = VAR_20;
 VAR_22.zc_flags = VAR_21;

 if (FUNC_8(VAR_25, VAR_15, &VAR_22) == 0)
  return (0);

 VAR_24 = VAR_18;


 if (VAR_24 == VAR_1 && VAR_20 == VAR_11 &&
     VAR_21 == VAR_12)
  return (0);

 if (VAR_24 == VAR_2 && VAR_20 != VAR_9 && VAR_21 == VAR_12)
  return (0);

 if (VAR_20 == VAR_11) {
  if (VAR_21 == VAR_13) {
   (void) FUNC_4(VAR_23, sizeof (VAR_23), FUNC_1(VAR_14,
       "cannot pause scrubbing %s"), VAR_22.zc_name);
  } else {
   FUNC_0(VAR_21 == VAR_12);
   (void) FUNC_4(VAR_23, sizeof (VAR_23), FUNC_1(VAR_14,
       "cannot scrub %s"), VAR_22.zc_name);
  }
 } else if (VAR_20 == VAR_10) {
  FUNC_0(VAR_21 == VAR_12);
  (void) FUNC_4(VAR_23, sizeof (VAR_23), FUNC_1(VAR_14,
      "cannot restart resilver on %s"), VAR_22.zc_name);
 } else if (VAR_20 == VAR_9) {
  (void) FUNC_4(VAR_23, sizeof (VAR_23),
      FUNC_1(VAR_14, "cannot cancel scrubbing %s"),
      VAR_22.zc_name);
 } else {
  FUNC_0(!"unexpected result");
 }

 if (VAR_24 == VAR_0) {
  nvlist_t *VAR_26;
  pool_scan_stat_t *VAR_27 = ((void*)0);
  uint_t VAR_28;

  FUNC_6(FUNC_2(VAR_19->zpool_config,
      VAR_17, &VAR_26) == 0);
  (void) FUNC_3(VAR_26,
      VAR_16, (uint64_t **)&VAR_27, &VAR_28);
  if (VAR_27 && VAR_27->pss_func == VAR_11) {
   if (VAR_21 == VAR_13)
    return (FUNC_7(VAR_25, VAR_8, VAR_23));
   else
    return (FUNC_7(VAR_25, VAR_7, VAR_23));
  } else {
   return (FUNC_7(VAR_25, VAR_6, VAR_23));
  }
 } else if (VAR_24 == VAR_2) {
  return (FUNC_7(VAR_25, VAR_5, VAR_23));
 } else if (VAR_24 == VAR_3 && VAR_20 == VAR_10) {
  return (FUNC_7(VAR_25, VAR_4, VAR_23));
 } else {
  return (FUNC_9(VAR_25, VAR_24, VAR_23));
 }
}
