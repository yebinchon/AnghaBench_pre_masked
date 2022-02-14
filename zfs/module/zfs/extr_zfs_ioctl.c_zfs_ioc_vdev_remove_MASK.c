
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zc_cookie; int zc_guid; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int **,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(zfs_cmd_t *VAR_2)
{
 spa_t *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->zc_name, &VAR_3, VAR_1);
 if (VAR_4 != 0)
  return (VAR_4);
 if (VAR_2->zc_cookie != 0) {
  VAR_4 = FUNC_3(VAR_3);
 } else {
  VAR_4 = FUNC_2(VAR_3, VAR_2->zc_guid, VAR_0);
 }
 FUNC_0(VAR_3, VAR_1);
 return (VAR_4);
}
