
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zpool_config_size; void* zpool_state; int * zpool_config; int * zpool_old_config; int * zpool_hdl; int zpool_name; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_10__ {char* member_0; int zc_cookie; int zc_nvlist_dst_size; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*,int **) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_2__*) ;

int
FUNC_7(zpool_handle_t *VAR_9, boolean_t *VAR_10)
{
 zfs_cmd_t VAR_11 = {"\0"};
 int VAR_12;
 nvlist_t *VAR_13;
 libzfs_handle_t *VAR_14 = VAR_9->zpool_hdl;

 *VAR_10 = VAR_0;
 (void) FUNC_1(VAR_11.zc_name, VAR_9->zpool_name);

 if (VAR_9->zpool_config_size == 0)
  VAR_9->zpool_config_size = 1 << 16;

 if (FUNC_2(VAR_14, &VAR_11, VAR_9->zpool_config_size) != 0)
  return (-1);

 for (;;) {
  if (FUNC_6(VAR_9->zpool_hdl, VAR_7,
      &VAR_11) == 0) {



   VAR_12 = VAR_11.zc_cookie;
   break;
  }

  if (VAR_8 == VAR_4) {
   if (FUNC_3(VAR_14, &VAR_11) != 0) {
    FUNC_4(&VAR_11);
    return (-1);
   }
  } else {
   FUNC_4(&VAR_11);
   if (VAR_8 == VAR_3 || VAR_8 == VAR_2)
    *VAR_10 = VAR_1;
   VAR_9->zpool_state = VAR_6;
   return (0);
  }
 }

 if (FUNC_5(VAR_14, &VAR_11, &VAR_13) != 0) {
  FUNC_4(&VAR_11);
  return (-1);
 }

 FUNC_4(&VAR_11);

 VAR_9->zpool_config_size = VAR_11.zc_nvlist_dst_size;

 if (VAR_9->zpool_config != ((void*)0)) {
  FUNC_0(VAR_9->zpool_old_config);

  VAR_9->zpool_old_config = VAR_9->zpool_config;
 }

 VAR_9->zpool_config = VAR_13;
 if (VAR_12)
  VAR_9->zpool_state = VAR_6;
 else
  VAR_9->zpool_state = VAR_5;

 return (0);
}
