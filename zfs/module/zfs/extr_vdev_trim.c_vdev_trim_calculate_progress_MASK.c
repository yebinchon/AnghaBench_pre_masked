
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int zfs_btree_t ;
typedef int zfs_btree_index_t ;
struct TYPE_15__ {scalar_t__ vdev_leaf_zap; size_t vdev_trim_bytes_est; size_t vdev_trim_bytes_done; scalar_t__ vdev_trim_last_offset; TYPE_1__* vdev_top; int vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_16__ {int rt_root; } ;
typedef TYPE_3__ range_tree_t ;
typedef int range_seg_t ;
struct TYPE_17__ {scalar_t__ rs_start; scalar_t__ rs_end; } ;
typedef TYPE_4__ range_seg64_t ;
struct TYPE_18__ {size_t ms_size; scalar_t__ ms_start; int ms_lock; TYPE_3__* ms_allocatable; } ;
typedef TYPE_5__ metaslab_t ;
struct TYPE_14__ {size_t vdev_ms_count; size_t vdev_children; int * vdev_ops; TYPE_5__** vdev_ms; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_2__*,TYPE_4__*,TYPE_4__*) ;
 int * FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_12(vdev_t *VAR_4)
{
 FUNC_0(FUNC_8(VAR_4->vdev_spa, VAR_2, VAR_0) ||
     FUNC_8(VAR_4->vdev_spa, VAR_2, VAR_1));
 FUNC_0(VAR_4->vdev_leaf_zap != 0);

 VAR_4->vdev_trim_bytes_est = 0;
 VAR_4->vdev_trim_bytes_done = 0;

 for (uint64_t VAR_5 = 0; VAR_5 < VAR_4->vdev_top->vdev_ms_count; VAR_5++) {
  metaslab_t *VAR_6 = VAR_4->vdev_top->vdev_ms[VAR_5];
  FUNC_4(&VAR_6->ms_lock);

  uint64_t VAR_7 = VAR_6->ms_size -
      FUNC_2(VAR_6);

  if (VAR_4->vdev_top->vdev_ops == &VAR_3)
   VAR_7 /= VAR_4->vdev_top->vdev_children;






  range_seg64_t VAR_8, VAR_9;
  VAR_8.rs_start = VAR_6->ms_start;
  VAR_8.rs_end = VAR_6->ms_start + VAR_6->ms_size;
  FUNC_9(VAR_4, &VAR_8, &VAR_9);

  if (VAR_4->vdev_trim_last_offset <= VAR_9.rs_start) {
   VAR_4->vdev_trim_bytes_est += VAR_7;
   FUNC_5(&VAR_6->ms_lock);
   continue;
  } else if (VAR_4->vdev_trim_last_offset > VAR_9.rs_end) {
   VAR_4->vdev_trim_bytes_done += VAR_7;
   VAR_4->vdev_trim_bytes_est += VAR_7;
   FUNC_5(&VAR_6->ms_lock);
   continue;
  }






  FUNC_1(FUNC_3(VAR_6));

  range_tree_t *VAR_10 = VAR_6->ms_allocatable;
  zfs_btree_t *VAR_11 = &VAR_10->rt_root;
  zfs_btree_index_t VAR_12;
  for (range_seg_t *VAR_13 = FUNC_10(VAR_11, &VAR_12);
      VAR_13 != ((void*)0); VAR_13 = FUNC_11(VAR_11, &VAR_12, &VAR_12)) {
   VAR_8.rs_start = FUNC_7(VAR_13, VAR_10);
   VAR_8.rs_end = FUNC_6(VAR_13, VAR_10);
   FUNC_9(VAR_4, &VAR_8, &VAR_9);

   uint64_t VAR_14 = VAR_9.rs_end -
       VAR_9.rs_start;
   VAR_4->vdev_trim_bytes_est += VAR_14;
   if (VAR_4->vdev_trim_last_offset >= VAR_9.rs_end) {
    VAR_4->vdev_trim_bytes_done += VAR_14;
   } else if (VAR_4->vdev_trim_last_offset >
       VAR_9.rs_start &&
       VAR_4->vdev_trim_last_offset <=
       VAR_9.rs_end) {
    VAR_4->vdev_trim_bytes_done +=
        VAR_4->vdev_trim_last_offset -
        VAR_9.rs_start;
   }
  }
  FUNC_5(&VAR_6->ms_lock);
 }
}
