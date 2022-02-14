
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_value; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(zfs_cmd_t *VAR_0, nvlist_t *VAR_1, cred_t *VAR_2)
{
 return (FUNC_0(VAR_0->zc_name, VAR_0->zc_value, VAR_2));
}
