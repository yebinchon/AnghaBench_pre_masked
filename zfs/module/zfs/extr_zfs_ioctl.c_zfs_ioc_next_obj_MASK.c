
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_obj; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(zfs_cmd_t *VAR_2)
{
 objset_t *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->zc_name, VAR_1, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);

 VAR_4 = FUNC_0(VAR_3, &VAR_2->zc_obj, VAR_0, 0);

 FUNC_2(VAR_3, VAR_1);
 return (VAR_4);
}
