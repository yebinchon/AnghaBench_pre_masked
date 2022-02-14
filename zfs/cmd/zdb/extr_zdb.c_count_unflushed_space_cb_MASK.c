
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t vdev_ms_shift; int ** vdev_ms; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_7__ {size_t sme_offset; size_t sme_vdev; scalar_t__ sme_type; scalar_t__ sme_run; } ;
typedef TYPE_2__ space_map_entry_t ;
typedef int spa_t ;
typedef int metaslab_t ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,size_t) ;

__attribute__((used)) static int
FUNC_4(spa_t *VAR_2, space_map_entry_t *VAR_3,
    uint64_t VAR_4, void *VAR_5)
{
 int64_t *VAR_6 = VAR_5;

 uint64_t VAR_7 = VAR_3->sme_offset;
 uint64_t VAR_8 = VAR_3->sme_vdev;

 vdev_t *VAR_9 = FUNC_3(VAR_2, VAR_8);
 if (!FUNC_2(VAR_9))
  return (0);

 metaslab_t *VAR_10 = VAR_9->vdev_ms[VAR_7 >> VAR_9->vdev_ms_shift];
 FUNC_0(VAR_3->sme_type == VAR_0 || VAR_3->sme_type == VAR_1);

 if (VAR_4 < FUNC_1(VAR_10))
  return (0);

 if (VAR_3->sme_type == VAR_0)
  *VAR_6 += VAR_3->sme_run;
 else
  *VAR_6 -= VAR_3->sme_run;

 return (0);
}
