
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int z_pflags; int z_mode; int z_acl_lock; int z_lock; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_12__ {scalar_t__ z_acl_count; } ;
typedef TYPE_2__ zfs_acl_t ;
struct TYPE_14__ {int i_gid; int i_uid; int i_mode; } ;
struct TYPE_13__ {scalar_t__ z_acl_type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 TYPE_9__* FUNC_4 (TYPE_1__*) ;
 TYPE_7__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_2__**,int ) ;
 int FUNC_7 (int ,TYPE_2__*,int *,int ,int ) ;

int
FUNC_8(znode_t *VAR_4)
{
 int VAR_5;
 zfs_acl_t *VAR_6;

 if (FUNC_5(VAR_4)->z_acl_type == VAR_3)
  return (0);

 FUNC_0(FUNC_3(&VAR_4->z_lock));
 FUNC_0(FUNC_3(&VAR_4->z_acl_lock));

 VAR_5 = FUNC_6(VAR_4, VAR_1, &VAR_6, VAR_0);
 if (VAR_5 == 0 && VAR_6->z_acl_count > 0)
  VAR_4->z_mode = FUNC_4(VAR_4)->i_mode =
      FUNC_7(VAR_4->z_mode, VAR_6,
      &VAR_4->z_pflags, FUNC_2(FUNC_4(VAR_4)->i_uid),
      FUNC_1(FUNC_4(VAR_4)->i_gid));
 if (VAR_5 == VAR_2)
  return (0);

 return (VAR_5);
}
