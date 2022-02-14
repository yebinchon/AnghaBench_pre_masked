
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_11__ {char* member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_0)
{
 int VAR_1 = 0;
 zfs_cmd_t VAR_2 = {"\0"};

 if (FUNC_2(VAR_0->zfs_hdl, &VAR_2, 0) != 0)
  return (-1);
 if (FUNC_0(VAR_0, &VAR_2) != 0)
  VAR_1 = -1;
 else if (FUNC_1(VAR_0, &VAR_2) != 0)
  VAR_1 = -1;
 FUNC_3(&VAR_2);
 return (VAR_1);
}
