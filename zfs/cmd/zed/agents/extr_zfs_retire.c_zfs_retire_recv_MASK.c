
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_4__ {int * zrd_hdl; } ;
typedef TYPE_1__ zfs_retire_data_t ;
typedef int vdev_aux_t ;
typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int fmd_hdl_t ;
typedef int fmd_event_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 char* VAR_18 ;
 int * FUNC_0 (int *,scalar_t__,scalar_t__,int **) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char const*,...) ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (int *,int ,int **) ;
 scalar_t__ FUNC_9 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_10 (int *,int ,char**) ;
 scalar_t__ FUNC_11 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (int *,int *,int *) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (int *,TYPE_1__*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,scalar_t__) ;
 int FUNC_20 (int *,scalar_t__,int ) ;
 int FUNC_21 (int *,scalar_t__,int ) ;
 char* FUNC_22 (int *,int *,int *,scalar_t__) ;
 int FUNC_23 (int *,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_24(fmd_hdl_t *VAR_19, fmd_event_t *VAR_20, nvlist_t *VAR_21,
    const char *VAR_22)
{
 uint64_t VAR_23, VAR_24;
 zpool_handle_t *VAR_25;
 nvlist_t *VAR_26, *VAR_27;
 nvlist_t **VAR_28;
 uint_t VAR_29, VAR_30;
 zfs_retire_data_t *VAR_31 = FUNC_3(VAR_19);
 libzfs_handle_t *VAR_32 = VAR_31->zrd_hdl;
 boolean_t VAR_33, VAR_34;
 boolean_t VAR_35;
 char *VAR_36;
 nvlist_t *VAR_37 = ((void*)0);
 char *VAR_38;
 int VAR_39 = 0;
 boolean_t VAR_40;
 boolean_t VAR_41;
 vdev_aux_t VAR_42;
 uint64_t VAR_43 = 0;

 FUNC_2(VAR_19, "zfs_retire_recv: '%s'", VAR_22);






 if (FUNC_13(VAR_22, "resource.fs.zfs.removed") == 0) {
  char *VAR_44;
  char *VAR_45;

  if (FUNC_11(VAR_21, VAR_2,
      &VAR_23) != 0 ||
      FUNC_11(VAR_21, VAR_3,
      &VAR_24) != 0)
   return;

  if ((VAR_25 = FUNC_0(VAR_32, VAR_23, VAR_24,
      &VAR_37)) == ((void*)0))
   return;

  VAR_45 = FUNC_22(((void*)0), VAR_25, VAR_37, VAR_0);


  if (FUNC_10(VAR_21, VAR_5,
      &VAR_44) == 0 && FUNC_13(VAR_44, VAR_18) == 0) {
   FUNC_2(VAR_19, "zpool_vdev_offline '%s'", VAR_45);
   FUNC_23(VAR_25, VAR_45, VAR_1);
  } else if (!FUNC_5(VAR_19, "spare_on_remove") ||
      FUNC_12(VAR_19, VAR_25, VAR_37) == VAR_0) {

   FUNC_2(VAR_19, "zpool_vdev_offline '%s'", VAR_45);
   FUNC_23(VAR_25, VAR_45, VAR_1);
  }

  FUNC_6(VAR_45);
  FUNC_17(VAR_25);
  return;
 }

 if (FUNC_13(VAR_22, VAR_12) == 0)
  return;





 if (FUNC_13(VAR_22, "resource.fs.zfs.statechange") == 0 &&
     FUNC_11(VAR_21, VAR_4,
     &VAR_43) == 0 && VAR_43 == VAR_17) {
  FUNC_15(VAR_19, VAR_21);
  return;
 }
 if (FUNC_13(VAR_22, "sysevent.fs.zfs.vdev_remove") == 0) {
  FUNC_15(VAR_19, VAR_21);
  return;
 }

 FUNC_14(VAR_19, VAR_31);

 if (FUNC_13(VAR_22, VAR_11) == 0)
  VAR_35 = VAR_1;
 else
  VAR_35 = VAR_0;




 if (FUNC_9(VAR_21, VAR_13,
     &VAR_28, &VAR_30) != 0)
  return;

 for (VAR_29 = 0; VAR_29 < VAR_30; VAR_29++) {
  VAR_27 = VAR_28[VAR_29];

  VAR_33 = VAR_0;
  VAR_34 = VAR_0;
  VAR_41 = VAR_0;

  if (FUNC_7(VAR_27, VAR_14,
      &VAR_40) == 0 && VAR_40 == 0)
   continue;







  if (FUNC_4(VAR_19, VAR_27, "fault.fs.zfs.vdev.io")) {
   VAR_33 = VAR_1;
  } else if (FUNC_4(VAR_19, VAR_27,
      "fault.fs.zfs.vdev.checksum")) {
   VAR_34 = VAR_1;
  } else if (FUNC_4(VAR_19, VAR_27,
      "fault.fs.zfs.device")) {
   VAR_33 = VAR_0;
  } else if (FUNC_4(VAR_19, VAR_27, "fault.io.*")) {
   VAR_41 = VAR_1;
   VAR_33 = VAR_1;
  } else {
   continue;
  }

  if (VAR_41) {
   continue;
  } else {




   if (FUNC_8(VAR_27, VAR_6,
       &VAR_26) != 0 ||
       FUNC_10(VAR_26, VAR_7,
       &VAR_36) != 0)
    continue;

   if (FUNC_13(VAR_36, VAR_8) != 0)
    continue;

   if (FUNC_11(VAR_26, VAR_9,
       &VAR_23) != 0)
    continue;

   if (FUNC_11(VAR_26, VAR_10,
       &VAR_24) != 0) {
    if (VAR_35)
     VAR_24 = 0;
    else
     continue;
   }

   if ((VAR_25 = FUNC_0(VAR_32, VAR_23, VAR_24,
       &VAR_37)) == ((void*)0))
    continue;

   VAR_42 = VAR_16;
  }

  if (VAR_24 == 0) {



   FUNC_2(VAR_19, "zpool_clear of pool '%s'",
       FUNC_18(VAR_25));
   (void) FUNC_16(VAR_25, ((void*)0), ((void*)0));
   FUNC_17(VAR_25);
   continue;
  }





  if (VAR_35) {
   VAR_39 = 1;
   FUNC_2(VAR_19, "zpool_clear of pool '%s' vdev %llu",
       FUNC_18(VAR_25), VAR_24);
   (void) FUNC_19(VAR_25, VAR_24);
   FUNC_17(VAR_25);
   continue;
  }




  if (VAR_33)
   (void) FUNC_21(VAR_25, VAR_24, VAR_42);
  if (VAR_34)
   (void) FUNC_20(VAR_25, VAR_24, VAR_42);

  if (VAR_33 || VAR_34)
   FUNC_2(VAR_19, "zpool_vdev_%s: vdev %llu on '%s'",
       VAR_33 ? "fault" : "degrade", VAR_24,
       FUNC_18(VAR_25));




  (void) FUNC_12(VAR_19, VAR_25, VAR_37);
  FUNC_17(VAR_25);
 }

 if (FUNC_13(VAR_22, VAR_11) == 0 && VAR_39 &&
     FUNC_10(VAR_21, VAR_15, &VAR_38) == 0)
  FUNC_1(VAR_19, VAR_38);
}
