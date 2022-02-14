
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zfs_hdl; int zfs_name; int zpool_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int prop_keylocation ;
typedef int errbuf ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int *,size_t,scalar_t__,int **) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__,char*,int ,int **,size_t*,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__,int *,int ) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__*,char*) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,char*,int,int *,int *,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;

int
FUNC_13(zfs_handle_t *VAR_15, boolean_t VAR_16, char *VAR_17)
{
 int VAR_18, VAR_19 = 0;
 char VAR_20[1024];
 uint64_t VAR_21, VAR_22 = 0, VAR_23 = 0;
 uint64_t VAR_24 = VAR_7;
 char VAR_25[VAR_3];
 char VAR_26[VAR_3];
 char *VAR_27 = ((void*)0);
 uint8_t *VAR_28 = ((void*)0), *VAR_29 = ((void*)0);
 size_t VAR_30;
 boolean_t VAR_31, VAR_32 = VAR_0, VAR_33 = VAR_0;

 (void) FUNC_6(VAR_20, sizeof (VAR_20),
     FUNC_1(VAR_5, "Key load error"));


 if (!FUNC_2(VAR_15->zpool_hdl)) {
  FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
      "Encryption feature not enabled."));
  VAR_18 = 129;
  goto error;
 }


 VAR_24 = FUNC_12(VAR_15, VAR_10);
 if (VAR_24 == VAR_7) {
  FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
      "'%s' is not encrypted."), FUNC_10(VAR_15));
  VAR_18 = 129;
  goto error;
 }





 VAR_18 = FUNC_7(VAR_15, &VAR_31, VAR_26);
 if (VAR_18 != 0) {
  FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
      "Failed to get encryption root for '%s'."),
      FUNC_10(VAR_15));
  goto error;
 } else if (!VAR_31) {
  FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
      "Keys must be loaded for encryption root of '%s' (%s)."),
      FUNC_10(VAR_15), VAR_26);
  VAR_18 = 129;
  goto error;
 }





 if (VAR_17 != ((void*)0)) {
  VAR_27 = VAR_17;
 } else {
  VAR_18 = FUNC_11(VAR_15, VAR_11, VAR_25,
      sizeof (VAR_25), ((void*)0), ((void*)0), 0, VAR_1);
  if (VAR_18 != 0) {
   FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
       "Failed to get keylocation for '%s'."),
       FUNC_10(VAR_15));
   goto error;
  }

  VAR_27 = VAR_25;
 }


 if (!VAR_16) {
  VAR_21 = FUNC_12(VAR_15, VAR_12);
  if (VAR_21 == VAR_9) {
   FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
       "Key already loaded for '%s'."), FUNC_10(VAR_15));
   VAR_18 = 130;
   goto error;
  }
 }


 if (VAR_24 == VAR_8) {
  VAR_23 = FUNC_12(VAR_15, VAR_14);
  VAR_22 = FUNC_12(VAR_15, VAR_13);
 }

try_again:

 VAR_33 = VAR_1;


 VAR_18 = FUNC_4(VAR_15->zfs_hdl, VAR_0, VAR_0, VAR_24,
     VAR_27, FUNC_10(VAR_15), &VAR_28, &VAR_30,
     &VAR_32);
 if (VAR_18 != 0)
  goto error;


 VAR_18 = FUNC_0(VAR_15->zfs_hdl, VAR_24, VAR_22, VAR_28,
     VAR_30, VAR_23, &VAR_29);
 if (VAR_18 != 0)
  goto error;

 VAR_33 = VAR_0;


 VAR_18 = FUNC_5(VAR_15->zfs_name, VAR_16, VAR_29, VAR_6);
 if (VAR_18 != 0) {
  switch (VAR_18) {
  case 128:
   FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
       "Permission denied."));
   break;
  case 129:
   FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
       "Invalid parameters provided for dataset %s."),
       FUNC_10(VAR_15));
   break;
  case 130:
   FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
       "Key already loaded for '%s'."), FUNC_10(VAR_15));
   break;
  case 131:
   FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
       "'%s' is busy."), FUNC_10(VAR_15));
   break;
  case 132:
   VAR_33 = VAR_1;
   FUNC_9(VAR_15->zfs_hdl, FUNC_1(VAR_5,
       "Incorrect key provided for '%s'."),
       FUNC_10(VAR_15));
   break;
  }
  goto error;
 }

 FUNC_3(VAR_28);
 FUNC_3(VAR_29);

 return (0);

error:
 FUNC_8(VAR_15->zfs_hdl, VAR_2, VAR_20);
 if (VAR_28 != ((void*)0)) {
  FUNC_3(VAR_28);
  VAR_28 = ((void*)0);
 }
 if (VAR_29 != ((void*)0)) {
  FUNC_3(VAR_29);
  VAR_29 = ((void*)0);
 }
 VAR_19++;
 if (VAR_32 && VAR_33 && VAR_19 < VAR_4)
  goto try_again;

 return (VAR_18);
}
