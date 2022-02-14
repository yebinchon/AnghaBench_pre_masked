
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zc_cookie; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int **,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_2)
{
 spa_t *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_3(VAR_2->zc_name, &VAR_3, VAR_1)) != 0)
  return (VAR_4);

 if (VAR_2->zc_cookie < FUNC_5(VAR_3) ||
     !FUNC_1(VAR_2->zc_cookie)) {
  FUNC_2(VAR_3, VAR_1);
  return (FUNC_0(VAR_0));
 }

 FUNC_4(VAR_3, VAR_2->zc_cookie);
 FUNC_2(VAR_3, VAR_1);

 return (VAR_4);
}
