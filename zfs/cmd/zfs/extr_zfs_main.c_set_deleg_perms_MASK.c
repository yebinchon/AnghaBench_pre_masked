
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zfs_type_t ;
typedef int zfs_handle_t ;
struct deleg_perms {int nvl; int un; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(zfs_handle_t *VAR_2, void *VAR_3)
{
 struct deleg_perms *VAR_4 = (struct deleg_perms *)VAR_3;
 zfs_type_t VAR_5 = FUNC_0(VAR_2);

 if (VAR_5 != VAR_0 && VAR_5 != VAR_1)
  return (0);

 return (FUNC_1(VAR_2, VAR_4->un, VAR_4->nvl));
}
