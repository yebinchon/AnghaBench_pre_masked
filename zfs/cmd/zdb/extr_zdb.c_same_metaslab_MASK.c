
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_ms_shift; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int boolean_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static boolean_t
FUNC_1(spa_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
 vdev_t *VAR_4 = FUNC_0(VAR_0, VAR_1);
 uint64_t VAR_5 = VAR_4->vdev_ms_shift;

 return ((VAR_2 >> VAR_5) == (VAR_3 >> VAR_5));
}
