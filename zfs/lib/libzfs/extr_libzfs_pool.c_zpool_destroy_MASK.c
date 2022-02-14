
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zpool_state; int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int zfs_handle_t ;
struct TYPE_6__ {char* member_0; scalar_t__ zc_history; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int msg ;
typedef int libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int ,TYPE_2__*) ;
 int * FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,scalar_t__,char*) ;

int
FUNC_10(zpool_handle_t *VAR_7, const char *VAR_8)
{
 zfs_cmd_t VAR_9 = {"\0"};
 zfs_handle_t *VAR_10 = ((void*)0);
 libzfs_handle_t *VAR_11 = VAR_7->zpool_hdl;
 char VAR_12[1024];

 if (VAR_7->zpool_state == VAR_2 &&
     (VAR_10 = FUNC_8(VAR_11, VAR_7->zpool_name, VAR_5)) == ((void*)0))
  return (-1);

 (void) FUNC_3(VAR_9.zc_name, VAR_7->zpool_name, sizeof (VAR_9.zc_name));
 VAR_9.zc_history = (uint64_t)(uintptr_t)VAR_8;

 if (FUNC_7(VAR_11, VAR_4, &VAR_9) != 0) {
  (void) FUNC_2(VAR_12, sizeof (VAR_12), FUNC_0(VAR_3,
      "cannot destroy '%s'"), VAR_7->zpool_name);

  if (VAR_6 == VAR_0) {
   FUNC_6(VAR_11, FUNC_0(VAR_3,
       "one or more devices is read only"));
   (void) FUNC_5(VAR_11, VAR_1, VAR_12);
  } else {
   (void) FUNC_9(VAR_11, VAR_6, VAR_12);
  }

  if (VAR_10)
   FUNC_4(VAR_10);
  return (-1);
 }

 if (VAR_10) {
  FUNC_1(VAR_10);
  FUNC_4(VAR_10);
 }

 return (0);
}
