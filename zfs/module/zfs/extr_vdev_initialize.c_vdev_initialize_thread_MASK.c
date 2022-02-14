
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ vdev_initialize_inflight; int vdev_initialize_lock; int vdev_initialize_cv; int * vdev_initialize_thread; int vdev_initialize_exit_wanted; int * vdev_initialize_tree; int vdev_initialize_io_lock; int vdev_initialize_io_cv; TYPE_1__* vdev_top; int vdev_detached; scalar_t__ vdev_initialize_last_offset; int * vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
typedef int spa_t ;
struct TYPE_16__ {int ms_lock; int ms_allocatable; int ms_loading; int ms_loaded; } ;
typedef TYPE_3__ metaslab_t ;
typedef int boolean_t ;
typedef int abd_t ;
struct TYPE_14__ {size_t vdev_ms_count; TYPE_3__** vdev_ms; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int ,int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int ,int ,TYPE_2__*) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ) ;
 int * FUNC_17 () ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 int FUNC_21 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_22 (TYPE_2__*,int *) ;
 int FUNC_23 (TYPE_2__*) ;
 scalar_t__ FUNC_24 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_25(void *VAR_8)
{
 vdev_t *VAR_9 = VAR_8;
 spa_t *VAR_10 = VAR_9->vdev_spa;
 int VAR_11 = 0;
 uint64_t VAR_12 = 0;

 FUNC_0(FUNC_23(VAR_9));
 FUNC_13(VAR_10, VAR_5, VAR_2, VAR_4);

 VAR_9->vdev_initialize_last_offset = 0;
 FUNC_1(FUNC_21(VAR_9));

 abd_t *VAR_13 = FUNC_17();

 VAR_9->vdev_initialize_tree = FUNC_9(((void*)0), VAR_3, ((void*)0),
     0, 0);

 for (uint64_t VAR_14 = 0; !VAR_9->vdev_detached &&
     VAR_14 < VAR_9->vdev_top->vdev_ms_count; VAR_14++) {
  metaslab_t *VAR_15 = VAR_9->vdev_top->vdev_ms[VAR_14];
  boolean_t VAR_16 = VAR_0;





  if (VAR_9->vdev_top->vdev_ms_count != VAR_12) {
   FUNC_19(VAR_9);
   VAR_12 = VAR_9->vdev_top->vdev_ms_count;
  }

  FUNC_14(VAR_10, VAR_5, VAR_2);
  FUNC_4(VAR_15);
  FUNC_7(&VAR_15->ms_lock);
  if (!VAR_15->ms_loaded && !VAR_15->ms_loading)
   VAR_16 = VAR_1;
  FUNC_1(FUNC_6(VAR_15));

  FUNC_12(VAR_15->ms_allocatable, VAR_7,
      VAR_9);
  FUNC_8(&VAR_15->ms_lock);

  VAR_11 = FUNC_22(VAR_9, VAR_13);
  FUNC_5(VAR_15, VAR_1, VAR_16);
  FUNC_13(VAR_10, VAR_5, VAR_2, VAR_4);

  FUNC_11(VAR_9->vdev_initialize_tree, ((void*)0), ((void*)0));
  if (VAR_11 != 0)
   break;
 }

 FUNC_14(VAR_10, VAR_5, VAR_2);
 FUNC_7(&VAR_9->vdev_initialize_io_lock);
 while (VAR_9->vdev_initialize_inflight > 0) {
  FUNC_3(&VAR_9->vdev_initialize_io_cv,
      &VAR_9->vdev_initialize_io_lock);
 }
 FUNC_8(&VAR_9->vdev_initialize_io_lock);

 FUNC_10(VAR_9->vdev_initialize_tree);
 FUNC_18(VAR_13);
 VAR_9->vdev_initialize_tree = ((void*)0);

 FUNC_7(&VAR_9->vdev_initialize_lock);
 if (!VAR_9->vdev_initialize_exit_wanted && FUNC_24(VAR_9)) {
  FUNC_20(VAR_9, VAR_6);
 }
 FUNC_0(VAR_9->vdev_initialize_thread != ((void*)0) ||
     VAR_9->vdev_initialize_inflight == 0);
 FUNC_8(&VAR_9->vdev_initialize_lock);
 FUNC_16(FUNC_15(VAR_10), 0);
 FUNC_7(&VAR_9->vdev_initialize_lock);

 VAR_9->vdev_initialize_thread = ((void*)0);
 FUNC_2(&VAR_9->vdev_initialize_cv);
 FUNC_8(&VAR_9->vdev_initialize_lock);
}
