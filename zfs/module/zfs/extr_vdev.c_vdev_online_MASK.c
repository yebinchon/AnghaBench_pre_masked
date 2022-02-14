
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ vdev_state; int vdev_checkremove; int vdev_forcefault; int vdev_expanding; scalar_t__ vdev_initialize_state; scalar_t__ vdev_trim_state; int vdev_trim_lock; int vdev_trim_secure; int vdev_trim_partial; int vdev_trim_rate; int * vdev_trim_thread; int vdev_initialize_lock; int * vdev_initialize_thread; scalar_t__ vdev_aux; int vdev_unspare; struct TYPE_18__** vdev_child; struct TYPE_18__* vdev_parent; TYPE_5__* vdev_ops; int vdev_expansion_time; void* vdev_tmpoffline; void* vdev_offline; struct TYPE_18__* vdev_top; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ vdev_state_t ;
typedef int uint64_t ;
struct TYPE_19__ {scalar_t__ spa_autoexpand; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int boolean_t ;
struct TYPE_20__ {int vdev_op_leaf; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_5__ VAR_14 ;
 int FUNC_11 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;

int
FUNC_13(spa_t *VAR_15, uint64_t VAR_16, uint64_t VAR_17, vdev_state_t *VAR_18)
{
 vdev_t *VAR_19, *VAR_20, *VAR_21, *VAR_22 = VAR_15->spa_root_vdev;
 boolean_t VAR_23;
 vdev_state_t VAR_24;

 FUNC_6(VAR_15, VAR_5);

 if ((VAR_19 = FUNC_5(VAR_15, VAR_16, VAR_1)) == ((void*)0))
  return (FUNC_7(VAR_15, ((void*)0), VAR_2));

 if (!VAR_19->vdev_ops->vdev_op_leaf)
  return (FUNC_7(VAR_15, ((void*)0), VAR_3));

 VAR_23 = (VAR_19->vdev_offline || VAR_19->vdev_tmpoffline);
 VAR_24 = VAR_19->vdev_state;

 VAR_20 = VAR_19->vdev_top;
 VAR_19->vdev_offline = VAR_0;
 VAR_19->vdev_tmpoffline = VAR_0;
 VAR_19->vdev_checkremove = !!(VAR_17 & VAR_10);
 VAR_19->vdev_forcefault = !!(VAR_17 & VAR_12);


 if (!VAR_19->vdev_aux) {
  for (VAR_21 = VAR_19; VAR_21 != VAR_22; VAR_21 = VAR_21->vdev_parent)
   VAR_21->vdev_expanding = !!((VAR_17 & VAR_11) ||
       VAR_15->spa_autoexpand);
  VAR_19->vdev_expansion_time = FUNC_0();
 }

 FUNC_10(VAR_20);
 VAR_19->vdev_checkremove = VAR_19->vdev_forcefault = VAR_0;

 if (!VAR_19->vdev_aux) {
  for (VAR_21 = VAR_19; VAR_21 != VAR_22; VAR_21 = VAR_21->vdev_parent)
   VAR_21->vdev_expanding = VAR_0;
 }

 if (VAR_18)
  *VAR_18 = VAR_19->vdev_state;
 if ((VAR_17 & VAR_13) &&
     !FUNC_9(VAR_19) && VAR_19->vdev_parent &&
     VAR_19->vdev_parent->vdev_ops == &VAR_14 &&
     VAR_19->vdev_parent->vdev_child[0] == VAR_19)
  VAR_19->vdev_unspare = VAR_1;

 if ((VAR_17 & VAR_11) || VAR_15->spa_autoexpand) {


  if (VAR_19->vdev_aux)
   return (FUNC_7(VAR_15, VAR_19, VAR_3));
  FUNC_3(VAR_15, VAR_6);
 }


 FUNC_1(&VAR_19->vdev_initialize_lock);
 if (FUNC_12(VAR_19) &&
     VAR_19->vdev_initialize_thread == ((void*)0) &&
     VAR_19->vdev_initialize_state == VAR_7) {
  (void) FUNC_8(VAR_19);
 }
 FUNC_2(&VAR_19->vdev_initialize_lock);


 FUNC_1(&VAR_19->vdev_trim_lock);
 if (FUNC_12(VAR_19) &&
     VAR_19->vdev_trim_thread == ((void*)0) &&
     VAR_19->vdev_trim_state == VAR_9) {
  (void) FUNC_11(VAR_19, VAR_19->vdev_trim_rate, VAR_19->vdev_trim_partial,
      VAR_19->vdev_trim_secure);
 }
 FUNC_2(&VAR_19->vdev_trim_lock);

 if (VAR_23 ||
     (VAR_24 < VAR_8 &&
     VAR_19->vdev_state >= VAR_8))
  FUNC_4(VAR_15, VAR_19, ((void*)0), VAR_4);

 return (FUNC_7(VAR_15, VAR_19, 0));
}
