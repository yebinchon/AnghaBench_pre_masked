
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zfs_hdl; int zfs_name; int zpool_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int errbuf ;
typedef int boolean_t ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (TYPE_1__*,int *,char*) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;

int
FUNC_9(zfs_handle_t *VAR_8)
{
 int VAR_9;
 char VAR_10[1024];
 char VAR_11[VAR_2];
 uint64_t VAR_12, VAR_13;
 boolean_t VAR_14;

 (void) FUNC_3(VAR_10, sizeof (VAR_10),
     FUNC_0(VAR_3, "Key unload error"));


 if (!FUNC_1(VAR_8->zpool_hdl)) {
  FUNC_6(VAR_8->zfs_hdl, FUNC_0(VAR_3,
      "Encryption feature not enabled."));
  VAR_9 = VAR_0;
  goto error;
 }


 VAR_13 = FUNC_8(VAR_8, VAR_6);
 if (VAR_13 == VAR_4) {
  FUNC_6(VAR_8->zfs_hdl, FUNC_0(VAR_3,
      "'%s' is not encrypted."), FUNC_7(VAR_8));
  VAR_9 = VAR_0;
  goto error;
 }





 VAR_9 = FUNC_4(VAR_8, &VAR_14, VAR_11);
 if (VAR_9 != 0) {
  FUNC_6(VAR_8->zfs_hdl, FUNC_0(VAR_3,
      "Failed to get encryption root for '%s'."),
      FUNC_7(VAR_8));
  goto error;
 } else if (!VAR_14) {
  FUNC_6(VAR_8->zfs_hdl, FUNC_0(VAR_3,
      "Keys must be unloaded for encryption root of '%s' (%s)."),
      FUNC_7(VAR_8), VAR_11);
  VAR_9 = VAR_0;
  goto error;
 }


 VAR_12 = FUNC_8(VAR_8, VAR_7);
 if (VAR_12 == VAR_5) {
  FUNC_6(VAR_8->zfs_hdl, FUNC_0(VAR_3,
      "Key already unloaded for '%s'."), FUNC_7(VAR_8));
  VAR_9 = 130;
  goto error;
 }


 VAR_9 = FUNC_2(VAR_8->zfs_name);

 if (VAR_9 != 0) {
  switch (VAR_9) {
  case 128:
   FUNC_6(VAR_8->zfs_hdl, FUNC_0(VAR_3,
       "Permission denied."));
   break;
  case 130:
   FUNC_6(VAR_8->zfs_hdl, FUNC_0(VAR_3,
       "Key already unloaded for '%s'."),
       FUNC_7(VAR_8));
   break;
  case 129:
   FUNC_6(VAR_8->zfs_hdl, FUNC_0(VAR_3,
       "'%s' is busy."), FUNC_7(VAR_8));
   break;
  }
  FUNC_5(VAR_8->zfs_hdl, VAR_1, VAR_10);
 }

 return (VAR_9);

error:
 FUNC_5(VAR_8->zfs_hdl, VAR_1, VAR_10);
 return (VAR_9);
}
