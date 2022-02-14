
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int space_map_phys_t ;
struct TYPE_6__ {scalar_t__ scip_prev_obsolete_sm_object; } ;
struct TYPE_7__ {int spa_meta_objset; TYPE_1__ spa_condensing_indirect_phys; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_8__ {int doi_bonus_size; } ;
typedef TYPE_3__ dmu_object_info_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_2(spa_t *VAR_0)
{
 uint64_t VAR_1 =
     VAR_0->spa_condensing_indirect_phys.scip_prev_obsolete_sm_object;
 if (VAR_1 != 0) {
  dmu_object_info_t VAR_2;
  FUNC_0(FUNC_1(VAR_0->spa_meta_objset, VAR_1, &VAR_2));
  if (VAR_2.doi_bonus_size == sizeof (space_map_phys_t)) {
   return (1);
  }
 }
 return (0);
}
