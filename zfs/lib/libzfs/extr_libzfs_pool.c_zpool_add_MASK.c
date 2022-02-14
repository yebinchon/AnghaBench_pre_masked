
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_9__ {char* member_0; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef int buf ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int *,int ,int ***,int *) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*,int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,char*,...) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_2__*) ;
 int FUNC_9 (int ,char*,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,int *) ;
 int FUNC_11 (int *,int,char*) ;

int
FUNC_12(zpool_handle_t *VAR_11, nvlist_t *VAR_12)
{
 zfs_cmd_t VAR_13 = {"\0"};
 int VAR_14;
 libzfs_handle_t *VAR_15 = VAR_11->zpool_hdl;
 char VAR_16[1024];
 nvlist_t **VAR_17, **VAR_18;
 uint_t VAR_19, VAR_20;

 (void) FUNC_2(VAR_16, sizeof (VAR_16), FUNC_0(VAR_5,
     "cannot add to '%s'"), VAR_11->zpool_name);

 if (FUNC_10(VAR_11, VAR_9, ((void*)0)) <
     VAR_4 &&
     FUNC_1(VAR_12, VAR_8,
     &VAR_17, &VAR_19) == 0) {
  FUNC_7(VAR_15, FUNC_0(VAR_5, "pool must be "
      "upgraded to add hot spares"));
  return (FUNC_6(VAR_15, VAR_1, VAR_16));
 }

 if (FUNC_10(VAR_11, VAR_9, ((void*)0)) <
     VAR_3 &&
     FUNC_1(VAR_12, VAR_7,
     &VAR_18, &VAR_20) == 0) {
  FUNC_7(VAR_15, FUNC_0(VAR_5, "pool must be "
      "upgraded to add cache devices"));
  return (FUNC_6(VAR_15, VAR_1, VAR_16));
 }

 if (FUNC_5(VAR_15, &VAR_13, VAR_12) != 0)
  return (-1);
 (void) FUNC_3(VAR_13.zc_name, VAR_11->zpool_name, sizeof (VAR_13.zc_name));

 if (FUNC_8(VAR_15, VAR_6, &VAR_13) != 0) {
  switch (VAR_10) {
  case 132:






   FUNC_7(VAR_15, FUNC_0(VAR_5,
       "one or more vdevs refer to the same device"));
   (void) FUNC_6(VAR_15, VAR_0, VAR_16);
   break;

  case 131:
   FUNC_7(VAR_15, FUNC_0(VAR_5,
       "invalid config; a pool with removing/removed "
       "vdevs does not support adding raidz vdevs"));
   (void) FUNC_6(VAR_15, VAR_0, VAR_16);
   break;

  case 128:






   {
    char VAR_21[64];

    FUNC_9(VAR_2, VAR_21,
        sizeof (VAR_21));

    FUNC_7(VAR_15, FUNC_0(VAR_5,
        "device is less than the minimum "
        "size (%s)"), VAR_21);
   }
   (void) FUNC_6(VAR_15, VAR_0, VAR_16);
   break;

  case 129:
   FUNC_7(VAR_15, FUNC_0(VAR_5,
       "pool must be upgraded to add these vdevs"));
   (void) FUNC_6(VAR_15, VAR_1, VAR_16);
   break;

  case 130:
   FUNC_7(VAR_15, FUNC_0(VAR_5,
       "cache device must be a disk or disk slice"));
   (void) FUNC_6(VAR_15, VAR_0, VAR_16);
   break;

  default:
   (void) FUNC_11(VAR_15, VAR_10, VAR_16);
  }

  VAR_14 = -1;
 } else {
  VAR_14 = 0;
 }

 FUNC_4(&VAR_13);

 return (VAR_14);
}
