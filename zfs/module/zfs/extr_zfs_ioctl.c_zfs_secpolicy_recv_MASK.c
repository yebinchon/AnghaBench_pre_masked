
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(zfs_cmd_t *VAR_3, nvlist_t *VAR_4, cred_t *VAR_5)
{
 int VAR_6;

 if ((VAR_6 = FUNC_0(VAR_3->zc_name,
     VAR_2, VAR_5)) != 0)
  return (VAR_6);

 if ((VAR_6 = FUNC_0(VAR_3->zc_name,
     VAR_1, VAR_5)) != 0)
  return (VAR_6);

 return (FUNC_0(VAR_3->zc_name,
     VAR_0, VAR_5));
}
