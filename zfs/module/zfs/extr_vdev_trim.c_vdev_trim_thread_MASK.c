
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__* vdev_trim_inflight; int vdev_trim_lock; int vdev_trim_cv; int * vdev_trim_thread; scalar_t__ vdev_trim_secure; scalar_t__ vdev_trim_partial; scalar_t__ vdev_trim_rate; int vdev_trim_exit_wanted; int vdev_trim_io_lock; int vdev_trim_io_cv; TYPE_1__* vdev_top; int vdev_detached; scalar_t__ vdev_trim_last_offset; int * vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_17__ {int trim_tree; TYPE_4__* trim_msp; int trim_extent_bytes_min; int trim_flags; int trim_type; int trim_extent_bytes_max; TYPE_2__* trim_vdev; } ;
typedef TYPE_3__ trim_args_t ;
typedef int spa_t ;
struct TYPE_18__ {int ms_lock; int ms_trim; int ms_allocatable; int * ms_sm; } ;
typedef TYPE_4__ metaslab_t ;
struct TYPE_15__ {size_t vdev_ms_count; TYPE_4__** vdev_ms; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int *,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int ,int ,TYPE_3__*) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_20 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_21 (TYPE_3__*) ;
 scalar_t__ FUNC_22 (TYPE_2__*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_23(void *VAR_13)
{
 vdev_t *VAR_14 = VAR_13;
 spa_t *VAR_15 = VAR_14->vdev_spa;
 trim_args_t VAR_16;
 int VAR_17 = 0;






 FUNC_16(FUNC_15(VAR_14->vdev_spa), 0);

 FUNC_0(FUNC_17(VAR_14));
 FUNC_13(VAR_15, VAR_5, VAR_2, VAR_4);

 VAR_14->vdev_trim_last_offset = 0;
 VAR_14->vdev_trim_rate = 0;
 VAR_14->vdev_trim_partial = 0;
 VAR_14->vdev_trim_secure = 0;

 FUNC_1(FUNC_20(VAR_14));

 VAR_16.trim_vdev = VAR_14;
 VAR_16.trim_extent_bytes_max = VAR_11;
 VAR_16.trim_extent_bytes_min = VAR_12;
 VAR_16.trim_tree = FUNC_9(((void*)0), VAR_3, ((void*)0), 0, 0);
 VAR_16.trim_type = VAR_7;
 VAR_16.trim_flags = 0;






 if (VAR_14->vdev_trim_secure) {
  VAR_16.trim_flags |= VAR_9;
  VAR_16.trim_extent_bytes_min = VAR_6;
 }

 uint64_t VAR_18 = 0;
 for (uint64_t VAR_19 = 0; !VAR_14->vdev_detached &&
     VAR_19 < VAR_14->vdev_top->vdev_ms_count; VAR_19++) {
  metaslab_t *VAR_20 = VAR_14->vdev_top->vdev_ms[VAR_19];





  if (VAR_14->vdev_top->vdev_ms_count != VAR_18) {
   FUNC_18(VAR_14);
   VAR_18 = VAR_14->vdev_top->vdev_ms_count;
  }

  FUNC_14(VAR_15, VAR_5, VAR_2);
  FUNC_4(VAR_20);
  FUNC_7(&VAR_20->ms_lock);
  FUNC_1(FUNC_6(VAR_20));





  if (VAR_20->ms_sm == ((void*)0) && VAR_14->vdev_trim_partial) {
   FUNC_8(&VAR_20->ms_lock);
   FUNC_5(VAR_20, VAR_0, VAR_0);
   FUNC_13(VAR_15, VAR_5, VAR_2, VAR_4);
   FUNC_18(VAR_14);
   continue;
  }

  VAR_16.trim_msp = VAR_20;
  FUNC_12(VAR_20->ms_allocatable, VAR_10, &VAR_16);
  FUNC_11(VAR_20->ms_trim, ((void*)0), ((void*)0));
  FUNC_8(&VAR_20->ms_lock);

  VAR_17 = FUNC_21(&VAR_16);
  FUNC_5(VAR_20, VAR_1, VAR_0);
  FUNC_13(VAR_15, VAR_5, VAR_2, VAR_4);

  FUNC_11(VAR_16.trim_tree, ((void*)0), ((void*)0));
  if (VAR_17 != 0)
   break;
 }

 FUNC_14(VAR_15, VAR_5, VAR_2);
 FUNC_7(&VAR_14->vdev_trim_io_lock);
 while (VAR_14->vdev_trim_inflight[0] > 0) {
  FUNC_3(&VAR_14->vdev_trim_io_cv, &VAR_14->vdev_trim_io_lock);
 }
 FUNC_8(&VAR_14->vdev_trim_io_lock);

 FUNC_10(VAR_16.trim_tree);

 FUNC_7(&VAR_14->vdev_trim_lock);
 if (!VAR_14->vdev_trim_exit_wanted && FUNC_22(VAR_14)) {
  FUNC_19(VAR_14, VAR_8,
      VAR_14->vdev_trim_rate, VAR_14->vdev_trim_partial,
      VAR_14->vdev_trim_secure);
 }
 FUNC_0(VAR_14->vdev_trim_thread != ((void*)0) || VAR_14->vdev_trim_inflight[0] == 0);
 FUNC_8(&VAR_14->vdev_trim_lock);
 FUNC_16(FUNC_15(VAR_15), 0);
 FUNC_7(&VAR_14->vdev_trim_lock);

 VAR_14->vdev_trim_thread = ((void*)0);
 FUNC_2(&VAR_14->vdev_trim_cv);
 FUNC_8(&VAR_14->vdev_trim_lock);
}
