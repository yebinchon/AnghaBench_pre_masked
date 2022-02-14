
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int member_0; } ;
typedef TYPE_1__ zfs_prop_t ;
struct TYPE_21__ {scalar_t__ zfs_type; int zfs_name; int zfs_hdl; } ;
typedef TYPE_2__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_22__ {int cb_force; scalar_t__ cb_create; scalar_t__ cb_error; int cb_target; int member_0; } ;
typedef TYPE_3__ rollback_data_t ;
typedef int errbuf ;
typedef int boolean_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int VAR_9 ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int ,char*,int ,...) ;
 int FUNC_8 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_1__) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__,scalar_t__) ;
 int FUNC_12 (int ,int,char*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_1__*) ;

int
FUNC_14(zfs_handle_t *VAR_10, zfs_handle_t *VAR_11, boolean_t VAR_12)
{
 rollback_data_t VAR_13 = { 0 };
 int VAR_14;
 boolean_t VAR_15 = 0;
 uint64_t VAR_16 = 0, VAR_17;
 zfs_prop_t VAR_18 = { 0 };
 uint64_t VAR_19 = 0;

 FUNC_0(VAR_10->zfs_type == VAR_7 ||
     VAR_10->zfs_type == VAR_8);




 VAR_13.cb_force = VAR_12;
 VAR_13.cb_target = VAR_11->zfs_name;
 VAR_13.cb_create = FUNC_10(VAR_11, VAR_5);

 if (VAR_13.cb_create > 0)
  VAR_19 = VAR_13.cb_create;

 (void) FUNC_9(VAR_10, VAR_0, VAR_9, &VAR_13,
     VAR_19, 0);

 (void) FUNC_8(VAR_10, VAR_9, &VAR_13);

 if (VAR_13.cb_error)
  return (-1);






 if (VAR_10->zfs_type == VAR_8) {
  if (FUNC_13(VAR_10, &VAR_18) < 0)
   return (-1);
  VAR_16 = FUNC_10(VAR_10, VAR_6);
  VAR_15 =
      (VAR_16 == FUNC_10(VAR_10, VAR_18));
 }






 VAR_14 = FUNC_2(VAR_10->zfs_name, VAR_11->zfs_name);
 if (VAR_14 != 0) {
  char VAR_20[1024];

  (void) FUNC_4(VAR_20, sizeof (VAR_20),
      FUNC_1(VAR_4, "cannot rollback '%s'"),
      VAR_10->zfs_name);
  switch (VAR_14) {
  case 130:
   FUNC_7(VAR_10->zfs_hdl, FUNC_1(VAR_4,
       "there is a snapshot or bookmark more recent "
       "than '%s'"), VAR_11->zfs_name);
   (void) FUNC_6(VAR_10->zfs_hdl, VAR_2, VAR_20);
   break;
  case 128:
   FUNC_7(VAR_10->zfs_hdl, FUNC_1(VAR_4,
       "'%s' is not found among snapshots of '%s'"),
       VAR_11->zfs_name, VAR_10->zfs_name);
   (void) FUNC_6(VAR_10->zfs_hdl, VAR_3, VAR_20);
   break;
  case 129:
   (void) FUNC_6(VAR_10->zfs_hdl, VAR_1, VAR_20);
   break;
  default:
   (void) FUNC_12(VAR_10->zfs_hdl, VAR_14, VAR_20);
  }
  return (VAR_14);
 }







 if ((VAR_10->zfs_type == VAR_8) &&
     (VAR_10 = FUNC_3(VAR_10->zfs_hdl, VAR_10->zfs_name))) {
  if (VAR_15) {
   VAR_17 = FUNC_10(VAR_10, VAR_6);
   if (VAR_16 != VAR_17)
    VAR_14 = FUNC_11(VAR_10, VAR_18,
        VAR_17);
  }
  FUNC_5(VAR_10);
 }
 return (VAR_14);
}
