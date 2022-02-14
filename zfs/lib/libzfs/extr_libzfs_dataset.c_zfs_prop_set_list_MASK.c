
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
struct TYPE_17__ {int zfs_name; int zpool_hdl; int zfs_type; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_18__ {char* member_0; scalar_t__ zc_nvlist_dst_filled; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int prop_changelist_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int) ;
 int ** FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int ,char*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int **) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;
 scalar_t__ FUNC_12 (int **,int ,int ) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,int,char*,int ) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int *,TYPE_2__*,int ) ;
 int FUNC_19 (TYPE_2__*) ;
 scalar_t__ FUNC_20 (int *,TYPE_2__*,int **) ;
 scalar_t__ FUNC_21 (int *,TYPE_2__*,int *) ;
 int FUNC_22 (TYPE_1__*,int *) ;
 int FUNC_23 (int *,int ,char*) ;
 int FUNC_24 (int *,char*) ;
 int FUNC_25 (TYPE_1__*,int *) ;
 int FUNC_26 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_27 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 int FUNC_29 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_30 (int ) ;
 int FUNC_31 (TYPE_1__*,scalar_t__) ;
 int FUNC_32 (scalar_t__) ;
 int FUNC_33 (int *,scalar_t__,scalar_t__,char*) ;
 int FUNC_34 (int *,scalar_t__,char*) ;
 int * FUNC_35 (int *,int ,int *,int ,TYPE_1__*,int ,scalar_t__,char*) ;

int
FUNC_36(zfs_handle_t *VAR_13, nvlist_t *VAR_14)
{
 zfs_cmd_t VAR_15 = {"\0"};
 int VAR_16 = -1;
 prop_changelist_t **VAR_17 = ((void*)0);
 int VAR_18;
 char VAR_19[1024];
 libzfs_handle_t *VAR_20 = VAR_13->zfs_hdl;
 nvlist_t *VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;
 zfs_prop_t VAR_24 = 0;
 nvpair_t *VAR_25;

 (void) FUNC_16(VAR_19, sizeof (VAR_19),
     FUNC_7(VAR_5, "cannot set property for '%s'"),
     VAR_13->zfs_name);

 if ((VAR_21 = FUNC_35(VAR_20, VAR_13->zfs_type, VAR_14,
     FUNC_31(VAR_13, VAR_11), VAR_13, VAR_13->zpool_hdl,
     VAR_0, VAR_19)) == ((void*)0))
  goto error;





 for (VAR_25 = FUNC_14(VAR_21, ((void*)0));
     VAR_25 != ((void*)0);
     VAR_25 = FUNC_14(VAR_21, VAR_25)) {
  if (FUNC_30(FUNC_15(VAR_25)) == VAR_10 &&
      (VAR_23 = FUNC_22(VAR_13, VAR_21)) == -1) {
   goto error;
  }
 }

 if (VAR_23 != 1 &&
     (VAR_23 = FUNC_25(VAR_13, VAR_21)) == -1) {
  goto error;
 }





 for (VAR_25 = FUNC_14(VAR_21, ((void*)0));
     VAR_25 != ((void*)0);
     VAR_25 = FUNC_14(VAR_21, VAR_25))
  VAR_22++;
 if ((VAR_17 = FUNC_1(VAR_22, sizeof (prop_changelist_t *))) == ((void*)0))
  goto error;

 VAR_18 = 0;
 for (VAR_25 = FUNC_14(VAR_21, ((void*)0));
     VAR_25 != ((void*)0);
     VAR_25 = FUNC_14(VAR_21, VAR_25)) {

  VAR_24 = FUNC_30(FUNC_15(VAR_25));

  FUNC_0(VAR_18 < VAR_22);





  if (VAR_24 != VAR_8 ||
      (FUNC_8(VAR_25) == VAR_6 &&
      FUNC_27(VAR_13, ((void*)0)))) {
   VAR_17[VAR_18] = FUNC_3(VAR_13, VAR_24, 0, 0);
   if (VAR_17[VAR_18] == ((void*)0))
    goto error;
  }

  if (VAR_24 == VAR_9 &&
      FUNC_4(VAR_17[VAR_18])) {
   FUNC_24(VAR_20, FUNC_7(VAR_5,
       "child dataset with inherited mountpoint is used "
       "in a non-global zone"));
   VAR_16 = FUNC_23(VAR_20, VAR_2, VAR_19);
   goto error;
  }

  if (VAR_17[VAR_18] != ((void*)0) &&
      (VAR_16 = FUNC_6(VAR_17[VAR_18])) != 0)
   goto error;

  VAR_18++;
 }
 FUNC_0(VAR_18 == VAR_22);




 (void) FUNC_17(VAR_15.zc_name, VAR_13->zfs_name, sizeof (VAR_15.zc_name));

 if ((VAR_16 = FUNC_21(VAR_20, &VAR_15, VAR_21)) != 0 ||
     (VAR_16 = FUNC_18(VAR_20, &VAR_15, 0)) != 0)
  goto error;

 VAR_16 = FUNC_26(VAR_20, VAR_7, &VAR_15);

 if (VAR_16 != 0) {
  if (VAR_15.zc_nvlist_dst_filled == VAR_0) {
   (void) FUNC_34(VAR_20, VAR_12, VAR_19);
   goto error;
  }


  nvlist_t *VAR_26 = ((void*)0);
  if (FUNC_20(VAR_20, &VAR_15, &VAR_26) != 0)
   goto error;
  for (nvpair_t *VAR_27 = FUNC_14(VAR_26, ((void*)0));
      VAR_27 != ((void*)0);
      VAR_27 = FUNC_14(VAR_26, VAR_27)) {
   VAR_24 = FUNC_30(FUNC_15(VAR_27));
   FUNC_33(VAR_20, VAR_24, VAR_12, VAR_19);
  }
  FUNC_13(VAR_26);

  if (VAR_23 && VAR_12 == VAR_1) {

   uint64_t VAR_28 = FUNC_31(VAR_13,
       VAR_10);
   FUNC_13(VAR_21);
   VAR_21 = ((void*)0);
   FUNC_19(&VAR_15);

   if (FUNC_12(&VAR_21, VAR_4, 0) != 0)
    goto error;
   if (FUNC_11(VAR_21,
       FUNC_32(VAR_10),
       VAR_28) != 0)
    goto error;
   if (FUNC_21(VAR_20, &VAR_15, VAR_21) != 0)
    goto error;
   (void) FUNC_26(VAR_20, VAR_7, &VAR_15);
  }
 } else {
  for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++) {
   if (VAR_17[VAR_18] != ((void*)0)) {
    int VAR_29 = FUNC_5(VAR_17[VAR_18]);
    if (VAR_29 != 0)
     VAR_16 = VAR_29;
   }
  }

  if (VAR_16 == 0) {




   (void) FUNC_10(VAR_13);






   if (FUNC_28(VAR_24) &&
       FUNC_27(VAR_13, ((void*)0)))
    VAR_16 = FUNC_29(VAR_13, VAR_3, 0);
  }
 }

error:
 FUNC_13(VAR_21);
 FUNC_19(&VAR_15);
 if (VAR_17 != ((void*)0)) {
  for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++) {
   if (VAR_17[VAR_18] != ((void*)0))
    FUNC_2(VAR_17[VAR_18]);
  }
  FUNC_9(VAR_17);
 }
 return (VAR_16);
}
