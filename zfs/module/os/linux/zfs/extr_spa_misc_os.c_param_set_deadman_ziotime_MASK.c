
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_kernel_param_t ;
struct TYPE_4__ {int spa_deadman_ziotime; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;

int
FUNC_6(const char *VAR_3, zfs_kernel_param_t *VAR_4)
{
 spa_t *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (VAR_6 < 0)
  return (FUNC_1(VAR_6));

 if (VAR_0 != 0) {
  FUNC_2(&VAR_1);
  while ((VAR_5 = FUNC_5(VAR_5)) != ((void*)0))
   VAR_5->spa_deadman_ziotime =
       FUNC_0(VAR_2);
  FUNC_3(&VAR_1);
 }

 return (0);
}
