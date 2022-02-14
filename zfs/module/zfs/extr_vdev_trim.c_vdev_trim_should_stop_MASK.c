
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vdev_top; scalar_t__ vdev_detached; scalar_t__ vdev_trim_exit_wanted; } ;
typedef TYPE_2__ vdev_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ vdev_removing; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static boolean_t
FUNC_1(vdev_t *VAR_0)
{
 return (VAR_0->vdev_trim_exit_wanted || !FUNC_0(VAR_0) ||
     VAR_0->vdev_detached || VAR_0->vdev_top->vdev_removing);
}
