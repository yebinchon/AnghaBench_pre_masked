
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int spa_vdev_top_lock; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

int
FUNC_3(spa_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0->spa_vdev_top_lock);
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(&VAR_0->spa_vdev_top_lock);

 return (VAR_3);
}
