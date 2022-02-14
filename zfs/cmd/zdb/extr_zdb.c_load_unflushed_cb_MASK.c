
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t vdev_ms_shift; TYPE_3__** vdev_ms; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_9__ {size_t sme_offset; size_t sme_run; size_t sme_vdev; scalar_t__ sme_type; } ;
typedef TYPE_2__ space_map_entry_t ;
typedef int spa_t ;
struct TYPE_10__ {int ms_allocatable; } ;
typedef TYPE_3__ metaslab_t ;
typedef scalar_t__ maptype_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,size_t,size_t) ;
 int FUNC_3 (int ,size_t,size_t) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *,size_t) ;

__attribute__((used)) static int
FUNC_6(spa_t *VAR_2, space_map_entry_t *VAR_3, uint64_t VAR_4, void *VAR_5)
{
 maptype_t *VAR_6 = VAR_5;

 uint64_t VAR_7 = VAR_3->sme_offset;
 uint64_t VAR_8 = VAR_3->sme_run;
 uint64_t VAR_9 = VAR_3->sme_vdev;

 vdev_t *VAR_10 = FUNC_5(VAR_2, VAR_9);


 if (!FUNC_4(VAR_10))
  return (0);

 metaslab_t *VAR_11 = VAR_10->vdev_ms[VAR_7 >> VAR_10->vdev_ms_shift];

 FUNC_0(VAR_3->sme_type == VAR_0 || VAR_3->sme_type == VAR_1);
 FUNC_0(*VAR_6 == VAR_0 || *VAR_6 == VAR_1);

 if (VAR_4 < FUNC_1(VAR_11))
  return (0);

 if (*VAR_6 == VAR_3->sme_type)
  FUNC_2(VAR_11->ms_allocatable, VAR_7, VAR_8);
 else
  FUNC_3(VAR_11->ms_allocatable, VAR_7, VAR_8);

 return (0);
}
