
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zfs_smb_acl_op_t ;
struct TYPE_8__ {char* member_0; int zc_string; scalar_t__ zc_cookie; int zc_value; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
struct TYPE_9__ {int libzfs_fd; } ;
typedef TYPE_2__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_7(libzfs_handle_t *VAR_4, char *VAR_5, char *VAR_6,
    zfs_smb_acl_op_t VAR_7, char *VAR_8, char *VAR_9)
{
 zfs_cmd_t VAR_10 = {"\0"};
 nvlist_t *VAR_11 = ((void*)0);
 int VAR_12;

 (void) FUNC_5(VAR_10.zc_name, VAR_5, sizeof (VAR_10.zc_name));
 (void) FUNC_5(VAR_10.zc_value, VAR_6, sizeof (VAR_10.zc_value));
 VAR_10.zc_cookie = (uint64_t)VAR_7;

 if (VAR_7 == 128) {
  if (FUNC_3(&VAR_11, VAR_0, 0) != 0) {
   (void) FUNC_1(VAR_4);
   return (0);
  }
 }

 switch (VAR_7) {
 case 131:
 case 129:
  (void) FUNC_5(VAR_10.zc_string, VAR_8, sizeof (VAR_10.zc_string));
  break;
 case 128:
  if (FUNC_2(VAR_11, VAR_2,
      VAR_8) != 0) {
    (void) FUNC_1(VAR_4);
    return (-1);
  }
  if (FUNC_2(VAR_11, VAR_3,
      VAR_9) != 0) {
    (void) FUNC_1(VAR_4);
    return (-1);
  }
  if (FUNC_6(VAR_4, &VAR_10, VAR_11) != 0) {
   FUNC_4(VAR_11);
   return (-1);
  }
  break;
 case 130:
  break;
 default:
  return (-1);
 }
 VAR_12 = FUNC_0(VAR_4->libzfs_fd, VAR_1, &VAR_10);
 FUNC_4(VAR_11);
 return (VAR_12);
}
