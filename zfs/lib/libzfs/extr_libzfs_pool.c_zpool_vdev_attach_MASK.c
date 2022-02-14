
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_12__ {char* member_0; int zc_cookie; int zc_guid; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;
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
 char* FUNC_0 (int ,char*) ;
 int VAR_15 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int ,int ,int **) ;
 scalar_t__ FUNC_5 (int *,int ,int ***,int*) ;
 scalar_t__ FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (char*,int,char*,char const*,char const*) ;
 int VAR_16 ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (int *,TYPE_2__*,int *) ;
 int FUNC_12 (int *,int ,char*) ;
 int FUNC_13 (int *,char*,...) ;
 int FUNC_14 (int *,int ,TYPE_2__*) ;
 int * FUNC_15 (TYPE_1__*,char const*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int *,int,char*) ;
 char* FUNC_20 (int *,int *,int *,int ) ;

int
FUNC_21(zpool_handle_t *VAR_17,
    const char *VAR_18, const char *VAR_19, nvlist_t *VAR_20, int VAR_21)
{
 zfs_cmd_t VAR_22 = {"\0"};
 char VAR_23[1024];
 int VAR_24;
 nvlist_t *VAR_25;
 boolean_t VAR_26, VAR_27, VAR_28;
 uint64_t VAR_29;
 char *VAR_30;
 nvlist_t **VAR_31;
 uint_t VAR_32;
 nvlist_t *VAR_33;
 libzfs_handle_t *VAR_34 = VAR_17->zpool_hdl;
 boolean_t VAR_35 = FUNC_18(VAR_17);

 if (VAR_21)
  (void) FUNC_7(VAR_23, sizeof (VAR_23), FUNC_0(VAR_8,
      "cannot replace %s with %s"), VAR_18, VAR_19);
 else
  (void) FUNC_7(VAR_23, sizeof (VAR_23), FUNC_0(VAR_8,
      "cannot attach %s to %s"), VAR_19, VAR_18);

 (void) FUNC_8(VAR_22.zc_name, VAR_17->zpool_name, sizeof (VAR_22.zc_name));
 if ((VAR_25 = FUNC_15(VAR_17, VAR_18, &VAR_26, &VAR_27,
     &VAR_28)) == ((void*)0))
  return (FUNC_12(VAR_34, VAR_6, VAR_23));

 if (VAR_26)
  return (FUNC_12(VAR_34, VAR_5, VAR_23));

 if (VAR_27)
  return (FUNC_12(VAR_34, VAR_4, VAR_23));

 FUNC_9(FUNC_6(VAR_25, VAR_11, &VAR_22.zc_guid) == 0);
 VAR_22.zc_cookie = VAR_21;

 if (FUNC_5(VAR_20, VAR_10,
     &VAR_31, &VAR_32) != 0 || VAR_32 != 1) {
  FUNC_13(VAR_34, FUNC_0(VAR_8,
      "new device must be a single disk"));
  return (FUNC_12(VAR_34, VAR_3, VAR_23));
 }

 FUNC_9(FUNC_4(FUNC_16(VAR_17, ((void*)0)),
     VAR_13, &VAR_33) == 0);

 if ((VAR_30 = FUNC_20(((void*)0), ((void*)0), VAR_31[0], 0)) == ((void*)0))
  return (-1);





 if (VAR_21 &&
     FUNC_6(VAR_25, VAR_12, &VAR_29) == 0 &&
     (FUNC_15(VAR_17, VAR_30, &VAR_26, &VAR_27,
     ((void*)0)) == ((void*)0) || !VAR_26) &&
     FUNC_3(VAR_33, VAR_25, 1)) {
  FUNC_13(VAR_34, FUNC_0(VAR_8,
      "can only be replaced by another hot spare"));
  FUNC_2(VAR_30);
  return (FUNC_12(VAR_34, VAR_1, VAR_23));
 }

 FUNC_2(VAR_30);

 if (FUNC_11(VAR_34, &VAR_22, VAR_20) != 0)
  return (-1);

 VAR_24 = FUNC_14(VAR_34, VAR_9, &VAR_22);

 FUNC_10(&VAR_22);

 if (VAR_24 == 0) {
  if (VAR_35) {




   (void) FUNC_1(VAR_16, "%s", FUNC_0(VAR_8, "Make "
       "sure to wait until resilver is done "
       "before rebooting.\n"));
  }
  return (0);
 }

 switch (VAR_15) {
 case 129:



  if (VAR_21) {
   uint64_t VAR_36 = FUNC_17(VAR_17,
       VAR_14, ((void*)0));

   if (VAR_28)
    FUNC_13(VAR_34, FUNC_0(VAR_8,
        "cannot replace a log with a spare"));
   else if (VAR_36 >= VAR_7)
    FUNC_13(VAR_34, FUNC_0(VAR_8,
        "already in replacing/spare config; wait "
        "for completion or use 'zpool detach'"));
   else
    FUNC_13(VAR_34, FUNC_0(VAR_8,
        "cannot replace a replacing device"));
  } else {
   FUNC_13(VAR_34, FUNC_0(VAR_8,
       "can only attach to mirrors and top-level "
       "disks"));
  }
  (void) FUNC_12(VAR_34, VAR_1, VAR_23);
  break;

 case 131:



  FUNC_13(VAR_34, FUNC_0(VAR_8,
      "new device must be a single disk"));
  (void) FUNC_12(VAR_34, VAR_3, VAR_23);
  break;

 case 133:
  FUNC_13(VAR_34, FUNC_0(VAR_8, "%s is busy, "
      "or device removal is in progress"),
      VAR_19);
  (void) FUNC_12(VAR_34, VAR_0, VAR_23);
  break;

 case 128:



  FUNC_13(VAR_34, FUNC_0(VAR_8,
      "device is too small"));
  (void) FUNC_12(VAR_34, VAR_0, VAR_23);
  break;

 case 132:



  FUNC_13(VAR_34, FUNC_0(VAR_8,
      "new device has a different optimal sector size; use the "
      "option '-o ashift=N' to override the optimal size"));
  (void) FUNC_12(VAR_34, VAR_0, VAR_23);
  break;

 case 130:



  (void) FUNC_12(VAR_34, VAR_2, VAR_23);
  break;

 default:
  (void) FUNC_19(VAR_34, VAR_15, VAR_23);
 }

 return (-1);
}
