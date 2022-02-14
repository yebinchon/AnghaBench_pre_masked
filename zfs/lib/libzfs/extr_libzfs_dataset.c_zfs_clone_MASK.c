
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_type_t ;
struct TYPE_7__ {scalar_t__ zfs_type; int * zfs_hdl; int zfs_name; int zpool_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint64_t ;
typedef int parent ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,char const*,int *,int ,int *) ;
 char* FUNC_3 (int ,char*) ;
 int VAR_11 ;
 int FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*,char*,int *) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (int *,int,char*) ;
 int * FUNC_13 (int *,int ,int *,int ,TYPE_1__*,int ,int ,char*) ;
 int FUNC_14 (int *,char const*,int ,int ) ;

int
FUNC_15(zfs_handle_t *VAR_12, const char *VAR_13, nvlist_t *VAR_14)
{
 char VAR_15[VAR_7];
 int VAR_16;
 char VAR_17[1024];
 libzfs_handle_t *VAR_18 = VAR_12->zfs_hdl;
 uint64_t VAR_19;

 FUNC_1(VAR_12->zfs_type == VAR_9);

 (void) FUNC_7(VAR_17, sizeof (VAR_17), FUNC_3(VAR_6,
     "cannot create '%s'"), VAR_13);


 if (!FUNC_14(VAR_18, VAR_13, VAR_8, VAR_1))
  return (FUNC_9(VAR_18, VAR_4, VAR_17));


 if (FUNC_2(VAR_18, VAR_13, &VAR_19, VAR_0, ((void*)0)) != 0)
  return (-1);

 (void) FUNC_6(VAR_13, VAR_15, sizeof (VAR_15));



 if (VAR_14) {
  zfs_type_t VAR_20;

  if (FUNC_0(VAR_12)) {
   VAR_20 = VAR_10;
  } else {
   VAR_20 = VAR_8;
  }
  if ((VAR_14 = FUNC_13(VAR_18, VAR_20, VAR_14, VAR_19,
      VAR_12, VAR_12->zpool_hdl, VAR_1, VAR_17)) == ((void*)0))
   return (-1);
  if (FUNC_11(VAR_12, VAR_14) == -1) {
   FUNC_5(VAR_14);
   return (-1);
  }
 }

 if (FUNC_8(VAR_18, VAR_12, VAR_15, VAR_14) != 0) {
  FUNC_5(VAR_14);
  return (FUNC_9(VAR_18, VAR_3, VAR_17));
 }

 VAR_16 = FUNC_4(VAR_13, VAR_12->zfs_name, VAR_14);
 FUNC_5(VAR_14);

 if (VAR_16 != 0) {
  switch (VAR_11) {

  case 129:
   FUNC_10(VAR_12->zfs_hdl, FUNC_3(VAR_6,
       "no such parent '%s'"), VAR_15);
   return (FUNC_9(VAR_12->zfs_hdl, VAR_5, VAR_17));

  case 128:
   FUNC_10(VAR_12->zfs_hdl, FUNC_3(VAR_6,
       "source and target pools differ"));
   return (FUNC_9(VAR_12->zfs_hdl, VAR_2,
       VAR_17));

  default:
   return (FUNC_12(VAR_12->zfs_hdl, VAR_11,
       VAR_17));
  }
 }

 return (VAR_16);
}
