
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* dds_origin; } ;
struct TYPE_5__ {TYPE_1__ zfs_dmustats; int zfs_name; int zfs_type; int * zfs_hdl; } ;
typedef TYPE_2__ zfs_handle_t ;
typedef int snapname ;
typedef int libzfs_handle_t ;
typedef int errbuf ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,int ,int ,int ) ;

int
FUNC_7(zfs_handle_t *VAR_7)
{
 libzfs_handle_t *VAR_8 = VAR_7->zfs_hdl;
 char VAR_9[VAR_5];
 int VAR_10;
 char VAR_11[1024];

 (void) FUNC_2(VAR_11, sizeof (VAR_11), FUNC_0(VAR_4,
     "cannot promote '%s'"), VAR_7->zfs_name);

 if (VAR_7->zfs_type == VAR_6) {
  FUNC_4(VAR_8, FUNC_0(VAR_4,
      "snapshots can not be promoted"));
  return (FUNC_3(VAR_8, VAR_1, VAR_11));
 }

 if (VAR_7->zfs_dmustats.dds_origin[0] == '\0') {
  FUNC_4(VAR_8, FUNC_0(VAR_4,
      "not a cloned filesystem"));
  return (FUNC_3(VAR_8, VAR_1, VAR_11));
 }

 if (!FUNC_6(VAR_8, VAR_7->zfs_name, VAR_7->zfs_type, VAR_0))
  return (FUNC_3(VAR_8, VAR_3, VAR_11));

 VAR_10 = FUNC_1(VAR_7->zfs_name, VAR_9, sizeof (VAR_9));

 if (VAR_10 != 0) {
  switch (VAR_10) {
  case 129:




   FUNC_4(VAR_8, FUNC_0(VAR_4,
       "cannot promote dataset outside its "
       "encryption root"));
   return (FUNC_3(VAR_8, VAR_2, VAR_11));

  case 128:

   FUNC_4(VAR_8, FUNC_0(VAR_4,
       "conflicting snapshot '%s' from parent '%s'"),
       VAR_9, VAR_7->zfs_dmustats.dds_origin);
   return (FUNC_3(VAR_8, VAR_2, VAR_11));

  default:
   return (FUNC_5(VAR_8, VAR_10, VAR_11));
  }
 }
 return (VAR_10);
}
