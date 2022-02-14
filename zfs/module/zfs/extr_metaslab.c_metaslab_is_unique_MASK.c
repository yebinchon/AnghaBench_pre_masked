
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int ms_id; TYPE_2__* ms_group; } ;
typedef TYPE_3__ metaslab_t ;
typedef int dva_t ;
typedef int boolean_t ;
struct TYPE_6__ {TYPE_1__* mg_vd; } ;
struct TYPE_5__ {scalar_t__ vdev_id; int vdev_ms_shift; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static boolean_t
FUNC_3(metaslab_t *VAR_1, dva_t *VAR_2)
{
 uint64_t VAR_3;

 if (FUNC_0(VAR_2) == 0)
  return (VAR_0);

 if (VAR_1->ms_group->mg_vd->vdev_id != FUNC_2(VAR_2))
  return (VAR_0);

 VAR_3 = FUNC_1(VAR_2) >> VAR_1->ms_group->mg_vd->vdev_ms_shift;

 return (VAR_1->ms_id != VAR_3);
}
