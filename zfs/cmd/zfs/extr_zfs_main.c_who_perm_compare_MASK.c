
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_deleg_who_type_t ;
struct TYPE_3__ {int who_name; int who_type; } ;
struct TYPE_4__ {TYPE_1__ who_perm; } ;
typedef TYPE_2__ who_perm_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_1, const void *VAR_2, void *VAR_3)
{
 const who_perm_node_t *VAR_4 = VAR_1;
 const who_perm_node_t *VAR_5 = VAR_2;
 zfs_deleg_who_type_t VAR_6 = VAR_4->who_perm.who_type;
 zfs_deleg_who_type_t VAR_7 = VAR_5->who_perm.who_type;
 int VAR_8 = FUNC_1(VAR_6);
 int VAR_9 = FUNC_1(VAR_7);
 int VAR_10 = VAR_8 - VAR_9;
 if (VAR_10 == 0)
  VAR_10 = FUNC_0(VAR_4->who_perm.who_name, VAR_5->who_perm.who_name,
      VAR_0-1);

 if (VAR_10 == 0)
  return (0);
 if (VAR_10 > 0)
  return (1);
 else
  return (-1);
}
