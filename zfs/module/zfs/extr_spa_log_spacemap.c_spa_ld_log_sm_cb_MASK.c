
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t vdev_ms_shift; TYPE_4__** vdev_ms; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int uint32_t ;
struct TYPE_10__ {size_t sme_offset; size_t sme_run; int sme_type; int sme_vdev; } ;
typedef TYPE_2__ space_map_entry_t ;
typedef int spa_t ;
struct TYPE_11__ {scalar_t__ slls_txg; int * slls_spa; } ;
typedef TYPE_3__ spa_ld_log_sm_arg_t ;
struct TYPE_12__ {int ms_unflushed_frees; int ms_unflushed_allocs; int ms_loaded; } ;
typedef TYPE_4__ metaslab_t ;


 int FUNC_0 (int) ;


 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (size_t,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(space_map_entry_t *VAR_0, void *VAR_1)
{
 uint64_t VAR_2 = VAR_0->sme_offset;
 uint64_t VAR_3 = VAR_0->sme_run;
 uint32_t VAR_4 = VAR_0->sme_vdev;

 spa_ld_log_sm_arg_t *VAR_5 = VAR_1;
 spa_t *VAR_6 = VAR_5->slls_spa;

 vdev_t *VAR_7 = FUNC_5(VAR_6, VAR_4);






 if (!FUNC_4(VAR_7))
  return (0);

 metaslab_t *VAR_8 = VAR_7->vdev_ms[VAR_2 >> VAR_7->vdev_ms_shift];
 FUNC_0(!VAR_8->ms_loaded);
 if (VAR_5->slls_txg < FUNC_1(VAR_8))
  return (0);

 switch (VAR_0->sme_type) {
 case 129:
  FUNC_3(VAR_2, VAR_2 + VAR_3,
      VAR_8->ms_unflushed_frees, VAR_8->ms_unflushed_allocs);
  break;
 case 128:
  FUNC_3(VAR_2, VAR_2 + VAR_3,
      VAR_8->ms_unflushed_allocs, VAR_8->ms_unflushed_frees);
  break;
 default:
  FUNC_2("invalid maptype_t");
  break;
 }
 return (0);
}
