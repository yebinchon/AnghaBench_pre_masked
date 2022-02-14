
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t vdev_ms_shift; int * vdev_indirect_mapping; int ** vdev_ms; } ;
typedef TYPE_1__ vdev_t ;
typedef int vdev_indirect_mapping_t ;
typedef size_t uint64_t ;
struct TYPE_7__ {size_t sme_offset; size_t sme_run; scalar_t__ sme_vdev; scalar_t__ sme_type; } ;
typedef TYPE_2__ space_map_entry_t ;
struct TYPE_8__ {scalar_t__ svr_vdev_id; int svr_allocd_segs; } ;
typedef TYPE_3__ spa_vdev_removal_t ;
typedef int spa_t ;
typedef int metaslab_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int ,size_t,size_t) ;
 int FUNC_3 (int ,size_t,size_t) ;
 size_t FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(spa_t *VAR_2, space_map_entry_t *VAR_3,
    uint64_t VAR_4, void *VAR_5)
{
 spa_vdev_removal_t *VAR_6 = VAR_5;

 uint64_t VAR_7 = VAR_3->sme_offset;
 uint64_t VAR_8 = VAR_3->sme_run;


 if (VAR_3->sme_vdev != VAR_6->svr_vdev_id)
  return (0);

 vdev_t *VAR_9 = FUNC_5(VAR_2, VAR_3->sme_vdev);
 metaslab_t *VAR_10 = VAR_9->vdev_ms[VAR_7 >> VAR_9->vdev_ms_shift];
 FUNC_0(VAR_3->sme_type == VAR_0 || VAR_3->sme_type == VAR_1);

 if (VAR_4 < FUNC_1(VAR_10))
  return (0);

 vdev_indirect_mapping_t *VAR_11 = VAR_9->vdev_indirect_mapping;
 FUNC_0(VAR_11 != ((void*)0));
 if (VAR_7 >= FUNC_4(VAR_11))
  return (0);

 if (VAR_3->sme_type == VAR_0)
  FUNC_2(VAR_6->svr_allocd_segs, VAR_7, VAR_8);
 else
  FUNC_3(VAR_6->svr_allocd_segs, VAR_7, VAR_8);

 return (0);
}
