
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int io_flags; int io_spa; TYPE_4__* io_vsd; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_13__ {int vs_checksum_errors; } ;
struct TYPE_15__ {int vdev_stat_lock; TYPE_1__ vdev_stat; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_16__ {int iv_splits; } ;
typedef TYPE_4__ indirect_vsd_t ;
struct TYPE_17__ {int is_children; int is_size; int is_target_offset; TYPE_6__* is_child; } ;
typedef TYPE_5__ indirect_split_t ;
struct TYPE_18__ {TYPE_3__* ic_vdev; int * ic_data; } ;
typedef TYPE_6__ indirect_child_t ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_3__*,int *,TYPE_2__*,int ,int ,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_5(zio_t *VAR_1)
{
 indirect_vsd_t *VAR_2 = VAR_1->io_vsd;

 if (VAR_1->io_flags & VAR_0)
  return;

 for (indirect_split_t *VAR_3 = FUNC_0(&VAR_2->iv_splits);
     VAR_3 != ((void*)0); VAR_3 = FUNC_1(&VAR_2->iv_splits, VAR_3)) {
  for (int VAR_4 = 0; VAR_4 < VAR_3->is_children; VAR_4++) {
   indirect_child_t *VAR_5 = &VAR_3->is_child[VAR_4];

   if (VAR_5->ic_data == ((void*)0))
    continue;

   vdev_t *VAR_6 = VAR_5->ic_vdev;

   FUNC_2(&VAR_6->vdev_stat_lock);
   VAR_6->vdev_stat.vs_checksum_errors++;
   FUNC_3(&VAR_6->vdev_stat_lock);

   FUNC_4(VAR_1->io_spa, VAR_6, ((void*)0), VAR_1,
       VAR_3->is_target_offset, VAR_3->is_size,
       ((void*)0), ((void*)0), ((void*)0));
  }
 }
}
