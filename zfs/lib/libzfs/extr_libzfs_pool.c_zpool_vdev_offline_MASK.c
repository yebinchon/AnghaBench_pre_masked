
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_7__ {char* member_0; int zc_obj; int zc_cookie; int zc_guid; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,char*) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_2__*) ;
 int * FUNC_7 (TYPE_1__*,char const*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_8 (int *,int,char*) ;

int
FUNC_9(zpool_handle_t *VAR_10, const char *VAR_11, boolean_t VAR_12)
{
 zfs_cmd_t VAR_13 = {"\0"};
 char VAR_14[1024];
 nvlist_t *VAR_15;
 boolean_t VAR_16, VAR_17;
 libzfs_handle_t *VAR_18 = VAR_10->zpool_hdl;

 (void) FUNC_2(VAR_14, sizeof (VAR_14),
     FUNC_0(VAR_4, "cannot offline %s"), VAR_11);

 (void) FUNC_3(VAR_13.zc_name, VAR_10->zpool_name, sizeof (VAR_13.zc_name));
 if ((VAR_15 = FUNC_7(VAR_10, VAR_11, &VAR_16, &VAR_17,
     ((void*)0))) == ((void*)0))
  return (FUNC_5(VAR_18, VAR_1, VAR_14));

 FUNC_4(FUNC_1(VAR_15, VAR_8, &VAR_13.zc_guid) == 0);

 if (VAR_16)
  return (FUNC_5(VAR_18, VAR_0, VAR_14));

 VAR_13.zc_cookie = VAR_5;
 VAR_13.zc_obj = VAR_12 ? VAR_7 : 0;

 if (FUNC_6(VAR_18, VAR_6, &VAR_13) == 0)
  return (0);

 switch (VAR_9) {
 case 129:




  return (FUNC_5(VAR_18, VAR_2, VAR_14));

 case 128:



  return (FUNC_5(VAR_18, VAR_3, VAR_14));

 default:
  return (FUNC_8(VAR_18, VAR_9, VAR_14));
 }
}
