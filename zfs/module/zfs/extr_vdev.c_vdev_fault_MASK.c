
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ vs_aux; } ;
struct TYPE_12__ {unsigned long long vdev_faulted; unsigned long long vdev_degraded; int * vdev_aux; int vdev_islog; void* vdev_delayed_close; scalar_t__ vdev_label_aux; void* vdev_tmpoffline; TYPE_2__ vdev_stat; struct TYPE_12__* vdev_top; TYPE_1__* vdev_ops; } ;
typedef TYPE_3__ vdev_t ;
typedef scalar_t__ vdev_aux_t ;
typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_10__ {int vdev_op_leaf; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_0 (int *,int ,void*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,void*,int ,scalar_t__) ;

int
FUNC_7(spa_t *VAR_9, uint64_t VAR_10, vdev_aux_t VAR_11)
{
 vdev_t *VAR_12, *VAR_13;

 FUNC_1(VAR_9, VAR_4);

 if ((VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_1)) == ((void*)0))
  return (FUNC_2(VAR_9, ((void*)0), VAR_2));

 if (!VAR_12->vdev_ops->vdev_op_leaf)
  return (FUNC_2(VAR_9, ((void*)0), VAR_3));

 VAR_13 = VAR_12->vdev_top;





 if (VAR_11 == VAR_6) {
  VAR_12->vdev_stat.vs_aux = VAR_5;
  VAR_12->vdev_tmpoffline = VAR_0;
  VAR_11 = VAR_5;
 } else {
  VAR_12->vdev_tmpoffline = VAR_1;
 }






 VAR_12->vdev_label_aux = VAR_11;




 VAR_12->vdev_delayed_close = VAR_0;
 VAR_12->vdev_faulted = 1ULL;
 VAR_12->vdev_degraded = 0ULL;
 FUNC_6(VAR_12, VAR_0, VAR_8, VAR_11);





 if (!VAR_13->vdev_islog && VAR_12->vdev_aux == ((void*)0) && FUNC_3(VAR_12)) {
  VAR_12->vdev_degraded = 1ULL;
  VAR_12->vdev_faulted = 0ULL;





  FUNC_5(VAR_13);

  if (FUNC_4(VAR_12))
   FUNC_6(VAR_12, VAR_0, VAR_7, VAR_11);
 }

 return (FUNC_2(VAR_9, VAR_12, 0));
}
