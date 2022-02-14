
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int
FUNC_1(zfs_cmd_t *VAR_0, nvlist_t *VAR_1, cred_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->zc_name, VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);





 return (0);
}
