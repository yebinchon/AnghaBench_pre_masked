
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_zevent_t ;
struct TYPE_3__ {int zc_cleanup_fd; int zc_guid; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int minor_t ;


 int FUNC_0 (int ,int *,int **) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(zfs_cmd_t *VAR_0)
{
 zfs_zevent_t *VAR_1;
 minor_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->zc_cleanup_fd, &VAR_2, &VAR_1);
 if (VAR_3 != 0)
  return (VAR_3);

 VAR_3 = FUNC_2(VAR_1, VAR_0->zc_guid);
 FUNC_1(VAR_0->zc_cleanup_fd);

 return (VAR_3);
}
