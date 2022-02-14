
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ vdev_state; TYPE_1__* vdev_mg; int vdev_cant_write; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ mg_initialized; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

boolean_t
FUNC_1(vdev_t *VAR_2)
{
 uint64_t VAR_3 = VAR_2->vdev_state;
 return (!(VAR_3 < VAR_1 && VAR_3 != VAR_0) &&
     !VAR_2->vdev_cant_write && FUNC_0(VAR_2) &&
     VAR_2->vdev_mg->mg_initialized);
}
