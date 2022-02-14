
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;


struct TYPE_23__ {scalar_t__ vs_aux; } ;
struct TYPE_24__ {scalar_t__ vdev_open_thread; scalar_t__ vdev_state; scalar_t__ vdev_min_asize; scalar_t__ vdev_children; scalar_t__ vdev_label_aux; scalar_t__ vdev_psize; scalar_t__ vdev_asize; scalar_t__ vdev_ashift; scalar_t__ vdev_alloc_bias; scalar_t__ vdev_islog; TYPE_15__* vdev_ops; int * vdev_aux; struct TYPE_24__* vdev_top; scalar_t__ vdev_expanding; scalar_t__ vdev_max_asize; int vdev_copy_uberblocks; int * vdev_parent; TYPE_1__** vdev_child; scalar_t__ vdev_ishole; scalar_t__ vdev_degraded; scalar_t__ vdev_faulted; void* vdev_removed; TYPE_2__ vdev_stat; void* vdev_reopening; scalar_t__ vdev_offline; void* vdev_cant_write; void* vdev_cant_read; TYPE_4__* vdev_spa; } ;
typedef TYPE_3__ vdev_t ;
typedef int vdev_label_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_25__ {scalar_t__ spa_max_ashift; scalar_t__ spa_min_ashift; int spa_dsl_pool; int spa_scrub_reopen; scalar_t__ spa_autoexpand; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_22__ {scalar_t__ vdev_state; } ;
struct TYPE_21__ {int (* vdev_op_open ) (TYPE_3__*,scalar_t__*,scalar_t__*,scalar_t__*) ;scalar_t__ vdev_op_leaf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_3__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 TYPE_15__ VAR_32 ;
 int FUNC_9 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int *,int *) ;
 int FUNC_11 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ,TYPE_4__*,TYPE_3__*,int *,int *,int ,int ) ;
 int FUNC_15 (TYPE_3__*,int *,int ) ;
 scalar_t__ VAR_33 ;
 int FUNC_16 (int ) ;

int
FUNC_17(vdev_t *VAR_34)
{
 spa_t *VAR_35 = VAR_34->vdev_spa;
 int VAR_36;
 uint64_t VAR_37 = 0;
 uint64_t VAR_38 = 0;
 uint64_t VAR_39, VAR_40, VAR_41;
 uint64_t VAR_42 = 0;

 FUNC_0(VAR_34->vdev_open_thread == VAR_31 ||
     FUNC_5(VAR_35, VAR_10, VAR_9) == VAR_10);
 FUNC_0(VAR_34->vdev_state == VAR_26 ||
     VAR_34->vdev_state == VAR_25 ||
     VAR_34->vdev_state == VAR_30);

 VAR_34->vdev_stat.vs_aux = VAR_19;
 VAR_34->vdev_cant_read = VAR_2;
 VAR_34->vdev_cant_write = VAR_2;
 VAR_34->vdev_min_asize = FUNC_8(VAR_34);





 if (!VAR_34->vdev_removed && VAR_34->vdev_faulted) {
  FUNC_0(VAR_34->vdev_children == 0);
  FUNC_0(VAR_34->vdev_label_aux == VAR_17 ||
      VAR_34->vdev_label_aux == VAR_18);
  FUNC_13(VAR_34, VAR_3, VAR_28,
      VAR_34->vdev_label_aux);
  return (FUNC_2(VAR_6));
 } else if (VAR_34->vdev_offline) {
  FUNC_0(VAR_34->vdev_children == 0);
  FUNC_13(VAR_34, VAR_3, VAR_30, VAR_19);
  return (FUNC_2(VAR_6));
 }

 VAR_36 = VAR_34->vdev_ops->vdev_op_open(VAR_34, &VAR_37, &VAR_38, &VAR_42);






 if (VAR_37 > VAR_38) {
  FUNC_13(VAR_34, VAR_3, VAR_25,
      VAR_20);
  return (FUNC_2(VAR_6));
 }





 VAR_34->vdev_reopening = VAR_2;
 if (VAR_33 && VAR_36 == 0)
  VAR_36 = FUNC_15(VAR_34, ((void*)0), VAR_6);

 if (VAR_36) {
  if (VAR_34->vdev_removed &&
      VAR_34->vdev_stat.vs_aux != VAR_20)
   VAR_34->vdev_removed = VAR_2;

  if (VAR_34->vdev_stat.vs_aux == VAR_16) {
   FUNC_13(VAR_34, VAR_3, VAR_30,
       VAR_34->vdev_stat.vs_aux);
  } else {
   FUNC_13(VAR_34, VAR_3, VAR_25,
       VAR_34->vdev_stat.vs_aux);
  }
  return (VAR_36);
 }

 VAR_34->vdev_removed = VAR_2;





 if (VAR_34->vdev_faulted) {
  FUNC_0(VAR_34->vdev_children == 0);
  FUNC_0(VAR_34->vdev_label_aux == VAR_17 ||
      VAR_34->vdev_label_aux == VAR_18);
  FUNC_13(VAR_34, VAR_3, VAR_28,
      VAR_34->vdev_label_aux);
  return (FUNC_2(VAR_6));
 }

 if (VAR_34->vdev_degraded) {
  FUNC_0(VAR_34->vdev_children == 0);
  FUNC_13(VAR_34, VAR_3, VAR_27,
      VAR_17);
 } else {
  FUNC_13(VAR_34, VAR_3, VAR_29, 0);
 }




 if (VAR_34->vdev_ishole || VAR_34->vdev_ops == &VAR_32)
  return (0);

 for (int VAR_43 = 0; VAR_43 < VAR_34->vdev_children; VAR_43++) {
  if (VAR_34->vdev_child[VAR_43]->vdev_state != VAR_29) {
   FUNC_13(VAR_34, VAR_3, VAR_27,
       VAR_19);
   break;
  }
 }

 VAR_37 = FUNC_1(VAR_37, (uint64_t)sizeof (vdev_label_t));
 VAR_38 = FUNC_1(VAR_38, (uint64_t)sizeof (vdev_label_t));

 if (VAR_34->vdev_children == 0) {
  if (VAR_37 < VAR_13) {
   FUNC_13(VAR_34, VAR_3, VAR_25,
       VAR_21);
   return (FUNC_2(VAR_7));
  }
  VAR_41 = VAR_37;
  VAR_39 = VAR_37 - (VAR_24 + VAR_23);
  VAR_40 = VAR_38 - (VAR_24 +
      VAR_23);
 } else {
  if (VAR_34->vdev_parent != ((void*)0) && VAR_37 < VAR_13 -
      (VAR_24 + VAR_23)) {
   FUNC_13(VAR_34, VAR_3, VAR_25,
       VAR_21);
   return (FUNC_2(VAR_7));
  }
  VAR_41 = 0;
  VAR_39 = VAR_37;
  VAR_40 = VAR_38;
 }





 if ((VAR_41 > VAR_34->vdev_psize) && (VAR_34->vdev_psize != 0))
  VAR_34->vdev_copy_uberblocks = VAR_3;

 VAR_34->vdev_psize = VAR_41;




 if (VAR_39 < VAR_34->vdev_min_asize) {
  FUNC_13(VAR_34, VAR_3, VAR_25,
      VAR_15);
  return (FUNC_2(VAR_5));
 }

 if (VAR_34->vdev_asize == 0) {




  VAR_34->vdev_asize = VAR_39;
  VAR_34->vdev_max_asize = VAR_40;
  if (VAR_34->vdev_ashift == 0) {
   VAR_34->vdev_ashift = VAR_42;
  }
  if (VAR_34->vdev_ashift != 0 && (VAR_34->vdev_ashift < VAR_1 ||
      VAR_34->vdev_ashift > VAR_0)) {
   FUNC_13(VAR_34, VAR_3, VAR_25,
       VAR_14);
   return (FUNC_2(VAR_4));
  }
 } else {





  if (VAR_42 > VAR_34->vdev_top->vdev_ashift &&
      VAR_34->vdev_ops->vdev_op_leaf) {
   FUNC_14(VAR_8,
       VAR_35, VAR_34, ((void*)0), ((void*)0), 0, 0);
  }

  VAR_34->vdev_max_asize = VAR_40;
 }
 if (VAR_34->vdev_state == VAR_29 &&
     ((VAR_39 > VAR_34->vdev_asize &&
     (VAR_34->vdev_expanding || VAR_35->spa_autoexpand)) ||
     (VAR_39 < VAR_34->vdev_asize)))
  VAR_34->vdev_asize = VAR_39;

 FUNC_12(VAR_34);





 if (VAR_34->vdev_ops->vdev_op_leaf &&
     (VAR_36 = FUNC_16(FUNC_9(VAR_34, ((void*)0)))) != 0) {
  FUNC_13(VAR_34, VAR_3, VAR_28,
      VAR_17);
  return (VAR_36);
 }




 if (VAR_34->vdev_top == VAR_34 && VAR_34->vdev_ashift != 0 &&
     VAR_34->vdev_alloc_bias == VAR_22 &&
     VAR_34->vdev_islog == 0 && VAR_34->vdev_aux == ((void*)0)) {
  if (VAR_34->vdev_ashift > VAR_35->spa_max_ashift)
   VAR_35->spa_max_ashift = VAR_34->vdev_ashift;
  if (VAR_34->vdev_ashift < VAR_35->spa_min_ashift)
   VAR_35->spa_min_ashift = VAR_34->vdev_ashift;
 }






 if (VAR_34->vdev_ops->vdev_op_leaf && !VAR_35->spa_scrub_reopen &&
     FUNC_10(VAR_34, ((void*)0), ((void*)0))) {
  if (FUNC_3(VAR_35->spa_dsl_pool) &&
      FUNC_6(VAR_35, VAR_12))
   FUNC_11(VAR_35, VAR_34);
  else
   FUNC_4(VAR_35, VAR_11);
 }

 return (0);
}
