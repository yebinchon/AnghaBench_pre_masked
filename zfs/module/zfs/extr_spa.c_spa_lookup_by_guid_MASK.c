
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ vdev_guid; } ;
typedef TYPE_3__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int sav_count; TYPE_3__** sav_vdevs; } ;
struct TYPE_8__ {int sav_count; TYPE_3__** sav_vdevs; } ;
struct TYPE_11__ {TYPE_2__ spa_spares; TYPE_1__ spa_l2cache; int spa_root_vdev; } ;
typedef TYPE_4__ spa_t ;
typedef scalar_t__ boolean_t ;


 TYPE_3__* FUNC_0 (int ,scalar_t__) ;

vdev_t *
FUNC_1(spa_t *VAR_0, uint64_t VAR_1, boolean_t VAR_2)
{
 vdev_t *VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_0(VAR_0->spa_root_vdev, VAR_1)) != ((void*)0))
  return (VAR_3);

 if (VAR_2) {
  for (VAR_4 = 0; VAR_4 < VAR_0->spa_l2cache.sav_count; VAR_4++) {
   VAR_3 = VAR_0->spa_l2cache.sav_vdevs[VAR_4];
   if (VAR_3->vdev_guid == VAR_1)
    return (VAR_3);
  }

  for (VAR_4 = 0; VAR_4 < VAR_0->spa_spares.sav_count; VAR_4++) {
   VAR_3 = VAR_0->spa_spares.sav_vdevs[VAR_4];
   if (VAR_3->vdev_guid == VAR_1)
    return (VAR_3);
  }
 }

 return (((void*)0));
}
