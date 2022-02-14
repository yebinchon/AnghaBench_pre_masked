
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_trim_lock; } ;
typedef TYPE_1__ vdev_t ;
typedef int spa_t ;
typedef int list_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(spa_t *VAR_1, list_t *VAR_2)
{
 vdev_t *VAR_3;

 FUNC_0(FUNC_1(&VAR_0));

 while ((VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {
  FUNC_3(&VAR_3->vdev_trim_lock);
  FUNC_5(VAR_3);
  FUNC_4(&VAR_3->vdev_trim_lock);
 }
}
