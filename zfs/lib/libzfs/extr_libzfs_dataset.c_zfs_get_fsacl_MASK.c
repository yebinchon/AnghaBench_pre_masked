
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zfs_type; int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_6__ {char* member_0; int zc_nvlist_dst_size; uintptr_t zc_nvlist_dst; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_8 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (void*,int,int **,int ) ;
 int FUNC_5 (char*,int,char*,int ) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *,int ,TYPE_2__*) ;
 int FUNC_11 (int *,int,char*) ;

int
FUNC_12(zfs_handle_t *VAR_9, nvlist_t **VAR_10)
{
 zfs_cmd_t VAR_11 = {"\0"};
 libzfs_handle_t *VAR_12 = VAR_9->zfs_hdl;
 int VAR_13 = 2048;
 void *VAR_14;
 int VAR_15 = 0;
 char VAR_16[1024];

 FUNC_0(VAR_9->zfs_type == VAR_7 ||
     VAR_9->zfs_type == VAR_6);

tryagain:

 VAR_14 = FUNC_3(VAR_13);
 if (VAR_14 == ((void*)0)) {
  VAR_15 = (FUNC_8(VAR_12, VAR_3, FUNC_6(VAR_8)));
  goto out;
 }

 VAR_11.zc_nvlist_dst_size = VAR_13;
 VAR_11.zc_nvlist_dst = (uintptr_t)VAR_14;

 (void) FUNC_7(VAR_11.zc_name, VAR_9->zfs_name, sizeof (VAR_11.zc_name));

 if (FUNC_10(VAR_12, VAR_5, &VAR_11) != 0) {
  (void) FUNC_5(VAR_16, sizeof (VAR_16),
      FUNC_1(VAR_4, "cannot get permissions on '%s'"),
      VAR_11.zc_name);
  switch (VAR_8) {
  case 129:
   FUNC_2(VAR_14);
   VAR_13 = VAR_11.zc_nvlist_dst_size;
   goto tryagain;

  case 128:
   FUNC_9(VAR_12, FUNC_1(VAR_4,
       "pool must be upgraded"));
   VAR_15 = FUNC_8(VAR_12, VAR_1, VAR_16);
   break;
  case 131:
   VAR_15 = FUNC_8(VAR_12, VAR_0, VAR_16);
   break;
  case 130:
   VAR_15 = FUNC_8(VAR_12, VAR_2, VAR_16);
   break;
  default:
   VAR_15 = FUNC_11(VAR_12, VAR_8, VAR_16);
   break;
  }
 } else {

  int VAR_17 = FUNC_4(VAR_14, VAR_11.zc_nvlist_dst_size, VAR_10, 0);
  if (VAR_17) {
   (void) FUNC_5(VAR_16, sizeof (VAR_16), FUNC_1(
       VAR_4, "cannot get permissions on '%s'"),
       VAR_11.zc_name);
   VAR_15 = FUNC_11(VAR_12, VAR_17, VAR_16);
  }
 }

 FUNC_2(VAR_14);
out:
 return (VAR_15);
}
