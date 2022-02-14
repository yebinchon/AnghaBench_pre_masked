
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_btree_t ;
typedef int zfs_btree_index_t ;
struct TYPE_7__ {int * vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_8__ {int trim_extent_bytes_max; int trim_extent_bytes_min; TYPE_5__* trim_tree; int trim_type; scalar_t__ trim_bytes_done; int trim_start_time; TYPE_1__* trim_vdev; } ;
typedef TYPE_2__ trim_args_t ;
typedef int spa_t ;
typedef int range_seg_t ;
struct TYPE_9__ {int rt_root; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (int *,int ,int ,int ,int,int,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int *,int *) ;

__attribute__((used)) static int
FUNC_8(trim_args_t *VAR_1)
{
 vdev_t *VAR_2 = VAR_1->trim_vdev;
 zfs_btree_t *VAR_3 = &VAR_1->trim_tree->rt_root;
 zfs_btree_index_t VAR_4;
 uint64_t VAR_5 = VAR_1->trim_extent_bytes_max;
 uint64_t VAR_6 = VAR_1->trim_extent_bytes_min;
 spa_t *VAR_7 = VAR_2->vdev_spa;

 VAR_1->trim_start_time = FUNC_1();
 VAR_1->trim_bytes_done = 0;

 for (range_seg_t *VAR_8 = FUNC_6(VAR_3, &VAR_4); VAR_8 != ((void*)0);
     VAR_8 = FUNC_7(VAR_3, &VAR_4, &VAR_4)) {
  uint64_t VAR_9 = FUNC_2(VAR_8, VAR_1->trim_tree) - FUNC_3(VAR_8,
      VAR_1->trim_tree);

  if (VAR_6 && VAR_9 < VAR_6) {
   FUNC_4(VAR_7, VAR_1->trim_type,
       0, 0, 1, VAR_9, 0, 0);
   continue;
  }


  uint64_t VAR_10 = ((VAR_9 - 1) / VAR_5) + 1;

  for (uint64_t VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
   int VAR_12;

   VAR_12 = FUNC_5(VAR_1, VAR_0 +
       FUNC_3(VAR_8, VAR_1->trim_tree) +
       (VAR_11 *VAR_5), FUNC_0(VAR_9 -
       (VAR_11 * VAR_5), VAR_5));
   if (VAR_12 != 0) {
    return (VAR_12);
   }
  }
 }

 return (0);
}
