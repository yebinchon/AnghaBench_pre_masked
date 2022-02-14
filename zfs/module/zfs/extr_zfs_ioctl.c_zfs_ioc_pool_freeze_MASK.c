
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int spa_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int **,int ) ;

__attribute__((used)) static int
FUNC_3(zfs_cmd_t *VAR_1)
{
 spa_t *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1->zc_name, &VAR_2, VAR_0);
 if (VAR_3 == 0) {
  FUNC_1(VAR_2);
  FUNC_0(VAR_2, VAR_0);
 }
 return (VAR_3);
}
