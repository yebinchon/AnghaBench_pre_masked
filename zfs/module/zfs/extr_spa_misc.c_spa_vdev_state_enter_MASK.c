
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int spa_vdev_locks; int spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(spa_t *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_1 | VAR_4;
 if (FUNC_1(VAR_3)) {
  int VAR_6 = VAR_5 & ~(VAR_2 - 1);
  int VAR_7 = VAR_5 & ~VAR_6;

  FUNC_0(VAR_3, VAR_7, VAR_3, VAR_0);
  FUNC_2(VAR_3->spa_root_vdev);
  FUNC_0(VAR_3, VAR_6, VAR_3, VAR_0);
 } else {
  FUNC_0(VAR_3, VAR_5, VAR_3, VAR_0);
 }
 VAR_3->spa_vdev_locks = VAR_5;
}
