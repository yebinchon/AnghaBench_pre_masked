
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_spa; scalar_t__ vdev_removing; scalar_t__ vdev_autotrim_exit_wanted; } ;
typedef TYPE_1__ vdev_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_2(vdev_t *VAR_1)
{
 return (VAR_1->vdev_autotrim_exit_wanted ||
     !FUNC_1(VAR_1) || VAR_1->vdev_removing ||
     FUNC_0(VAR_1->vdev_spa) == VAR_0);
}
