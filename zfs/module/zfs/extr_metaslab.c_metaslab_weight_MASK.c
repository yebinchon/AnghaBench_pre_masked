
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int * vdev_spa; } ;
typedef TYPE_4__ vdev_t ;
typedef int uint64_t ;
typedef int space_map_phys_t ;
typedef int spa_t ;
struct TYPE_16__ {TYPE_2__* ms_sm; int ms_max_size; scalar_t__ ms_loaded; int ms_lock; TYPE_3__* ms_group; } ;
typedef TYPE_5__ metaslab_t ;
typedef int boolean_t ;
struct TYPE_14__ {TYPE_4__* mg_vd; } ;
struct TYPE_13__ {TYPE_1__* sm_dbuf; } ;
struct TYPE_12__ {int db_size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static uint64_t
FUNC_9(metaslab_t *VAR_2, boolean_t VAR_3)
{
 vdev_t *VAR_4 = VAR_2->ms_group->mg_vd;
 spa_t *VAR_5 = VAR_4->vdev_spa;
 uint64_t VAR_6;

 FUNC_0(FUNC_2(&VAR_2->ms_lock));

 FUNC_6(VAR_2, VAR_3);
 if (VAR_2->ms_loaded) {
  VAR_2->ms_max_size = FUNC_3(VAR_2);
 } else {
  VAR_2->ms_max_size = FUNC_1(VAR_2->ms_max_size,
      FUNC_4(VAR_2));
 }




 if (VAR_1 &&
     FUNC_8(VAR_5, VAR_0) &&
     (VAR_2->ms_sm == ((void*)0) || VAR_2->ms_sm->sm_dbuf->db_size ==
     sizeof (space_map_phys_t))) {
  VAR_6 = FUNC_5(VAR_2);
 } else {
  VAR_6 = FUNC_7(VAR_2);
 }
 return (VAR_6);
}
