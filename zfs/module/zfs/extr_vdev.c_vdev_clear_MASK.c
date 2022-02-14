
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ vs_aux; scalar_t__ vs_slow_ios; scalar_t__ vs_checksum_errors; scalar_t__ vs_write_errors; scalar_t__ vs_read_errors; } ;
struct TYPE_22__ {int vdev_children; unsigned long long vdev_faulted; unsigned long long vdev_degraded; void* vdev_unspare; TYPE_2__* vdev_parent; int * vdev_aux; struct TYPE_22__* vdev_top; void* vdev_forcefault; TYPE_1__ vdev_stat; void* vdev_cant_write; void* vdev_cant_read; struct TYPE_22__** vdev_child; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_23__ {int spa_dsl_pool; TYPE_3__* spa_root_vdev; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_21__ {TYPE_3__** vdev_child; int * vdev_ops; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;

void
FUNC_13(spa_t *VAR_8, vdev_t *VAR_9)
{
 vdev_t *VAR_10 = VAR_8->spa_root_vdev;

 FUNC_0(FUNC_3(VAR_8, VAR_4, VAR_3) == VAR_4);

 if (VAR_9 == ((void*)0))
  VAR_9 = VAR_10;

 VAR_9->vdev_stat.vs_read_errors = 0;
 VAR_9->vdev_stat.vs_write_errors = 0;
 VAR_9->vdev_stat.vs_checksum_errors = 0;
 VAR_9->vdev_stat.vs_slow_ios = 0;

 for (int VAR_11 = 0; VAR_11 < VAR_9->vdev_children; VAR_11++)
  FUNC_13(VAR_8, VAR_9->vdev_child[VAR_11]);




 if (!FUNC_6(VAR_9))
  return;







 if (VAR_9->vdev_faulted || VAR_9->vdev_degraded ||
     !FUNC_8(VAR_9) || !FUNC_12(VAR_9)) {





  VAR_9->vdev_forcefault = VAR_1;

  VAR_9->vdev_faulted = VAR_9->vdev_degraded = 0ULL;
  VAR_9->vdev_cant_read = VAR_0;
  VAR_9->vdev_cant_write = VAR_0;
  VAR_9->vdev_stat.vs_aux = 0;

  FUNC_9(VAR_9 == VAR_10 ? VAR_10 : VAR_9->vdev_top);

  VAR_9->vdev_forcefault = VAR_0;

  if (VAR_9 != VAR_10 && FUNC_12(VAR_9->vdev_top))
   FUNC_11(VAR_9->vdev_top);

  if (VAR_9->vdev_aux == ((void*)0) && !FUNC_7(VAR_9)) {
   if (FUNC_1(VAR_8->spa_dsl_pool) &&
       FUNC_5(VAR_8,
       VAR_6))
    FUNC_10(VAR_8, VAR_9);
   else
    FUNC_2(VAR_8, VAR_5);
  }

  FUNC_4(VAR_8, VAR_9, ((void*)0), VAR_2);
 }






 if (!FUNC_7(VAR_9) && VAR_9->vdev_parent != ((void*)0) &&
     VAR_9->vdev_parent->vdev_ops == &VAR_7 &&
     VAR_9->vdev_parent->vdev_child[0] == VAR_9)
  VAR_9->vdev_unspare = VAR_1;
}
