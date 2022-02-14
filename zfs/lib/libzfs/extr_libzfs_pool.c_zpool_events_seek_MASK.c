
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int zc_cleanup_fd; int zc_guid; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int libzfs_handle_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int,int ) ;

int
FUNC_4(libzfs_handle_t *VAR_5, uint64_t VAR_6, int VAR_7)
{
 zfs_cmd_t VAR_8 = {"\0"};
 int VAR_9 = 0;

 VAR_8.zc_guid = VAR_6;
 VAR_8.zc_cleanup_fd = VAR_7;

 if (FUNC_2(VAR_5, VAR_3, &VAR_8) != 0) {
  switch (VAR_4) {
  case 129:
   VAR_9 = FUNC_1(VAR_5, VAR_0,
       FUNC_0(VAR_2, "cannot get event"));
   break;

  case 128:
   VAR_9 = FUNC_1(VAR_5, VAR_1,
       FUNC_0(VAR_2, "cannot get event"));
   break;

  default:
   VAR_9 = FUNC_3(VAR_5, VAR_4,
       FUNC_0(VAR_2, "cannot get event"));
   break;
  }
 }

 return (VAR_9);
}
