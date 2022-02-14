
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_2__ {int ms_mntstatus; int ms_mntflags; int ms_mntopts; } ;
typedef TYPE_1__ mount_state_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(zfs_handle_t *VAR_2, void *VAR_3)
{
 mount_state_t *VAR_4 = VAR_3;
 int VAR_5 = 0;





 if (FUNC_1(VAR_2, VAR_1) ==
     VAR_0)
  return (0);

 if (FUNC_0(VAR_2, VAR_4->ms_mntopts, VAR_4->ms_mntflags) != 0)
  VAR_5 = VAR_4->ms_mntstatus = -1;
 return (VAR_5);
}
