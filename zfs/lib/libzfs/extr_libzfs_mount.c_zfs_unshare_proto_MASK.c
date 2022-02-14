
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ zfs_share_proto_t ;
struct TYPE_5__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct mnttab {char const* mnt_mountp; } ;
typedef int libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,struct mnttab*) ;
 scalar_t__ FUNC_3 (int *,int ,char*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int *,char const*) ;

int
FUNC_7(zfs_handle_t *VAR_2, const char *VAR_3,
    zfs_share_proto_t *VAR_4)
{
 libzfs_handle_t *VAR_5 = VAR_2->zfs_hdl;
 struct mnttab VAR_6;
 char *VAR_7 = ((void*)0);


 if (VAR_3 != ((void*)0))
  VAR_7 = FUNC_6(VAR_5, VAR_3);

 if (VAR_3 != ((void*)0) || ((FUNC_5(VAR_2) == VAR_1) &&
     FUNC_2(VAR_5, FUNC_4(VAR_2), &VAR_6) == 0)) {
  zfs_share_proto_t *VAR_8;

  if (VAR_3 == ((void*)0))
   VAR_7 = FUNC_6(VAR_2->zfs_hdl, VAR_6.mnt_mountp);

  for (VAR_8 = VAR_4; *VAR_8 != VAR_0;
      VAR_8++) {

   if (FUNC_1(VAR_5, VAR_7, *VAR_8) &&
       FUNC_3(VAR_5, VAR_2->zfs_name,
       VAR_7, *VAR_8) != 0) {
    if (VAR_7 != ((void*)0))
     FUNC_0(VAR_7);
    return (-1);
   }
  }
 }
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_7);

 return (0);
}
