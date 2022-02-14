
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ vdev_leaf_zap; size_t vdev_trim_state; size_t vdev_children; struct TYPE_9__** vdev_child; int vdev_trim_lock; int vdev_trim_secure; int vdev_trim_partial; int vdev_trim_rate; int * vdev_trim_thread; TYPE_1__* vdev_top; scalar_t__ vdev_offline; scalar_t__ vdev_trim_action_time; TYPE_7__* vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
typedef int trim_state ;
typedef int timestamp ;
typedef scalar_t__ time_t ;
struct TYPE_10__ {int spa_meta_objset; } ;
struct TYPE_8__ {int vdev_removing; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_7__*,int ,int ) ;
 int VAR_8 ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,scalar_t__,int ,int,int,size_t*) ;

void
FUNC_10(vdev_t *VAR_9)
{
 FUNC_0(FUNC_1(&VAR_8));
 FUNC_0(!FUNC_5(VAR_9->vdev_spa, VAR_2, VAR_1));

 if (VAR_9->vdev_leaf_zap != 0) {
  FUNC_3(&VAR_9->vdev_trim_lock);
  uint64_t VAR_10 = VAR_6;
  int VAR_11 = FUNC_9(VAR_9->vdev_spa->spa_meta_objset,
      VAR_9->vdev_leaf_zap, VAR_4,
      sizeof (VAR_10), 1, &VAR_10);
  FUNC_0(VAR_11 == 0 || VAR_11 == VAR_0);
  VAR_9->vdev_trim_state = VAR_10;

  uint64_t VAR_12 = 0;
  VAR_11 = FUNC_9(VAR_9->vdev_spa->spa_meta_objset,
      VAR_9->vdev_leaf_zap, VAR_3,
      sizeof (VAR_12), 1, &VAR_12);
  FUNC_0(VAR_11 == 0 || VAR_11 == VAR_0);
  VAR_9->vdev_trim_action_time = (time_t)VAR_12;

  if (VAR_9->vdev_trim_state == VAR_7 ||
      VAR_9->vdev_offline) {

   FUNC_2(FUNC_7(VAR_9));
  } else if (VAR_9->vdev_trim_state == VAR_5 &&
      FUNC_8(VAR_9) && !VAR_9->vdev_top->vdev_removing &&
      VAR_9->vdev_trim_thread == ((void*)0)) {
   FUNC_2(FUNC_7(VAR_9));
   FUNC_6(VAR_9, VAR_9->vdev_trim_rate,
       VAR_9->vdev_trim_partial, VAR_9->vdev_trim_secure);
  }

  FUNC_4(&VAR_9->vdev_trim_lock);
 }

 for (uint64_t VAR_13 = 0; VAR_13 < VAR_9->vdev_children; VAR_13++) {
  FUNC_10(VAR_9->vdev_child[VAR_13]);
 }
}
