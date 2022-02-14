
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int zfs_hdl; int zfs_name; int zpool_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int prop_keylocation ;
typedef int parent_name ;
typedef int origin_name ;
typedef int nvlist_t ;
typedef int errbuf ;
typedef int dcp_cmd_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *,int *,int ) ;
 TYPE_1__* FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char**) ;
 int FUNC_9 (int *,int ,scalar_t__*) ;
 int FUNC_10 (int ,TYPE_1__*,int ,scalar_t__,char*,int *,int **,int *) ;
 int FUNC_11 (char*,int,char*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,scalar_t__*,int *) ;
 int FUNC_15 (TYPE_1__*,int *,int **,char*) ;
 int FUNC_16 (int ,int ,char*) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,char*,int) ;
 int FUNC_20 (TYPE_1__*,int ,char*,int,int *,int *,int ,int ) ;
 scalar_t__ FUNC_21 (TYPE_1__*,int ) ;
 int FUNC_22 (int ) ;

int
FUNC_23(zfs_handle_t *VAR_16, nvlist_t *VAR_17, boolean_t VAR_18)
{
 int VAR_19;
 char VAR_20[1024];
 boolean_t VAR_21;
 nvlist_t *VAR_22 = ((void*)0);
 uint8_t *VAR_23 = ((void*)0);
 uint_t VAR_24 = 0;
 dcp_cmd_t VAR_25 = (VAR_18) ? VAR_1 : VAR_2;
 uint64_t VAR_26, VAR_27, VAR_28, VAR_29;
 uint64_t VAR_30 = VAR_7;
 zfs_handle_t *VAR_31 = ((void*)0);
 char *VAR_32 = ((void*)0);
 char VAR_33[VAR_5];
 char VAR_34[VAR_5];
 char VAR_35[VAR_9];

 (void) FUNC_11(VAR_20, sizeof (VAR_20),
     FUNC_0(VAR_6, "Key change error"));


 if (!FUNC_1(VAR_16->zpool_hdl)) {
  FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
      "Encryption feature not enabled."));
  VAR_19 = 129;
  goto error;
 }


 VAR_26 = FUNC_21(VAR_16, VAR_10);
 if (VAR_26 == VAR_15) {
  FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
      "Dataset not encrypted."));
  VAR_19 = 129;
  goto error;
 }


 VAR_19 = FUNC_14(VAR_16, &VAR_21, ((void*)0));
 if (VAR_19 != 0) {
  FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
      "Failed to get encryption root for '%s'."),
      FUNC_18(VAR_16));
  goto error;
 }


 VAR_19 = FUNC_20(VAR_16, VAR_14, VAR_33,
     sizeof (VAR_33), ((void*)0), ((void*)0), 0, VAR_0);
 if (VAR_19 == 0 && FUNC_12(VAR_33, "") != 0) {
  FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
      "Keys cannot be changed on clones."));
  VAR_19 = 129;
  goto error;
 }





 if (!VAR_18) {

  VAR_19 = FUNC_15(VAR_16, VAR_17, &VAR_22,
      VAR_20);
  if (VAR_19 != 0)
   goto error;





  (void) FUNC_9(VAR_22,
      FUNC_22(VAR_11), &VAR_30);
  (void) FUNC_8(VAR_22,
      FUNC_22(VAR_12), &VAR_32);

  if (VAR_21) {




   if (VAR_30 == VAR_7) {
    VAR_30 = FUNC_21(VAR_16,
        VAR_11);
    VAR_19 = FUNC_6(VAR_22,
        FUNC_22(VAR_11),
        VAR_30);
    if (VAR_19 != 0) {
     FUNC_17(VAR_16->zfs_hdl,
         FUNC_0(VAR_6, "Failed to "
         "get existing keyformat "
         "property."));
     goto error;
    }
   }

   if (VAR_32 == ((void*)0)) {
    VAR_19 = FUNC_20(VAR_16, VAR_12,
        VAR_34, sizeof (VAR_34),
        ((void*)0), ((void*)0), 0, VAR_0);
    if (VAR_19 != 0) {
     FUNC_17(VAR_16->zfs_hdl,
         FUNC_0(VAR_6, "Failed to "
         "get existing keylocation "
         "property."));
     goto error;
    }

    VAR_32 = VAR_34;
   }
  } else {

   if (VAR_30 == VAR_7) {
    VAR_19 = 129;
    FUNC_17(VAR_16->zfs_hdl,
        FUNC_0(VAR_6, "Keyformat required "
        "for new encryption root."));
    goto error;
   }


   if (VAR_32 == ((void*)0)) {
    VAR_32 = "prompt";
    VAR_19 = FUNC_5(VAR_22,
        FUNC_22(VAR_12),
        VAR_32);
    if (VAR_19 != 0)
     goto error;
   }
  }


  VAR_19 = FUNC_10(VAR_16->zfs_hdl,
      VAR_16, VAR_0, VAR_30, VAR_32, VAR_22, &VAR_23,
      &VAR_24);
  if (VAR_19 != 0)
   goto error;
 } else {

  if (!VAR_21) {
   FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
       "Key inheritting can only be performed on "
       "encryption roots."));
   VAR_19 = 129;
   goto error;
  }


  VAR_19 = FUNC_19(VAR_16, VAR_35, sizeof (VAR_35));
  if (VAR_19 != 0) {
   FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
       "Root dataset cannot inherit key."));
   VAR_19 = 129;
   goto error;
  }


  VAR_31 = FUNC_4(VAR_16->zfs_hdl, VAR_35);
  if (VAR_31 == ((void*)0)) {
   FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
       "Failed to lookup parent."));
   VAR_19 = VAR_3;
   goto error;
  }


  VAR_27 = FUNC_21(VAR_31, VAR_10);
  if (VAR_27 == VAR_15) {
   FUNC_17(VAR_31->zfs_hdl, FUNC_0(VAR_6,
       "Parent must be encrypted."));
   VAR_19 = 129;
   goto error;
  }


  VAR_29 = FUNC_21(VAR_31, VAR_13);
  if (VAR_29 == VAR_8) {
   FUNC_17(VAR_31->zfs_hdl, FUNC_0(VAR_6,
       "Parent key must be loaded."));
   VAR_19 = 130;
   goto error;
  }
 }


 VAR_28 = FUNC_21(VAR_16, VAR_13);
 if (VAR_28 == VAR_8) {
  FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
      "Key must be loaded."));
  VAR_19 = 130;
  goto error;
 }


 VAR_19 = FUNC_3(VAR_16->zfs_name, VAR_25, VAR_22, VAR_23, VAR_24);
 if (VAR_19 != 0) {
  switch (VAR_19) {
  case 128:
   FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
       "Permission denied."));
   break;
  case 129:
   FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
       "Invalid properties for key change."));
   break;
  case 130:
   FUNC_17(VAR_16->zfs_hdl, FUNC_0(VAR_6,
       "Key is not currently loaded."));
   break;
  }
  FUNC_16(VAR_16->zfs_hdl, VAR_4, VAR_20);
 }

 if (VAR_31 != ((void*)0))
  FUNC_13(VAR_31);
 if (VAR_22 != ((void*)0))
  FUNC_7(VAR_22);
 if (VAR_23 != ((void*)0))
  FUNC_2(VAR_23);

 return (VAR_19);

error:
 if (VAR_31 != ((void*)0))
  FUNC_13(VAR_31);
 if (VAR_22 != ((void*)0))
  FUNC_7(VAR_22);
 if (VAR_23 != ((void*)0))
  FUNC_2(VAR_23);

 FUNC_16(VAR_16->zfs_hdl, VAR_4, VAR_20);
 return (VAR_19);
}
