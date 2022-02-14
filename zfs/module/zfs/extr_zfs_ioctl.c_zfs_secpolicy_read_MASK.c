
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(zfs_cmd_t *VAR_2, nvlist_t *VAR_3, cred_t *VAR_4)
{
 if (FUNC_0(VAR_1) ||
     FUNC_2(VAR_2->zc_name, ((void*)0)))
  return (0);

 return (FUNC_1(VAR_0));
}
